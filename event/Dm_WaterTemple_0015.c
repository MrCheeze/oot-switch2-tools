-------- EventFlow: Dm_WaterTemple_0015 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerMove', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_WaterTemple_0015/Dm_WaterTemple_0015_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_WaterTemple_0015_Player_Adult.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviLookAtObject', 'EventNaviMoveAtPos', 'EventWarpToTargetPosAndRot', 'EventNaviRequestLookAtTheFront', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_Ruto_Adult_001[Dm]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventTriggerEmitNpcOrPlayerVoice', 'EventTriggerChangeEmotion']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_WaterTemple_0015/Dm_WaterTemple_0015_Npc_Zora_ZU_Ruto_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_WaterTemple_0015_Npc_Zora_ZU_Ruto_Adult.root.as', 'EventMemberCreateMethod': 1}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C01'})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C02'})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C03'})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04'})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C05'})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C06'})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C07'})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C08'})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C09'})
    }


    fork {

        call C10()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C10'})
    }

}

void Ready() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 90.0, 'ASCommand': 'EvtWait', 'Position': [21.200000762939453, 101.0, -2.9700000286102295], 'ClothWarpMode': 3, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 3})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Adult_001', 'PosOffset': [0.0, -0.10000000149011612, 0.0], 'InstanceName': 'Dm'})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [21.53499984741211, 102.59700012207031, -3.424999952316284], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Adult_001', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': 'Dm'})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -90.0, 'Position': [24.809999465942383, 101.1500015258789, -2.9700000286102295], 'ClothWarpMode': -1})
        Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'ASName': 'C01_Wait', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False})
    } {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': True})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_WaterTemple_0015_C01', 'CurrDemoPaletteName': 'Dm_WaterTemple_0015_C01'})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02', 'RootType': 3, 'TargetActorName': 'Player_Event', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02', 'IsWaitEnd': True, 'IsAnimeDriven': True, 'IsAllSlot': True})
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0002', 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'IsCloseDialog': False, 'ASName': 'C02_Loop', 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'EndDistance': 1.5499999523162842, 'EndFNumber': 60.0, 'StartDistance': 1.5499999523162842, 'StartFNumber': 60.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Zora_Ruto_Adult_001[Dm].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [21.0, 100.80000305175781, -2.9700000286102295]})
    Npc_Zora_Ruto_Adult_001[Dm].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0003', 'IsAnimeDriven': True, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'ASName': 'C02_Loop_prayer-St', 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.7200000286102295, 1.350000023841858, 2.7699999809265137], 'AtVector': [1.6399999856948853, 1.340000033378601, -3.200000047683716], 'TargetFovy': 21.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0004', 'IsCloseDialog': False, 'ASName': 'C02_Loop_prayer', 'EndDialogOption': 5, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'EndDistance': 2.799999952316284, 'StartDistance': 2.799999952316284, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.0700000524520874, 1.4299999475479126, -1.6100000143051147], 'AtVector': [-0.10999999940395355, 1.3300000429153442, 0.5899999737739563], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerRequestLookAtTheFront()
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 2})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0005', 'IsCloseDialog': False, 'ASName': 'C04_HandOnHip-St', 'EndDialogOption': 5, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.0999999046325684, 'EndDistance': 2.0999999046325684, 'StartBluarLevel': 1.2000000476837158, 'EndBluarLevel': 1.2000000476837158, 'IsEnableNear': True, 'StartFNumber': 120.0, 'EndFNumber': 120.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Navi.EventNaviMoveAtPos({'LookAtTarget': 3, 'MinimumSpeed': 0.10000000149011612, 'IncSpeedDistance': 0.10000000149011612, 'LookAtActorName': 'Npc_Zora_Ruto_Adult_001', 'IsLookAtObject': True, 'ASCommand': '', 'IsWaitEnd': True, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'DecSpeedDistance': 0.30000001192092896, 'IsTurnLooking': False, 'WorldPos': [22.899999618530273, 102.5999984741211, -3.4000000953674316], 'MoveSpeed': 3.0, 'OverwriteRotNearDist': -1.0, 'LookAtInstanceName': 'Dm'})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0006', 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'ASName': 'C05_LookNavi-St', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'IsAnimeDriven': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'Partial': '', 'IsWaitEnd': True, 'ASName': 'C06_LookNavi-Ed', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0007', 'ASName': 'C01_Wait', 'MaintainPerformanceState': 0})
    Npc_Zora_Ruto_Adult_001[Dm].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': False})
    Npc_Zora_Ruto_Adult_001[Dm].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [21.0, 102.0999984741211, -2.5]})
    Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0008', 'IsCloseDialog': False, 'ASName': 'C01_Wait', 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
    Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0009', 'IsCloseDialog': False, 'ASName': 'C01_Wait', 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
    Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0010', 'EndDialogOption': 5, 'ASName': 'C12_HandOnChest-St', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.590000033378601, 1.0099999904632568, -1.149999976158142], 'AtVector': [0.3499999940395355, 0.9800000190734863, 1.4199999570846558], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 2})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': 'Player_Event', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.20000000298023224, 0.0]})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0014', 'IsCloseDialog': False, 'EndDialogOption': 5, 'ASName': 'C12_HandOnChest-Loop', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        Npc_Navi.EventNaviMoveAtPos({'LookAtTarget': 3, 'LookAtActorName': 'Npc_Zora_Ruto_Adult_001', 'IsLookAtObject': True, 'ASCommand': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'OverwriteRotNearDist': -1.0, 'IsTurnLooking': True, 'DecSpeedDistance': 0.6000000238418579, 'IncSpeedDistance': 0.0, 'MinimumSpeed': 0.30000001192092896, 'IsWaitEnd': True, 'MoveSpeed': 1.0, 'WorldPos': [22.200000762939453, 102.5999984741211, -3.25], 'LookAtInstanceName': 'Dm'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C04', 'IsWaitEnd': False})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0015', 'ASName': 'C13_DecisivePose-St', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0016', 'ASName': 'C13_DecisivePose-Loop', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartFNumber': 36.0, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'EndFNumber': 36.0099983215332, 'RequiredFrame': 100, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.2100000381469727, 1.1799999475479126, 3.9600000381469727], 'AtVector': [0.75, 1.100000023841858, -0.019999999552965164], 'TargetFovy': 26.010000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerRequestLookAtTheFront()
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 5, 'ASName': 'C14_DecisivePose-Loop', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0018', 'IsCloseDialog': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'StartDistance': 1.7999999523162842, 'EndDistance': 1.7999999523162842, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'Partial': '', 'ASName': 'C14_Turn', 'IsWaitEnd': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
    } {
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Adult_001', 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': 'Dm'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_WaterTemple_0015_0029_Sp_00'})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_WaterTemple_0015', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

}

