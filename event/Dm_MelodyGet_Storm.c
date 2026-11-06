-------- EventFlow: Dm_MelodyGet_Storm --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_009_Adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventTriggerLookAtObject', 'EventLookAtObjectImmediate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLookNow', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayOcarinaFree', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Storm/Dm_MelodyGet_Storm_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Storm_Player_Adult.root.as'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [0.0, 0.0, -4.900000095367432]}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Time
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Time_Holder
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerAddPreComputedCullingBasePos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text2': '', 'IsWaitEnd': False})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C02'})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C03'})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C04'})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C05', 'Text3': '', 'Text2': ''})
    }


    call C06()


    call Npc_Hylia_009_Adult.After_GetStormSong()

}

void C01() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'WaitingResumeInGameBgm': False})

    fork {
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        Npc_Hylia_009_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }


    fork {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 2, 'IsWaitEnd': False})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

    Npc_Hylia_009_Adult.EventTriggerBecomeSpeaker()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        Npc_Hylia_009_Adult.EventTalk({'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Adult:Talk_08', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'Ocarina_St', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_009_Adult', 'PosVector': [0.20000000298023224, 0.8500000238418579, 1.6799999475479126], 'AtVector': [-0.1599999964237213, 1.0399999618530273, -0.28999999165534973], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 15, 'Actor1ActorName': 'Npc_Hylia_009_Adult', 'PosVector': [0.10999999940395355, 0.9399999976158142, 1.2000000476837158], 'AtVector': [-0.1599999964237213, 1.0499999523162842, -0.28999999165534973], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'Position': [1.3799999952316284, 104.7300033569336, 49.06999969482422], 'ClothWarpMode': 0, 'EnableInAir': False, 'ASCommand': 'Ocarina_Loop'})
            Player_Event.EventPlayerTurnAndLookNow({'ActorName': 'Npc_Hylia_009_Adult', 'TurnFaceControlType': 0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'OffsetBase': 0, 'Target': 3, 'IsDoNavi': False})
        } {
            Npc_Hylia_009_Adult.EventLookAtObjectImmediate({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'IsWaitEnd': True})
        }


        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Ocarina_Loop', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': False, 'ClothWarpMode': 3, 'ForceFadeFrame': 0.0})
        } {
            Npc_Hylia_009_Adult.EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Adult:Talk_02', 'MaintainPerformanceState': 0})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [0.8299999833106995, 106.3499984741211, 48.70000076293945], 'ClothWarpMode': -1})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'StartDistance': 0.800000011920929, 'EndDistance': 0.800000011920929, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C03() {
    Npc_Hylia_009_Adult.EventTriggerSetOwnAsInstrumentPlayer()

    fork {

        call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Adult:Talk_03'})

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.8100000023841858, 105.9800033569336, 50.20000076293945], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-1.7899999618530273, 105.76000213623047, 50.400001525878906], 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 20.0, 'EndFNumber': 20.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

}

void C04() {

    fork {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'Ocarina_Ed', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        }


        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 5})


        call Dm_SY_Ocarina.LearningOcarinaPlayAuto()

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.009999999776482582, 1.1399999856948853, 1.5099999904632568], 'AtVector': [0.10000000149011612, 1.0499999523162842, -1.4800000190734863], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'StartFNumber': 20.0, 'EndFNumber': 20.0, 'StartDistance': 1.2000000476837158, 'EndDistance': 1.2000000476837158, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01_Loop', 'UseAnmDriven': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Windmill_IsHighSpeed'})
}

void C05() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 400})

        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_StormSong'})

    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'Npc_Hylia_009_Adult', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [-0.9700000286102295, 106.08999633789062, 48.65999984741211], 'EndPos': [-0.9700000286102295, 106.08999633789062, 48.65999984741211]})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_FinaleJingle', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Storm_Rain'})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Item_Ocarina_Time.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Storm_Shine'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'StartFNumber': 20.0, 'EndFNumber': 20.0, 'StartDistance': 3.0, 'EndDistance': 4.0, 'RequiredFrame': 400, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C06() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

        fork {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C06'})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [1.399999976158142, 105.97000122070312, 50.04999923706055], 'TargetFovy': 37.0, 'EnableCameraAlpha': True, 'PosVector': [-0.9700000286102295, 106.08999633789062, 48.65999984741211], 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.5, 'EndDistance': 2.5, 'IsEnableNear': False, 'StartFNumber': 35.0, 'EndFNumber': 35.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Item_Ocarina_Time_Holder.EventPlayAS({'ASName': 'Carry', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        }

    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'C01_Ed', 'IsWaitEnd': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
        Player_Event.EventPlayerWait({'IsWaitEnd': False})
    } {
        Dm_Locator.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_MelodyGet_Storm_Rain', 'SLinkKey': '', 'IsKill': False})
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Storm_Rain_Ed'})
    }

}
