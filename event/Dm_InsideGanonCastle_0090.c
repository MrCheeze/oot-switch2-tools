-------- EventFlow: Dm_InsideGanonCastle_0090 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventCloseMessageDialog', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestCameraShake', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0090/Dm_InsideGanonCastle_0090/workspace.pp__ModelProject.gyml'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_Hylia_Rauru
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0090/Dm_InsideGanonCastle_0090_Npc_Hylia_MU_Rauru/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0090_Npc_Hylia_MU_Rauru.root.as'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsGrounding': False, 'IsWorld': True, 'Position': [0.0, 100.0, -15.0]}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void EntryPoint0() {

    fork {
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 2, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    } {
        UISystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': False, 'IsNoPlayAnime': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 105.0199966430664, 10.770000457763672], 'AtVector': [0.0, 105.2300033569336, 9.789999961853027], 'TargetFovy': 50.93000030517578, 'IsEnableRevertFast': False})
    } {
        Dm_Npc_Hylia_Rauru.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 78})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Power': 1.5, 'Pattern': 2, 'IsRumbleController': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GataGata', 'Length': 5.300000190734863})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 315})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
        }

    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Obj_GanonCastle_Barrier_A_01', 'KeyName': '塔の結界'})
        Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_InsideGanonCastle_0090_C01', 'SLinkKey': ''})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'CenterCore_Explosion', 'IsIgnoreDucking': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    } {
        UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
    }

    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-1', 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    UISystemActor.EventEventFadeOut({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Length': 3})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    UISystemActor.EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False, 'Length': 1})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_InsideGanonCastle_0090', 'CommandLife': 2, 'IsReleaseDucking': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 105.13999938964844, 10.229999542236328], 'AtVector': [0.0, 105.33999633789062, 9.260000228881836], 'TargetFovy': 50.93000030517578, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVector': [0.0, 104.87999725341797, 11.460000038146973], 'AtVector': [0.0, 105.33999633789062, 9.260000228881836], 'TargetFovy': 50.93000030517578, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 180, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': True, 'DispTime': 150, 'Text2': ''})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [6.429999828338623, 113.9800033569336, 5.550000190734863], 'AtVector': [6.110000133514404, 113.48999786376953, 4.019999980926514], 'TargetFovy': 75.95999908447266, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [6.929999828338623, 114.2699966430664, 7.599999904632568], 'AtVector': [6.610000133514404, 113.77999877929688, 6.070000171661377], 'TargetFovy': 75.95999908447266, 'IsWaitEnd': False, 'MoveTime': 1200, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Dm_Npc_Hylia_Rauru.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': True, 'EndDialogOption': 2, 'OverrideStyle': 6, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0090:Dm_InsideGanonCastle_0090_Text_000_c', 'MaintainPerformanceState': 0, 'ASName': 'C02'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 400})
        Dm_Npc_Hylia_Rauru.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0090:Dm_InsideGanonCastle_0090_Text_001_b', 'OverrideStyle': 6, 'IsCloseDialog': False, 'EndDialogOption': 2, 'MaintainPerformanceState': 0, 'ASName': 'C02'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 480})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
}