void C07() {
    Npc_Zora_Ruto_Adult_001[Dm].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -90.0, 'Position': [26.0, 104.0, -2.9700000286102295], 'ClothWarpMode': -1})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': '', 'IsWaitEnd': False, 'SceneName': 'C15', 'RootType': 0})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C15_Up', 'IsAllSlot': True, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [24.0, 105.5999984741211, -2.9700000286102295]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'StartDistance': 1.600000023841858, 'EndDistance': 1.600000023841858, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 5, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0030', 'ASName': 'C15_Loop', 'IsAnimeDriven': True})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0019', 'IsCloseDialog': False, 'IsAnimeDriven': True, 'ASName': 'C15_Loop', 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0020', 'IsCloseDialog': False, 'IsAnimeDriven': True, 'ASName': 'C15_Loop', 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0023', 'IsCloseDialog': False, 'IsAnimeDriven': True, 'EndDialogOption': 5, 'ASName': 'C15_Loop', 'MaintainPerformanceState': 0})
        Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'C15_LookUp_St', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerRequestLookAtTheFront()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPos': [21.649999618530273, 101.0, -2.9700000286102295], 'MoveSpeed': 0.0, 'DecSpeedDistance': 0.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ASCommand': 'C15_LookUp_Loop', 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAtPos({'MoveSpeed': 3.0, 'MinimumSpeed': 0.10000000149011612, 'IncSpeedDistance': 0.10000000149011612, 'ASCommand': '', 'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'DecSpeedDistance': 0.30000001192092896, 'IsTurnLooking': False, 'IsLookAtObject': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'OverwriteRotNearDist': -1.0, 'LookAtWorldPos': [24.3700008392334, 107.01000213623047, -2.9100000858306885], 'WorldPos': [22.049999237060547, 102.5999984741211, -3.5999999046325684]})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [24.3700008392334, 107.01000213623047, -2.9100000858306885], 'Target': 0, 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsTurnX': False})
    }

}

