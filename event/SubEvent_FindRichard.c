-------- EventFlow: SubEvent_FindRichard --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetDayTimeStruct']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryCheckElapsedTime', 'EventQueryGameDataCheckStrayDogTakenAway']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice4', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_052_Child
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorActionAll', 'EventQueryAIScheduleIsWaitingAtRailPoint']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToStarterLinkAnchor']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Animal_Dog_Richard_01
entrypoint: None()
actions: ['EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerAIScheduleSelectSchedule', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_03]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_04]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_05]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_06]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_07]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_08]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_White[Stray_White_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_White[Stray_White_03]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_White[Stray_White_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[StrayDog(Animal_Dog_Actor)]
entrypoint: StrayDog(Animal_Dog_Actor)
actions: ['EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: []
params: None

Actor: Animal_Dog_Richard_01[DogCamera(Animal_Dog_Actor)]
entrypoint: DogCamera(Animal_Dog_Actor)
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: None

void nightTalk_moving() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_BringRichard', 'Index': -1}) {
        Animal_Dog_Richard_01.EventTriggerParticipateEvent()

        call SubEvent_FindRichard_ClearEvent_OpeningAct()


        call SubEvent_FindRichard_ClearEvent()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_BringDog', 'Index': -1}) {

        call WhichStrayDog()

    } else {

        call RichardTalk()

    }
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsAfter_Ready_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_FindRichard', 'StepName': 'Step01', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False})
    }
}

void Ready_Npc_Hylia_052_Child_Talk() {

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_IsAfterFirstExplain', 'Index': -1}) {
        if !Npc_Hylia_052_Child.EventQueryIsOnRecentTalkFlag() {

            call Greeting()

            if !EventWorldManagerController.EventQueryTimeDivision() {

                call RichardTalk_Wander()

            } else {

                call nightTalk_moving()

            }
        } else {
            Event6:
            Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_45', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_26', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_BringRichard', 'Index': -1}) {
                Animal_Dog_Richard_01.EventTriggerParticipateEvent()

                call SubEvent_FindRichard_ClearEvent_OpeningAct()


                call SubEvent_FindRichard_ClearEvent()

            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_BringDog', 'Index': -1}) {

                call WhichStrayDog()

                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsAfter_Ready_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_FindRichard', 'StepName': 'Step01', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_46', 'MaintainPerformanceState': 0})
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_IsAfterFirstExplain', 'Index': -1, 'Value': True})
        goto Event6
    }
}

void SubEvent_FindRichard_ClearEvent() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_RichardGoHome', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Animal_Dog_Richard_01.EventTriggerAIScheduleSelectSchedule()
    Animal_Dog_Richard_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Animal_Dog_Richard_01', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'Actor1ActorName': 'Animal_Dog_Richard_01', 'PosVector': [-1.6299999952316284, 1.0, 0.9700000286102295], 'AtVector': [-0.05999999865889549, 0.33000001311302185, 0.07000000029802322], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_052_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_07', 'MaintainPerformanceState': 0})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'Actor1ActorName': 'Animal_Dog_Richard_01', 'PosVector': [1.6200000047683716, 1.0199999809265137, 0.75], 'AtVector': [-0.029999999329447746, 0.33000001311302185, 0.019999999552965164], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_052_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_09', 'MaintainPerformanceState': 0})
    }


    call DogCamera({'Animal_Dog_ActorName': 'Animal_Dog_Richard_01', 'Animal_Dog_InstanceName': '', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Richard_01")})


    fork {
        Animal_Dog_Richard_01.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Yes', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Animal_Dog_Richard_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    } {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_05', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Hylia_052_Child'})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'FovySetType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.9700000286102295, 2.190000057220459, -3.7100000381469727], 'AtVector': [0.07000000029802322, 1.059999942779541, 0.7300000190734863], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_Hylia_052_Child', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Animal_Dog_Richard_01', 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'EventTalkCameraType': 0, 'Speaker3SetType': 1, 'Spearker3ActorName': 'Player_Event'})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_40', 'MaintainPerformanceState': 0})
    Npc_Hylia_052_Child.EventNPCTurnToTarget({'ActorName': 'Animal_Dog_Richard_01', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 2})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_43', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_43_2', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'}) {

        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'ReveiveItem': 'Obj_Rupee_Blue', 'NpcActorName': 'Npc_EventStarter', 'ASName': 'Wait', 'NpcInstanceName': ''})

        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Animal_Dog_Richard_01', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_33', 'MaintainPerformanceState': 0})
        Event75:

        call SubEvent_FindRichard_ClearEvent_Ending()

    } else {

        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'ReveiveItem': 'Obj_Heart_Piece', 'ASName': 'Handover', 'NpcInstanceName': '', 'NpcActorName': 'Npc_EventStarter'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_FindRichard_GetHeartPiece', 'Index': -1, 'Value': True})
        Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Animal_Dog_Richard_01', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_32', 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_FindRichard', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete'})
        Animal_Dog_Richard_01.EventTriggerAIScheduleSelectSchedule()
        goto Event75
    }
}

