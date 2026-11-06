-------- EventFlow: GimmickFlow_RoyalFamilyTomb --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait', 'EventTriggerAddPreComputedCullingBasePos']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundReadRiddle', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void BlowOcarina() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:環境系SE下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [31.0, 113.0, 3.0], 'EndPos': [31.0, 113.0, 3.0]})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:環境系SE下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Graveyard_0010'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GetMelodySun', 'StepName': 'GetMelodySun'})
    }
}

void CheckStone_To_MelodyGet_Sun() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_MelodyGet_Sun', 'FadeInTypeEventEnd': 2})
    if !Player_Event.EventQueryPlayerIsChild() {
        if !EventWorldManagerController.EventQueryTimeDivision() {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_01'})
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 20})
            Event57:
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_03'})
            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_04'})
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 6})
            goto Event57
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_Kakariko_0030', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_Graveyard_0030'}) {
            Event41:
            if !EventWorldManagerController.EventQueryTimeDivision() {
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_07'})
                EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 20})
                goto Event57
            } else {
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_08'})
                EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 6})
                goto Event57
            }
        } else
        if !EventWorldManagerController.EventQueryTimeDivision() {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_09'})
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 20})
            goto Event57
        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_10'})
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 6})
            goto Event57
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.SageOfFire_DefeatBoss', 'Index': -1}) {
        goto Event41
    } else
    if !EventWorldManagerController.EventQueryTimeDivision() {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_05'})
        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 20})
        goto Event57
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Sun_06'})
        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 6})
        goto Event57
    }
}

void Obj_Graveyard_Monument_A_02() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RoyalFamilyTomb_MelodyGet_Clear'}) {

        call CheckStone_To_MelodyGet_Sun_after()

    } else {

        call CheckStone_To_MelodyGet_Sun()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'RoyalFamilyTomb_MelodyGet_Clear'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetMelodySun', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
}

void CheckStone_To_MelodyGet_Sun_after() {

    call SignboardWood.Demo_LookSignboard()

    SignBoard_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SignboardWood:RoyalFamilyTomb_00', 'MaintainPerformanceState': 0})
    SignBoard_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SignboardWood:RoyalFamilyTomb_01', 'MaintainPerformanceState': 0})
    SignBoard_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SignboardWood:RoyalFamilyTomb_02', 'MaintainPerformanceState': 0})
    SignBoard_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SignboardWood:RoyalFamilyTomb_03', 'MaintainPerformanceState': 0})
}

void EntryPoint00() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'PL_Point01', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'CheckDistance': 5.0}) {

        call FocusOnGimmick.SwitchActivation()

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PL_Point01', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'PosVectorSetType': 3, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'AtVector': [0.0, -0.5, 0.0], 'PosVector': [0.0, 0.0, 12.0], 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': ''})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': '', 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'Vector': [0.0, 1.5, -2.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    }
}
