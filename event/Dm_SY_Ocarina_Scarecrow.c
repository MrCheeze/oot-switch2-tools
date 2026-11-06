-------- EventFlow: Dm_SY_Ocarina_Scarecrow --------

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitOcarinaInputForRecordingBonooru', 'EventWaitOcarinaInputForLearningBonooru', 'EventTriggerPreparePlayAutoBonooru', 'EventWaitOcarinaInputForRecordingPierre', 'EventPlayAutoPierre', 'EventTriggerPreparePlayAutoPierre', 'EventPlayAutoBonooru', 'EventCloseMessageDialog', 'EventTriggerResetPlayedNoteAppliedPitch']
queries: ['EventQueryListenedScarecrowPfmUntilEnd']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayOcarinaFree', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerSetOwnAsInstrumentPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Bonooru
entrypoint: None()
actions: ['EventKakashiDance', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Pierre
entrypoint: None()
actions: ['EventKakashiDance', 'EventDoNothing']
queries: ['EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF', 'EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void LearningOcarinaPlayForScarecrowSong() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        GameSystemActor.EventWaitOcarinaInputForLearningBonooru({'IsWaitEnd': True})
    } {
        SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'IsWaitEnd': False, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_59', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    } {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    }

    Npc_Bonooru.EventDoNothing({'IsWaitEnd': True})
}

void PlayAutoBonooru() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventTriggerPreparePlayAutoBonooru()

    fork {
        Npc_Bonooru.EventKakashiDance({'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventPlayAutoBonooru({'IsWaitEnd': True})
        if !GameSystemActor.EventQueryListenedScarecrowPfmUntilEnd() {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        }
    } {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'OverrideStyle': 3, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
    }

    Npc_Bonooru.EventDoNothing({'IsWaitEnd': True})
}

void RecordingOcarinaPlayForScarecrowSong() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        GameSystemActor.EventWaitOcarinaInputForRecordingBonooru({'IsWaitEnd': True})
    } {
        SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'IsWaitEnd': False, 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        Npc_Bonooru.EventKakashiDance({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    }

    Npc_Bonooru.EventDoNothing({'IsWaitEnd': True})
}

void PlayAutoPierre() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventTriggerPreparePlayAutoPierre()

    fork {
        Npc_Pierre.EventKakashiDance({'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventPlayAutoPierre({'IsWaitEnd': True})
        if !GameSystemActor.EventQueryListenedScarecrowPfmUntilEnd() {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        }
    } {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'OverrideStyle': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_52'})
    }

    Npc_Pierre.EventDoNothing({'IsWaitEnd': True})
}

void RecordingOcarinaPlayForPierre() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'EndDistance': 0.5299999713897705, 'EndFNumber': 100.0, 'EndBluarLevel': 2.5, 'IsAutoFocalDist': False, 'RequiredFrame': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 45.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'PosVector': [-0.30000001192092896, 0.9900000095367432, 1.0800000429153442], 'AtVector': [0.019999999552965164, 0.7900000214576721, -0.009999999776482582], 'MoveTime': 0, 'IsEnableRevertFast': False})
    Player_Event.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        GameSystemActor.EventWaitOcarinaInputForRecordingPierre({'IsWaitEnd': True})
    } {
        SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'IsWaitEnd': False, 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
    } {
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    }

    Npc_Pierre.EventDoNothing({'IsWaitEnd': True})
    PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
    if !Npc_Pierre.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 10.0}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Pierre', 'AtVector': [0.0, 0.8999999761581421, 0.0], 'PosVector': [-2.0, 1.5, 5.300000190734863], 'MoveTime': 0, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Pierre', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-0.699999988079071, 1.5, 5.789999961853027], 'AtVector': [-0.3100000023841858, 0.8999999761581421, 2.619999885559082], 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 0, 'IsEnableRevertFast': False})
    }
}
