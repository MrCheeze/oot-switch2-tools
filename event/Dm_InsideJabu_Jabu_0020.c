-------- EventFlow: Dm_InsideJabu_Jabu_0020 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideJabu_Jabu_Stone_Water_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_Ruto_Child_001[Step1]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0020/Dm_InsideJabu_Jabu_0020_Npc_Zora_ZU_Ruto_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0020_Npc_Zora_ZU_Ruto_Child.root.as'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithCarry', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerClearModelBindAndDependency', 'EventTriggerModelBindWithDependency']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0020/Dm_InsideJabu_Jabu_0020_Player_Child/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0020_0020_Player_Child.root.as'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C01()


    call C02()


    call C03()

}

void C01() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text3': '', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'IsReferenceRootOnce': False, 'TargetActorName': ''})
    } {
        Player_Event.EventTriggerModelBindWithDependency({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator'})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'UseAnmDriven': False, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'Partial': '', 'IsWaitEnd': True, 'ASName': 'C01', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'MoveSpeed': 0.5, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': False, 'IsUseAfterPlayerTurn': True})
    } {
        Dm_Locator[pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -125.0, 'Position': [-25.93000030517578, 84.88999938964844, -88.9000015258789], 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartDistance': 3.5999999046325684, 'EndDistance': 3.5999999046325684, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Obj_InsideJabu_Jabu_Stone_Water_A_01.EventTriggerParticipateEvent()
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0020_C01', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0020_C01'})
    }

}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text3': '', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'SceneName': 'C02-0', 'RootType': 1})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02-00', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02-01', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [-32.369998931884766, 84.06999969482422, -93.30999755859375], 'Target': 0, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Player_Event'})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'Partial': '', 'ASName': 'C02-00', 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0020:Dm_InsideJabu_Jabu_0020_0000', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsWaitEnd': True, 'ASName': 'C02-01', 'IsNotBecomeSpeaker': False, 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': True, 'IsAnimeDriven': True})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0020_C02', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0020_C02'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 2.200000047683716, 'EndDistance': 2.200000047683716, 'EndFNumber': 32.0, 'StartFNumber': 32.0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02-03', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0020:Dm_InsideJabu_Jabu_0020_0001', 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'C02-03', 'IsWaitEnd': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'SceneName': 'C02-1', 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': False, 'StartDistance': 2.200000047683716, 'EndFNumber': 32.0, 'StartFNumber': 32.0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 1.5, 'EndDistance': 6.800000190734863, 'RequiredFrame': 16, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Zora_Ruto_Child_001[Step1].EventTriggerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'WorldPos': [-25.924299240112305, 85.80378723144531, -88.93370056152344]})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C03-01', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'Partial': '', 'IsWaitEnd': True, 'ASName': 'C03-01', 'ForceFadeInFrame': 10.0, 'IsAllSlot': False, 'IsAnimeDriven': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
    }

}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03', 'Text2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 52.849998474121094, 'PosVector': [-25.780000686645508, 86.43000030517578, -90.5], 'AtVector': [-26.0, 86.16000366210938, -89.4000015258789], 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 800, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'AtVector': [-26.0, 86.16000366210938, -89.4000015258789], 'TargetFovy': 52.849998474121094, 'PosVector': [-25.81999969482422, 86.37000274658203, -90.2699966430664], 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C03-02', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0020:Dm_InsideJabu_Jabu_0020_0002', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': True, 'ASName': 'C03-02', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0020_C03', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0020_C03'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'EndFNumber': 32.0, 'StartFNumber': 32.0, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})

    fork {
        Player_Event.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'pos'})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'C03_Pose_Lift_Ruto'})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'ASName': 'Act_Tantrum', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}
