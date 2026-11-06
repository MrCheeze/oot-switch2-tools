-------- EventFlow: Dm_Kokiri_0075 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0075/Dm_Kokiri_0075/workspace.pp__ModelProject.gyml'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0075/Dm_Kokiri_0075_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0075_Player_Child.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventTriggerChangeEmotion']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 0, 'ExceptionalBindType': 3}

Actor: Land_Kokiri_DekuTree_A_01
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0075_Land_Kokiri_DekuTree_A_01.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0075/Dm_Kokiri_0075_Land_Kokiri_DekuTree_A_01/workspace.pp__ModelProject.gyml'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Land_Kokiri_DekuTree_A_04
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0075_Land_Kokiri_DekuTree_A_02.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0075/Dm_Kokiri_0075_Land_Kokiri_DekuTree_A_02/workspace.pp__ModelProject.gyml'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[vibration]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': True, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_Kokiri_0070', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 5, 'Text1': 'C01'})
    } {

        call C01()

    }


    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 5, 'Text1': 'C02'})
    } {

        call C02()

    }


    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 5, 'Text1': 'C03'})
    } {

        call C03()

    }

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_Kokiri_0070', 'IsUseSuspendFade': False})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 5, 'Text1': 'C04'})
    } {

        call C04()

    }


    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 5, 'Text1': 'C05'})
    } {

        call C05()

    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [59.310001373291016, 115.30000305175781, -22.43000030517578], 'AtVector': [59.08000183105469, 115.16999816894531, -22.68000030517578], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 1.0, 'EndDistance': 1.0, 'StartFNumber': 73.5, 'EndFNumber': 73.5, 'StartBluarLevel': 1.6100000143051147, 'EndBluarLevel': 1.6100000143051147, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Land_Kokiri_DekuTree_A_01.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C01_Talk_Ed', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Land_Kokiri_DekuTree_A_04.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01_Talk_Ed'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0075:Dm_Kokiri_0075_0010', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': False, 'MaintainPerformanceState': 0})
    Land_Kokiri_DekuTree_A_01.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0075:Dm_Kokiri_0075_0011', 'IsWaitEnd': True, 'ASName': 'Talk_Short', 'MaintainPerformanceState': 0})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0075:Dm_Kokiri_0075_0012', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsNotBecomeSpeaker': False, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void C03() {

    fork {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Talk_LongB'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Land_Kokiri_DekuTree_A_01.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0075:Dm_Kokiri_0075_0013', 'IsWaitEnd': True, 'ASName': 'Talk_LongB', 'MaintainPerformanceState': 0})
        }


        fork {
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Talk_Long'})
        } {
            Land_Kokiri_DekuTree_A_01.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0075:Dm_Kokiri_0075_0014', 'IsWaitEnd': True, 'ASName': 'Talk_Long', 'MaintainPerformanceState': 0})
        }


        fork {
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Talk_Short'})
        } {
            Land_Kokiri_DekuTree_A_01.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0075:Dm_Kokiri_0075_0015', 'IsWaitEnd': True, 'ASName': 'Talk_Short', 'MaintainPerformanceState': 0})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [52.2599983215332, 114.6500015258789, -22.670000076293945], 'AtVector': [64.56999969482422, 117.91999816894531, -24.31999969482422], 'TargetFovy': 50.79999923706055, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveTime': 700, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [48.70000076293945, 114.16999816894531, -22.110000610351562], 'AtVector': [61.060001373291016, 117.20999908447266, -23.8700008392334], 'TargetFovy': 50.79999923706055, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 1.0, 'EndDistance': 1.0, 'StartFNumber': 73.5, 'EndFNumber': 73.5, 'StartBluarLevel': 1.6100000143051147, 'EndBluarLevel': 1.6100000143051147, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C04() {

    fork {
        Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C04'})
    } {
        Land_Kokiri_DekuTree_A_01.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C04', 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C04-1'})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C04-1-2'})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C04-2'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartDistance': 28.0, 'EndDistance': 28.0, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Land_Kokiri_DekuTree_A_04.EventTriggerEmitXLink({'ELinkKey': 'Dm_Kokiri_0075_Fragment', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 420})
        Land_Kokiri_DekuTree_A_04.EventTriggerEmitXLink({'ELinkKey': 'Dm_Kokiri_0075_Smoke', 'SLinkKey': ''})
    } {
        Npc_Navi.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsHomePosition': True, 'IsOffCenterCamera': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        GameSystemActor.EventWait({'Frames': 280, 'IsWaitEnd': True})
        Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0075_LightShaft', 'IsKill': False})
    } {
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 125})
        GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoGoGo', 'Length': 12.5})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Meet_DekuTree_OpenDekuTreeMouth', 'Index': -1, 'Value': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Complete', 'ChallengeName': 'Meet_DekuTree', 'IsIgnoreChallengeProgressUI': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Get_StoneOfForest', 'StepName': 'GoInside', 'IsIgnoreChallengeProgressUI': False})
}

void C01() {

    fork {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 200})

        fork {
            Land_Kokiri_DekuTree_A_01.EventTalk({'EndDialogOption': 3, 'ASName': 'Talk_Short', 'MessageId': 'EventFlowMsg/Dm_Kokiri_0075:Dm_Kokiri_0075_0016', 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        } {
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Talk_Short'})
        }


        fork {
            Land_Kokiri_DekuTree_A_01.EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0075:Dm_Kokiri_0075_0009', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ASName': 'C01_Talk_Loop', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
        } {
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01_Talk_Loop'})
        }

    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'Position': [57.93000030517578, 113.83999633789062, -23.450000762939453], 'IsWaitEnd': True, 'YAngle': 95.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Land_Kokiri_DekuTree_A_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 15.0, 0.0]})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 90.0, 'Position': [57.900001525878906, 114.9000015258789, -23.850000381469727], 'IsWaitEnd': False, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Land_Kokiri_DekuTree_A_01', 'WorldPos': [0.0, 0.0, 0.0]})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-6.670000076293945, 1.2200000286102295, -5.630000114440918], 'AtVector': [-6.110000133514404, 1.3899999856948853, -4.670000076293945], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'PosVector': [-7.980000019073486, 1.2200000286102295, -4.789999961853027], 'AtVector': [-7.420000076293945, 1.3899999856948853, -3.8299999237060547], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveTime': 900, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': False, 'IsAutoFocalDist': False, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 9.0, 'EndFNumber': 9.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        EventSystemActor[1].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_Kokiri_0075_LightShaft', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [54.90999984741211, 114.63999938964844, -22.43000030517578], 'AtVector': [58.150001525878906, 115.3499984741211, -23.15999984741211], 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [54.439998626708984, 114.5199966430664, -22.989999771118164], 'AtVector': [58.130001068115234, 115.29000091552734, -23.479999542236328], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 100, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 45})
}
