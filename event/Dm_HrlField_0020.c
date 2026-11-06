-------- EventFlow: Dm_HrlField_0020 --------

Actor: Npc_Hylia_Impa_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventTriggerEmitNpcOrPlayerVoice', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0020/Dm_HrlField_0020_Npc_Hylia_WU_Impa/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0020_Impa.root.as', 'EventMemberCreateMethod': 1}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerEmitNpcOrPlayerVoice', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0020_Player_Child.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0020/Dm_HrlField_0020_Player_Child/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveAroundToPlayer', 'EventNaviMoveAtActor', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0020/Dm_HrlField_0020_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0020_Navi.root.as', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventSetDoFForFlowchart', 'EventResetToInGameParametersDoF', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Impa_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventTriggerAddPreComputedCullingBasePos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundBeginForbidScreenDucking', 'EventTriggerSoundEndForbidScreenDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Impa_Effect_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetCloudShadowPos', 'Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C01_C02()


    call C03()


    call C04_C05()


    call C06()


    call C07()


    call C08()


    call C09()

}

void C01_C02() {

    fork {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': False, 'Color': 0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01', 'RootType': 0, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'Position': [1.0099999904632568, 150.13999938964844, 64.9000015258789], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.25, 0.0, 0.5], 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        Npc_Hylia_Impa_Child.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-0.5, 150.13999938964844, 65.0], 'ClothWarpMode': -1})
        Npc_Hylia_Impa_Child.EventTriggerRequestLookAtTheFront()
        Npc_Hylia_Impa_Child.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': False, 'EndDistance': 3.75, 'EndFNumber': 10.0, 'EndBluarLevel': 1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0000', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})

    fork {
        Npc_Hylia_Impa_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C01_Turn', 'IsAnimeDriven': True, 'ForceFadeInFrame': 60.0, 'IsWaitEnd': False})
    } {

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Impa_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        } {
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Cloth_L_01', 'ELinkKey': ''})
        }


        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Impa_Child', 'PosVector': [-2.880000114440918, 0.5799999833106995, 2.7300000190734863], 'AtVector': [-1.75, 0.7799999713897705, 1.8700000047683716], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

            fork {
                Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'WorldPos': [10.0, 154.0, 64.0], 'KeepTalkWait': False, 'SlowTurn': True, 'UseNormalTurn': True, 'IsDoNavi': False})
            } {
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'IsTurnX': True, 'Direction': 90.0, 'WorldPos': [10.0, 154.0, 64.0]})
            }

        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C02'})
        }

    } {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [6.271543025970459, 151.63450622558594, 66.4545669555664], 'EndPos': [6.271543025970459, 151.63450622558594, 66.4545669555664]})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void C03() {

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [10.0, 54.0, 58.0], 'Target': 3, 'ActorName': 'Npc_Hylia_Impa_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Direction': 0.0, 'SlowTurn': False, 'KeepTalkWait': False, 'UseNormalTurn': True, 'IsDoNavi': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [1.2400000095367432, 150.8300018310547, 65.16000366210938], 'YAngle': 90.0, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Impa_Child', 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        Npc_Hylia_Impa_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'TargetFovy': 40.0, 'PosVector': [6.271543025970459, 151.63450622558594, 66.4545669555664], 'AtVector': [7.393312931060791, 152.0847930908203, 65.68238830566406], 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsWaitEnd': True, 'RequiredFrame': 0, 'EndDistance': 135.0, 'EndFNumber': 5.599999904632568, 'EndBluarLevel': 0.5})
    } {
        EventWorldManagerController.Event_SetWindForFlowchart({'IsImmTrans': True, 'IsWaitEnd': False, 'Azimuth': 0.0, 'Elevation': 0.0, 'Speed': 1.0})
        EventWorldManagerController.Event_SetCloudShadowPos({'IsWaitEnd': True, 'CloudShadowPosX': 0.9900000095367432, 'CloudShadowPosY': 0.37299999594688416})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C03'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0001', 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventSystemActor.EventWait({'Frames': 180, 'IsWaitEnd': True})
        Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0002', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0003', 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'Wait', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTotargetPosType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 200, 'TargetFovy': 40.0, 'PosVector': [6.101651191711426, 151.83819580078125, 66.27938079833984], 'AtVector': [7.405934810638428, 152.0847930908203, 65.73565673828125], 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsWaitEnd': True, 'EndDistance': 80.0, 'EndFNumber': 1.2000000476837158, 'RequiredFrame': 200, 'EndBluarLevel': 1.25})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C04_C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_Impa_Child', 'PosVector': [-0.9900000095367432, 1.1299999952316284, 1.3600000143051147], 'AtVector': [4.269999980926514, 2.109999895095825, -5.039999961853027], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': False, 'EndDistance': 1.600000023841858, 'EndFNumber': 15.0, 'EndBluarLevel': 0.800000011920929})
    } {
        Npc_Hylia_Impa_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, -0.17000000178813934, 0.0]})
    } {
        EventWorldManagerController.Event_ResetWindForFlowchart({'IsImmTrans': True, 'IsWaitEnd': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04'})
    }

    Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0004', 'MaintainPerformanceState': 0})
    Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0005', 'MaintainPerformanceState': 0})

    fork {
        Npc_Hylia_Impa_Child.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Sitdown', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 55.0, 'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})

        fork {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04-05'})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_Impa_Child', 'PosVector': [-2.109999895095825, 0.5799999833106995, 1.6299999952316284], 'AtVector': [-0.2199999988079071, 0.6000000238418579, 0.9200000166893005], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': False, 'EndDistance': 2.200000047683716, 'EndFNumber': 13.0600004196167, 'EndBluarLevel': 0.800000011920929})
        } {
            GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [-4.6639862060546875, 150.5742950439453, 69.42642211914062], 'EndPos': [-4.6639862060546875, 150.5742950439453, 69.42642211914062]})
        }

    }

    Npc_Hylia_Impa_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0006', 'ASName': 'sit_Loop', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    Npc_Hylia_Impa_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0007', 'ASName': 'sit_Loop', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    Npc_Hylia_Impa_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0008', 'ASName': 'sit_Loop', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C06-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Impa_Child.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Standup', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Hylia_Impa_Child.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C06_wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C05'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Hylia_Impa_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0010', 'IsWaitEnd': True, 'ASName': 'C06_wait', 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C06-1'})
    } {

        fork {
            Player_Event.EventPlayerTurnAndLook({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'IgnoreTargetPosMove': False, 'WorldPos': [10.0, 154.0, 64.0], 'UseNormalTurn': True, 'SlowTurn': True, 'IsWaitEnd': True, 'IsDoNavi': False})
        } {
            Npc_Navi.EventNaviLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'WorldPos': [10.0, 154.0, 64.0], 'IsWaitEnd': True})
        } {
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Cloth_L_01', 'ELinkKey': ''})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Hylia_Impa_Child.EventPlayAS({'ASName': 'Step_Back', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 50.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0011', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}