void Ready_Npc_Hylia_052_Child_Near() {
    switch Npc_Hylia_052_Child.EventQueryAIScheduleCheckActorActionAll() {
      case [4, 6, 8]:
        Event67:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_04', 'DisplayFrame': 90})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_08'})
        }
      case [5, 9]:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_08'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_10'})
        }
      case 7:
        Event36:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_06'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_07'})
        }
      case 22:
        if !Npc_Hylia_052_Child.EventQueryAIScheduleIsWaitingAtRailPoint() {
            goto Event67
        } else
        goto Event36
    }
}

void Greeting() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SubEvent_FindRichard_GetHeartPiece', 'Index': -1}) {
        if !Npc_Hylia_052_Child.EventQueryIsOnRecentTalkFlag() {
            Event57:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_36', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_27', 'MaintainPerformanceState': 0})
        }
    } else {
        goto Event57
    }
}

void RichardTalk() {
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_24', 'MaintainPerformanceState': 0, 'ASName': 'Act_LookingFor'})
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_39', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_25', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_38', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_23', 'ASName': 'Act_LookingFor', 'MaintainPerformanceState': 0})
        Npc_Hylia_052_Child.EventTriggerRequestLookAtTheFront()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_47', 'MaintainPerformanceState': 0})
    }
}

void SubEvent_FindRichard_ClearEvent_Ending() {

    fork {
        Animal_Dog_Richard_01.EventAIScheduleMoveToAnchor({'AnchorType': 2, 'ASName': 'Run', 'InstanceName': '', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Animal_Dog_Richard_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_44', 'IsWaitEnd': True, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    }

    Npc_Hylia_052_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_42', 'IsCloseDialog': True, 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_FindRichard_RandomAppear_01', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_FindRichard_RandomAppear_02', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'SubEvent_FindRichard_RandomAppear_03', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetDayTimeStruct({'GameDataName': 'Market_Npc_Hylia_052_Child_FoundRichard_ElapsedTime'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_FindRichard_RichardRivival', 'Value': True, 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void SubEvent_FindRichard_ClearEvent_OpeningAct() {
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Hylia_052_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_31', 'ASName': '', 'MaintainPerformanceState': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-0.5799999833106995, 101.5199966430664, 27.700000762939453], 'AtVector': [1.440000057220459, 101.33999633789062, 26.68000030517578], 'TargetFovy': 37.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Animal_Dog_Richard_01.EventAIScheduleWarpToAnchor({'InstanceName': 'Richard_Stay', 'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
        Animal_Dog_Richard_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'SitGround'})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'SubEvent_FindRichard_Link_Stay', 'NotChangeRot': False, 'UseDemoWait': True, 'IsWaitEnd': True, 'ASCommand': 'EvtWait'})

        call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': True})


        fork {
            Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Animal_Dog_Richard_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

    }

    Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_LookingFor', 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_12', 'MaintainPerformanceState': 0})
    Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Animal_Dog_Richard_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Hylia_052_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_052_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_052_Child_GlassTruth'})

            call CheckLookIK()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_103', 'ASName': 'TalkMonolog', 'Arg_Turn_For_MaskTalk': 3}) {
      case 4205900657:
        return 4151362380
      case 4155567800:
        return 2799305849
    }
}

void RichardTalk_Wander() {
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice4() {
      case 0:

        call CheckLookIK()

        Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_26', 'MaintainPerformanceState': 0})
        Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_23', 'ASName': 'Act_LookingFor', 'MaintainPerformanceState': 0})
      case 1:

        call CheckLookIK()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_20', 'MaintainPerformanceState': 0})
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_21', 'MaintainPerformanceState': 0})
      case 3:

        call CheckLookIK()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_22', 'MaintainPerformanceState': 0})
    }
}