void C08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'SceneName': 'C13', 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0024', 'IsCloseDialog': False, 'IsAnimeDriven': True, 'EndDialogOption': 5, 'ASName': 'C15_LookUp_Loop', 'MaintainPerformanceState': 0})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0025', 'IsCloseDialog': False, 'IsAnimeDriven': True, 'EndDialogOption': 5, 'ASName': 'C15_LookUp_Loop', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 7.0, 'EndDistance': 7.0, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_WaterTemple_0015_C08', 'CurrDemoPaletteName': 'Dm_WaterTemple_0015_C08', 'Frames': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

    fork {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0026', 'IsAnimeDriven': True, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'EndDialogOption': 5, 'ASName': '', 'MaintainPerformanceState': 0})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 60.0})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [24.0, 105.5999984741211, -2.9700000286102295]})
        Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C15_Loop'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C09() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C21', 'RootType': 3, 'TargetActorName': 'Player_Event', 'IsWaitEnd': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C15_LookUp_Ed-1', 'IsWaitEnd': False, 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0027', 'IsAnimeDriven': True, 'ASName': 'C15_Loop', 'MaintainPerformanceState': 0})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0028', 'IsAnimeDriven': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsWaitEnd': True, 'ASName': 'C15_Loop', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_WaterTemple_0015_C01', 'CurrDemoPaletteName': 'Dm_WaterTemple_0015_C01'})
    }


    fork {
        Npc_Zora_Ruto_Adult_001[Dm].EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C15_Ed', 'IsAllSlot': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerRequestLookAtTheFront()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
    } {
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Master'}) {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [22.0, 102.66999816894531, -3.5799999237060547]})
            Event60:
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [24.3700008392334, 107.01000213623047, -2.9100000858306885], 'Target': 0, 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsTurnX': False})
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
            Event121:
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [22.0, 102.66999816894531, -2.450000047683716]})
            goto Event60
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Giant'}) {
            goto Event121
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
            goto Event121
        } else {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        }
        goto Event60
    }

}

void C10() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'IsWaitEnd': True, 'SceneName': 'C22'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ASCommand': 'C15_LookUp_Ed', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Master'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'OverwriteRotNearDist': -1.0, 'IsTurnLooking': True, 'IsLookAtObject': True, 'LookAtWorldPos': [24.3700008392334, 107.01000213623047, -2.9100000858306885], 'IncSpeedDistance': 0.0, 'ASCommand': '', 'WorldPos': [21.40999984741211, 102.66999816894531, -3.380000114440918], 'MinimumSpeed': 0.20000000298023224, 'MoveSpeed': 0.5, 'DecSpeedDistance': 0.4000000059604645})
            Event5:
            Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
            Event124:
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
            goto Event5
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Giant'}) {
            goto Event124
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
            goto Event124
        }
        goto Event5
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_WaterTemple_0015', 'IsUseSuspendFade': False})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'PosVector': [-1.25, 1.3700000047683716, -0.3100000023841858], 'AtVector': [-0.5799999833106995, 1.340000033378601, 0.9300000071525574], 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Adult_001[Dm].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Zora_Ruto_Adult_001[Dm].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_WaterTemple_0015:Dm_WaterTemple_0015_0017', 'ASName': 'C14_DecisivePose-Ed', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 88.0, 'EndFNumber': 88.0, 'StartDistance': 2.0999999046325684, 'EndDistance': 2.0999999046325684, 'StartBluarLevel': 1.2000000476837158, 'EndBluarLevel': 1.2000000476837158, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}