void C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [2.119999885559082, 150.24000549316406, 65.5999984741211], 'AtVector': [1.6200000047683716, 150.3300018310547, 65.45999908447266], 'TargetFovy': 38.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Impa_Child.EventPlayASWithClothWarp({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'C06', 'IsAllSlot': True, 'ClothWarpMode': 2})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 87})
    } {
        EventSystemActor[Impa_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 70})

        fork {
            Npc_Hylia_Impa_Child.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_HrlField_0020_0016_Sp_00'})
        } {
            EventSystemActor[Impa_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 12})

            fork {
                SoundSystemActor.EventTriggerSoundBeginForbidScreenDucking({'CommandLife': 2})
                UISystemActor.EventEventFadeOut({'Color': 1, 'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': True})
            } {
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
            }

        }

    } {
        EventSystemActor[Impa_Effect_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Hylia_Impa_Child.EventTriggerEmitXLink({'ELinkKey': 'Dm_HrlField_0020_DekuNut_Flash_00', 'SLinkKey': ''})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': False, 'EndDistance': 1.399999976158142, 'EndFNumber': 66.5999984741211, 'EndBluarLevel': 1.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text1': 'C06'})
    }

    Npc_Hylia_Impa_Child.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'Length': 1, 'IsNoPlayAnime': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 62})

    fork {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': True})
        SoundSystemActor.EventTriggerSoundEndForbidScreenDucking()
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ASCommand': 'C07', 'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ClothWarpMode': 2, 'ForceFadeFrame': -1.0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
            Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_HrlField_0020_0016'})
        }

        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ActorName': 'Npc_Hylia_Impa_Child', 'WorldPos': [0.0, 0.0, 0.0], 'IsTurnX': False, 'Direction': 0.0, 'Target': 3})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [3.8299999237060547, 152.14999389648438, 69.20999908447266], 'AtVector': [-1.190000057220459, 150.3800048828125, 63.90999984741211], 'TargetFovy': 32.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviMoveAtActor({'LookAtTarget': 3, 'LookAtActorName': 'Npc_Hylia_Impa_Child', 'IsLookAtObject': True, 'TargetActorName': 'Npc_Hylia_Impa_Child', 'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'TargetInstanceName': '', 'ASCommand': '', 'LookAtOffsetBase': 0, 'LookAtDirection': 90.0, 'IsTurnLooking': False, 'TargetOffset': [0.0, -0.5, 0.6499999761581421], 'IsUseDisguiseSpeakerPos': False, 'OverwriteRotNearDist': -1.0, 'IsTargetNaviAttentionPos': True, 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0012', 'ASName': 'EvtTalk', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'EndDistance': 6.375, 'EndFNumber': 20.0, 'EndBluarLevel': 1.5, 'IsPrimaryApply': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': True, 'Text1': 'C07'})
    }

}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-0.19619199633598328, 150.51890563964844, 65.66869354248047], 'AtVector': [0.5752699971199036, 150.5876007080078, 65.03611755371094], 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-0.19619199633598328, 150.51890563964844, 65.66869354248047], 'AtVector': [0.5752699971199036, 150.5876007080078, 65.03611755371094], 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 15, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [-0.04184500128030777, 150.36309814453125, 65.99954223632812], 'AtVector': [0.7788969874382019, 150.66529846191406, 65.51399230957031], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'MoveTime': 143, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C09', 'IsAllSlot': True, 'IsWaitEnd': True, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'ForceFadeFrame': 30.0, 'IsAllSlot': True})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtOffsetBase': 0, 'LookAtDirection': 0.0, 'IsTurnLooking': False, 'IsHomePosition': True, 'IsNearOffset': True, 'offset': [0.5, 0.10000000149011612, 0.0], 'LookAtTarget': 0, 'LookAtActorName': '', 'IsLookAtObject': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0020:Dm_HrlField_0020_0013', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': False, 'EndDistance': 1.2000000476837158, 'EndFNumber': 17.5, 'EndBluarLevel': 0.25})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'EndDistance': 50.0, 'EndFNumber': 16.0, 'RequiredFrame': 143, 'EndBluarLevel': 0.10000000149011612})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C08'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.7300000190734863, 0.4699999988079071, -2.9800000190734863], 'AtVector': [-0.20999999344348907, 1.3600000143051147, 0.4099999964237213], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 180, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}