void FindRichard_ResetTimeCheck() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'})
    && !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'GameDataName': 'Market_Npc_Hylia_052_Child_FoundRichard_ElapsedTime', 'ElapsedHour': 72}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_FindRichard_RichardRivival', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Market_Npc_Hylia_052_Child_RichardGoHome'})
    }
}

void WhichStrayDog() {
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Hylia_052_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_31', 'ASName': '', 'MaintainPerformanceState': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
    switch GameDataActor.EventQueryGameDataCheckStrayDogTakenAway() {
      case 0:

        call StrayDog({'InstanceName': 'Stray_Brown_01', 'Animal_Dog_ActorName': 'Animal_Dog_Brown', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_01")})

      case 1:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_Brown', 'InstanceName': 'Stray_Brown_02', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_02")})

      case 2:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_Brown', 'InstanceName': 'Stray_Brown_03', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_03")})

      case 3:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_Brown', 'InstanceName': 'Stray_Brown_04', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_04")})

      case 4:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_Brown', 'InstanceName': 'Stray_Brown_05', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_05")})

      case 5:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_Brown', 'InstanceName': 'Stray_Brown_06', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_06")})

      case 6:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_Brown', 'InstanceName': 'Stray_Brown_07', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_07")})

      case 7:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_Brown', 'InstanceName': 'Stray_Brown_08', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_08")})

      case 8:

        call StrayDog({'InstanceName': 'Stray_White_01', 'Animal_Dog_ActorName': 'Animal_Dog_White', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_White", sub_name="Stray_White_01")})

      case 9:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_White', 'InstanceName': 'Stray_White_02', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_White", sub_name="Stray_White_02")})

      case 10:

        call StrayDog({'Animal_Dog_ActorName': 'Animal_Dog_White', 'InstanceName': 'Stray_White_03', 'Animal_Dog_Actor': ActorIdentifier(name="Animal_Dog_White", sub_name="Stray_White_03")})

    }
}

void StrayDog() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-0.5799999833106995, 101.5199966430664, 27.700000762939453], 'AtVector': [1.440000057220459, 101.33999633789062, 26.68000030517578], 'TargetFovy': 37.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_EventStarter[StrayDog(Animal_Dog_Actor)].EventAIScheduleWarpToAnchor({'InstanceName': 'Richard_Stay', 'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
        Npc_EventStarter[StrayDog(Animal_Dog_Actor)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'SitGround'})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'SubEvent_FindRichard_Link_Stay', 'NotChangeRot': False, 'UseDemoWait': True, 'IsWaitEnd': True, 'ASCommand': 'EvtWait'})

        fork {
            Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'InstanceName', 'ActorName': 'Animal_Dog_ActorName'})
        }

    }

    Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_LookingFor', 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_12', 'MaintainPerformanceState': 0})
    Npc_Hylia_052_Child.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'InstanceName': 'InstanceName', 'ActorName': 'Animal_Dog_ActorName'})
    Npc_Hylia_052_Child.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    call DogCamera({'Animal_Dog_InstanceName': 'InstanceName', 'Animal_Dog_ActorName': 'Animal_Dog_ActorName', 'Animal_Dog_Actor': 'Animal_Dog_Actor'})


    fork {
        Npc_EventStarter[StrayDog(Animal_Dog_Actor)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    } {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_04', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Hylia_052_Child'})
    } {
        Npc_Hylia_052_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'FovySetType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.9700000286102295, 2.190000057220459, -3.7100000381469727], 'AtVector': [0.07000000029802322, 1.059999942779541, 0.7300000190734863], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_Hylia_052_Child', 'Speaker2SetType': 1, 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'EventTalkCameraType': 0, 'Speaker3SetType': 1, 'Spearker3ActorName': 'Player_Event', 'Spearker2InstanceName': 'InstanceName', 'Spearker2ActorName': 'Animal_Dog_ActorName'})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

    Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_11', 'MaintainPerformanceState': 0})
}

void DogCamera() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.07999999821186066, 0.9300000071525574, 2.2899999618530273], 'AtVector': [-0.05999999865889549, 0.7900000214576721, 1.7400000095367432], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Animal_Dog_ActorName', 'Actor1InstanceName': 'Animal_Dog_InstanceName', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Animal_Dog_Richard_01[DogCamera(Animal_Dog_Actor)].EventTriggerBecomeSpeaker()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 28})
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'EndDistance': 1.0, 'EndFNumber': 65.0, 'EndBluarLevel': 2.0, 'RequiredFrame': 0})
    }

}

void CheckLookIK() {
    if Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }
}
