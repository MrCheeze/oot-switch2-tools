-------- EventFlow: Dm_ZoraRiver_0000 --------

Actor: Npc_Kaepora
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerModelBind', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerVoiceChangeSpVoiceMode', 'EventPlayASWithClothWarp', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZoraRiver_0000/Dm_ZoraRiver_0000_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZoraRiver_0000_Kepora.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZoraRiver_0000/Dm_ZoraRiver_0000/workspace.pp__ModelProject.gyml', 'IsWorld': False}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor[cut_number]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZoraRiver_0000/Dm_ZoraRiver_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZoraRiver_0000_Dm_Locator.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Dm_Locator[camera]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerSoundStartSceneBgm', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_047_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})

    fork {

        call C01()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text1': 'C02', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text1': 'C03', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text1': 'C04', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text1': 'C05', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }

}

void C01() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Dm_Locator[camera].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-73.31999969482422, 103.79000091552734, 7.730000019073486], 'ClothWarpMode': -1})
    } {
        Dm_Locator[pos].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Kaepora', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        Npc_Kaepora.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False, 'OffsetBase': 1, 'PosOffset': [0.0, 2.0, 0.0]})
    } {
        Npc_Hylia_047_Child.EventTriggerParticipateEvent()
    } {
        Npc_Kaepora.EventTriggerVoiceChangeSpVoiceMode({'NoPosVoiceMode': 6, 'CommandLife': 0})
    }


    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Kaepora'})
    } {
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'Target': 3, 'ActorName': 'Npc_Kaepora', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True})
    } {
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_ZoraRiver_0000:Dm_ZoraRiver_0000_0000', 'MaintainPerformanceState': 0, 'ASName': 'C01'})
    }

    Npc_Kaepora.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 1, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Npc_Kaepora', 'IsLinearMove': False, 'MoveTime': 50, 'LatShiftRange': 20.0, 'LongShiftRange': 20.0, 'Actor2ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 3, 'CameraCollisionMode': 2, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'camera', 'PosVector': [-1.6200000047683716, -3.119999885559082, 4.0], 'AtVector': [-0.6299999952316284, -2.190000057220459, 1.7300000190734863], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 180, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'camera', 'PosVector': [-1.6200000047683716, -3.119999885559082, 4.0], 'AtVector': [-0.8100000023841858, -1.409999966621399, 2.1500000953674316], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'camera', 'PositionOffset': [-3.1502299308776855, -6.367290019989014, 6.912459850311279], 'YAngle': 153.98109436035156, 'ASCommand': 'EvtWait', 'OffsetBase': 1})
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [-0.5, 1.2000000476837158, 0.0], 'ClothWarpMode': -1})
    } {
        Dm_Locator[pos].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C05_Loop', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        Npc_Kaepora.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        Npc_Kaepora.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C05_Loop', 'ForceFadeInFrame': 0.0, 'ClothWarpMode': 2})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_ZoraRiver_0000'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Kaepora.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'NotFollow', 'FadeTime': 0.5})
    Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_ZoraRiver_0000:Dm_ZoraRiver_0000_0001', 'ASName': 'Talk_kepora', 'MaintainPerformanceState': 0})
}

void C03() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_ZoraRiver_0000:Dm_ZoraRiver_0000_0002', 'EndDialogOption': 3, 'ASName': 'C05_Loop', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    }

    SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 0.5, 'ListenerPresetName': 'Normal'})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'camera', 'PosVector': [-4.550000190734863, -6.170000076293945, 8.079999923706055], 'AtVector': [-2.9600000381469727, -5.059999942779541, 6.269999980926514], 'TargetFovy': 42.47999954223633, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_ZoraRiver_0000:Dm_ZoraRiver_0000_0003', 'ASName': 'Talk_F_kepora', 'MaintainPerformanceState': 0})
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_ZoraRiver_0000:Dm_ZoraRiver_0000_0004', 'ASName': 'Talk_kepora', 'MaintainPerformanceState': 0})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorInstanceName': '', 'TargetActorName': '', 'RootType': 1, 'SceneName': 'C05-0-Loop', 'IsWaitEnd': True})
    } {
        Npc_Kaepora.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_ZoraRiver_0000:Dm_ZoraRiver_0000_0005', 'EndDialogOption': 3, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'ASName': 'Talk_F_kepora', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        Dm_Locator[pos].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C05_Loop', 'IsAnimeDriven': True, 'IsWaitEnd': False})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_ZoraRiver_0000'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C05-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorInstanceName': '', 'TargetActorName': '', 'RootType': 1})
    } {
        Npc_Kaepora.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'ASName': 'C05_ZoraRiver'})
    } {
        Dm_Locator[pos].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C05_ZoraRiver'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_Kaepora.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZoraRiver_0005_Jump_00', 'SLinkKey': ''})
        Npc_Kaepora.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraRiver_0005_Feather_00'})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'BgmName': 'BGM_HyruleField', 'StartType': 2})
}
