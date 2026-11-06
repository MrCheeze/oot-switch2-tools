-------- EventFlow: Dm_Kokiri_0130 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0130/Dm_Kokiri_0130_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0130_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviMoveAtPos', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0130/Dm_Kokiri_0130_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0130_Npc_Navi.root.as', 'ExceptionalBindType': 3}

Actor: Item_Stone_Forest
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0130/Dm_Kokiri_0130_Item_Stone_Forest/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0130_Item_Stone_Forest.root.as', 'Position': [0.0, 0.0, 0.0]}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventOpenPerformanceImportantMenu']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Land_Kokiri_DekuTree_A_01
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0130/Dm_Kokiri_0130_Land_Kokiri_DekuTree_A_01/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0130_Land_Kokiri_DekuTree_A_01.root.as'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundStartSound', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Land_Kokiri_DekuTree_A_04
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0130/Dm_Kokiri_0130_Land_Kokiri_DekuTree_A_02/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0130_Land_Kokiri_DekuTree_A_02.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetActor', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Shindo]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerZeldaNotesRequestSendDailyScreenShot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {

    call ready()

    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'デクの樹サマとの別れ（前半）', 'DispTime': 5, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    call C01()


    call C02()


    call C04()


    call C05()


    call C05-05()


    call C06()


    call C07()


    call C08()

}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01'})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Length': 1, 'Color': 1})

    fork {
        Land_Kokiri_DekuTree_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Deku_Wait_Loop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Wait_Loop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'TargetFovy': 46.0, 'AtVector': [63.36899948120117, 116.68900299072266, -23.518999099731445], 'PosVector': [61.763999938964844, 116.08499908447266, -23.200000762939453], 'IsEnableRevertFast': False})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

        fork {
            Land_Kokiri_DekuTree_A_01.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0130:Dm_Kokiri_0130_0000', 'ASName': 'Deku_Talk_St', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } {
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_St', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'Length': 1, 'IsNoPlayAnime': False, 'Color': 1})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartDistance': 2.200000047683716, 'EndDistance': 2.200000047683716, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Land_Kokiri_DekuTree_A_01.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Deku_Talk_Ed', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})

    fork {
        Land_Kokiri_DekuTree_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0130:Dm_Kokiri_0130_0002', 'ASName': 'Deku_Talk_St', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
    } {
        Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_St', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [52.72999954223633, 114.72000122070312, -17.010000228881836], 'AtVector': [61.52000045776367, 117.91000366210938, -20.420000076293945], 'TargetFovy': 63.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartDistance': 1.100000023841858, 'EndDistance': 1.100000023841858, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Land_Kokiri_DekuTree_A_01.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Deku_Talk_Ed', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    }

}

void C04() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C04'})

    fork {
        Land_Kokiri_DekuTree_A_01.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0130:Dm_Kokiri_0130_0004', 'ASName': 'Deku_Talk_St', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [63.61000061035156, 115.95999908447266, -21.770000457763672], 'AtVector': [58.11000061035156, 114.19000244140625, -24.059999465942383], 'TargetFovy': 27.969999313354492, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_St', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C04_Loop', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 4.800000190734863, 'EndDistance': 4.800000190734863, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0130:Dm_Kokiri_0130_0006', 'IsNotBecomeSpeaker': True, 'ASName': 'C04', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C04_Loop-2', 'ForceFadeFrame': 20.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C05() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C05'})

    fork {

        fork {
            Land_Kokiri_DekuTree_A_01.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0130:Dm_Kokiri_0130_0007', 'ASName': 'Deku_Talk_St', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } {
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_St', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }


        fork {
            Land_Kokiri_DekuTree_A_01.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0130:Dm_Kokiri_0130_0009', 'ASName': 'Deku_Talk_Loop', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } {
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_Loop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }


        fork {
            Land_Kokiri_DekuTree_A_01.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0130:Dm_Kokiri_0130_0008', 'ASName': 'Deku_Talk_Loop', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } {
            Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_Loop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'IsWaitEnd': False, 'SceneName': 'C05-0'})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'C05', 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtOffsetBase': 0, 'LookAtDirection': -90.0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'offset': [0.6000000238418579, -0.15000000596046448, 0.6499999761581421], 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventPlayAS({'ASName': 'C10', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartDistance': 2.200000047683716, 'EndDistance': 2.200000047683716, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        TerrainSystemActor.EventTerrainCalcCenter({'Position': [57.79999923706055, 113.83000183105469, -23.440000534057617], 'SceneName': 'KokiriForest_01', 'IsWaitEnd': True})
    }


    fork {
        Land_Kokiri_DekuTree_A_01.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Deku_Talk_Ed', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Land_Kokiri_DekuTree_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Deku_Talk_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    }

}

void C06() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C06'})

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'SceneName': 'C06-0'})
    } {
        Item_Stone_Forest.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06'})
    } {
        EventSystemActor.EventWait({'Frames': 430, 'IsWaitEnd': True})
        Item_Stone_Forest.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0130_SpritStone_01'})
    } {
        Npc_Navi.EventNaviMoveAtPos({'LookAtInstanceName': '', 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'DecSpeedDistance': 0.20000000298023224, 'LookAtTarget': 0, 'LookAtActorName': '', 'IsLookAtObject': True, 'ASCommand': '', 'MinimumSpeed': 0.05000000074505806, 'IncSpeedDistance': 0.30000001192092896, 'IsTurnLooking': False, 'LookAtWorldPos': [65.66000366210938, 114.0, -23.290000915527344], 'MoveSpeed': 0.30000001192092896, 'IsWaitEnd': True, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'WorldPos': [57.79999923706055, 115.02999877929688, -23.850000381469727], 'OverwriteRotNearDist': -1.0})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'EvtWait'})
    } {
        Item_Stone_Forest.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0130_GetDemo_00'})
        Item_Stone_Forest.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0130_SpritStone_00'})
        Dm_Locator[1].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Kokiri_0130_00', 'SLinkKey': '', 'IsKill': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.7999999523162842, 'EndDistance': 1.7999999523162842, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartFNumber': 48.0, 'EndFNumber': 48.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 440})
        GameSystemActor[Shindo].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Small'})
    }

}

void C07() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C07'})

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [65.55999755859375, 113.66999816894531, -22.6200008392334], 'AtVector': [59.060001373291016, 114.9800033569336, -24.420000076293945], 'TargetFovy': 47.20000076293945, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C10_0', 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 3})
    } {
        Item_Stone_Forest.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C07', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 0, 'ActorName': '', 'WorldPos': [57.79999923706055, 115.0999984741211, -23.440000534057617], 'IsWaitEnd': False})
    } {
        Item_Stone_Forest.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0130_SpritStone_02'})
        Item_Stone_Forest.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0130_GetDemo_01'})
        Item_Stone_Forest.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Kokiri_0130_GetDemo_00', 'IsKill': True, 'SLinkKey': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartDistance': 3.4000000953674316, 'EndDistance': 3.4000000953674316, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C08() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C08', 'Text2': ''})

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'TargetActorName': '', 'SceneName': 'C10-3'})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_SpiritStoneGet', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        Item_Stone_Forest.EventPlayAS({'ASName': 'C08', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Item_Stone_Forest.EventTriggerXLinkFadeByKey({'IsKill': True, 'ELinkKey': 'Dm_Kokiri_0130_GetDemo_01', 'SLinkKey': ''})
        Item_Stone_Forest.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0130_GetDemo_02'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'EndBluarLevel': 3.0, 'StartFNumber': 32.0, 'RequiredFrame': 670, 'IsEnableNear': False, 'StartBluarLevel': 1.0, 'EndFNumber': 64.0, 'EndDistance': 0.699999988079071, 'StartDistance': 2.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Pad_End', 'IsIgnoreDucking': True})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Particle', 'IsIgnoreDucking': True})
    } {
        GameSystemActor.EventTriggerZeldaNotesRequestSendDailyScreenShot({'TargetID': 'Item_Stone_Forest', 'TypeID': 'get_item', 'Frame': 726})
    }


    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Stone_Forest'})

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Pad_End', 'GroupName': 'DemoDefault', 'FadeFrame': -1})
    SoundSystemActor.EventTriggerSoundStopSound({'GroupName': 'DemoDefault', 'SLinkKey': 'Particle', 'FadeFrame': -1})
    Item_Stone_Forest.EventTriggerXLinkFadeByKey({'IsKill': True, 'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0130_SpritStone_02'})
    Item_Stone_Forest.EventTriggerXLinkFadeByKey({'IsKill': True, 'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0130_GetDemo_02'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventOpenPerformanceImportantMenu({'IsWaitEnd': True})
}

void ready() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 110.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [57.79999923706055, 113.83000183105469, -23.440000534057617]})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C04_Loop', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Item_Stone_Forest.EventTriggerSetModelLodManual({'LodLevel': 0})
        Item_Stone_Forest.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [57.83000183105469, 114.23999786376953, -24.049999237060547], 'YAngle': 110.0, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtOffsetBase': 0, 'offset': [0.5, -0.15000000596046448, 0.20000000298023224], 'LookAtDirection': -90.0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        EventWorldManagerController.Event_SetEnvPaletteForFlowchart({'EnvPaletteName': 'Dm_Kokiri_0130', 'ChangeSpeed': 5, 'IsWaitEnd': False, 'EnvTimeTableName': ''})
    }

}

void C05-05() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C05-05'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'TargetFovy': 36.16899871826172, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [60.33000183105469, 118.6500015258789, -23.172000885009766], 'AtVector': [58.428001403808594, 115.12000274658203, -23.593000411987305], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'TargetFovy': 36.16899871826172, 'PosVector': [60.33000183105469, 117.25, -23.172000885009766], 'AtVector': [58.428001403808594, 114.94999694824219, -23.593000411987305], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 245, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C05-05', 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Navi.EventNaviMoveAroundToPlayer({'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtTarget': 0, 'LookAtActorName': '', 'IsTurnLooking': False, 'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'ArrivedASCommand': '', 'IsNearOffset': True, 'IsHomePosition': False, 'OverwriteRotNearDist': 0.10000000149011612, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.4000000059604645, 0.0, 0.0], 'IncSpeedDistance': 0.0, 'MoveSpeed': 0.699999988079071, 'MinimumSpeed': 0.699999988079071, 'PassThrough': 0.0, 'DecSpeedDistance': 1.0})
    } {
        Dm_Locator[1].EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [1.5, 4.0, 0.0], 'YAngle': -90.0, 'OffsetBase': 0, 'ActorName': 'Player_Event', 'ClothWarpMode': -1})
        Dm_Locator[1].EventTriggerEmitXLink({'ELinkKey': 'Dm_Kokiri_0130_00', 'SLinkKey': ''})
    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': True, 'SLinkKey': 'Pad_Start'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartDistance': 3.200000047683716, 'EndDistance': 3.200000047683716, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}
