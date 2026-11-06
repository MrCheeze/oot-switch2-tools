-------- EventFlow: Dm_DesertColossus_0025 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_DesertColossus_0025/Dm_DesertColossus_0025_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DesertColossus_0025_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Gerudo_Nabooru_Child
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventLookAtObjectImmediate', 'EventTriggerChangeEmotion', 'EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_DesertColossus_0025/Dm_DesertColossus_0025_Npc_Gerudo_GEU_Nabooru/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DesertColossus_0025_Nabooru.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_DesertColossus_0025/Dm_DesertColossus_0025/workspace.pp__ModelProject.gyml'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerZeldaNotesSimpleAddNPCTalkCount']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C04', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C05', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C06', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C07', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C08', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C09', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C10()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C10', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C11()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C11', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-15.800000190734863, 105.23999786376953, -23.559999465942383], 'AtVector': [-12.539999961853027, 103.58999633789062, -20.809999465942383], 'TargetFovy': 33.79999923706055, 'IsEnableRevertFast': False})
    } {
        Npc_Gerudo_Nabooru_Child.EventWarpToTargetPosAndRot({'Position': [-14.729999542236328, 103.25, -22.09000015258789], 'IsWaitEnd': True, 'YAngle': 87.9970474243164, 'ClothWarpMode': -1})
        Npc_Gerudo_Nabooru_Child.EventLookAtObjectImmediate({'Target': 2, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'PosOffset': [0.0, -0.10000000149011612, 0.0]})
        Npc_Gerudo_Nabooru_Child.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01-Loop', 'ForceFadeInFrame': 0.0, 'ClothWarpMode': 3})
    } {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': True, 'Length': 3})

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -92.48799896240234, 'Position': [-12.930999755859375, 103.25, -21.989999771118164], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Gerudo_Nabooru_Child'})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-12.437410354614258, 104.14540100097656, -22.469379425048828], 'YAngle': -92.48796081542969, 'ClothWarpMode': -1})
        }


        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C01-01', 'ClothWarpMode': 2})
        } {
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': False})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0001', 'ASName': 'Fly', 'MaintainPerformanceState': 0})
        }

    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_DesertColossus_0025_C01', 'CurrDemoPaletteName': 'Dm_DesertColossus_0025_C01'})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-11.970000267028809, 104.1500015258789, -22.790000915527344], 'AtVector': [-15.819999694824219, 104.2300033569336, -20.899999618530273], 'TargetFovy': 40.79999923706055, 'IsEnableRevertFast': False})
    } {
        Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, -1.0, 0.0]})
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0002', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0, 'ASName': 'C02-1'})
        Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, -0.30000001192092896, 0.0]})
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0004', 'MaintainPerformanceState': 0, 'ASName': 'C02-Loop', 'IsWaitEnd': True})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -92.48796081542969, 'ClothWarpMode': -1, 'Position': [-12.329999923706055, 104.14540100097656, -22.299999237060547]})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': False, 'PosVector': [-14.130000114440918, 104.37000274658203, -22.700000762939453], 'AtVector': [-10.199999809265137, 103.63999938964844, -20.170000076293945], 'TargetFovy': 30.399999618530273, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsOffCenterCamera': False, 'MinimumSpeed': 0.0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsUseDisguiseSpeakerPos': True, 'DecSpeedDistance': 0.10000000149011612, 'PassThrough': -1.0, 'MoveSpeed': 1.0, 'IncSpeedDistance': 0.0, 'offset': [-0.30000001192092896, 0.10000000149011612, 0.10000000149011612], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0005', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C03', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-12.8100004196167, 104.12000274658203, -22.979999542236328], 'AtVector': [-16.3700008392334, 105.12000274658203, -21.31999969482422], 'TargetFovy': 27.18000030517578, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Gerudo_Nabooru_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 3, 'ActorName': 'Npc_Gerudo_Nabooru_Child', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsUseDisguiseSpeakerPos': True, 'ArrivedASCommand': '', 'IsWaitEnd': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [-0.5, -0.10000000149011612, -0.5]})
    } {
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0007', 'MaintainPerformanceState': 0, 'ASName': 'C04-01', 'IsPlayASAllSlot': True})
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0008', 'MaintainPerformanceState': 0, 'ASName': 'C04-Talk', 'IsPlayASAllSlot': True})
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0009', 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'ASName': 'C04-Talk', 'IsPlayASAllSlot': True})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'MoveTime': 0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-13.380000114440918, 104.37000274658203, -22.739999771118164], 'AtVector': [-16.360000610351562, 105.19999694824219, -21.350000381469727], 'TargetFovy': 27.18000030517578, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': False, 'MoveTime': 300, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-13.460000038146973, 104.38999938964844, -22.700000762939453], 'AtVector': [-16.360000610351562, 105.19999694824219, -21.350000381469727], 'TargetFovy': 27.18000030517578, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [1.0, 0.5, 0.0]})
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0010', 'ASName': 'C05', 'MaintainPerformanceState': 0})
        Npc_Gerudo_Nabooru_Child.EventPlayAS({'ASName': 'C06-02', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 60.0, 'IsAnimeDriven': False})
        Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [-0.20000000298023224, 0.0, 0.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    }

}

void C06() {

    fork {
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0011', 'ASName': 'C06-02', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [-12.050000190734863, 103.97000122070312, -23.670000076293945], 'AtVector': [-14.239999771118164, 104.1500015258789, -21.510000228881836], 'TargetFovy': 50.0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'EvtTalkingS', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Fly'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    Npc_Gerudo_Nabooru_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0012', 'ASName': 'C06-02', 'MaintainPerformanceState': 0})
}

void C07() {
    Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0019', 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
    Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-4.083000183105469, 107.0, -26.52199935913086], 'Target': 2, 'PosOffset': [0.0, 0.5, 0.0]})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Gerudo_Nabooru_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 1.0, 0.0]})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-12.0600004196167, 103.97000122070312, -23.780000686645508], 'AtVector': [-13.670000076293945, 104.1500015258789, -21.15999984741211], 'TargetFovy': 50.0, 'MoveTime': 50, 'IsWaitEnd': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}

void C08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C08-0', 'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0023', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ASName': 'C01-Loop', 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})

            fork {
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'WorldPos': [-3.197000026702881, 103.77899932861328, -21.989999771118164], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
            } {
                Player_Event.EventPlayerTurnAndLook({'WorldPos': [-3.197000026702881, 103.77899932861328, -21.989999771118164], 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'SlowTurn': True, 'IsDoNavi': False, 'UseNormalTurn': True, 'UpperASCommand': ''})
            }

        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'EndFNumber': 0.0, 'StartFNumber': 0.0, 'EndDistance': 0.0, 'StartDistance': 0.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-13.460000038146973, 104.5999984741211, -23.0], 'AtVector': [-16.40999984741211, 104.7300033569336, -20.809999465942383], 'TargetFovy': 33.400001525878906, 'IsEnableRevertFast': False})
        Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ASName': 'C01-Loop', 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0038', 'MaintainPerformanceState': 0, 'EndDialogOption': 0, 'IsPlayASAllSlot': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -92.48799896240234, 'Position': [-12.930999755859375, 103.25, -21.989999771118164], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Gerudo_Nabooru_Child'})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -92.48796081542969, 'ClothWarpMode': -1, 'Position': [-12.199999809265137, 104.14540100097656, -22.399999618530273]})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Nabooru_Child', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'MoveTime': 180, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [-16.639999389648438, 104.29000091552734, -21.1299991607666], 'TargetFovy': 33.400001525878906, 'PosVector': [-13.460000038146973, 104.5999984741211, -23.0], 'IsEnableRevertFast': False})
    } {
        Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'WorldPos': [-16.472999572753906, 102.80000305175781, -22.780000686645508], 'Direction': 35.0})
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0021', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ASName': 'C01-Loop', 'MaintainPerformanceState': 0, 'EndDialogOption': 3})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWaitQuarter', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void C10() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-10.899999618530273, 104.12999725341797, -23.579999923706055], 'AtVector': [-14.359999656677246, 104.37999725341797, -21.649999618530273], 'TargetFovy': 24.100000381469727, 'IsEnableRevertFast': False})
    } {
        Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel2': 5, 'ChoiceLabel1': 4, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0039', 'ChoiceNumber': 0, 'ASName': '', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0026', 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceCancelNo': 1, 'ASName': 'C02', 'MaintainPerformanceState': 0})
    Npc_Gerudo_Nabooru_Child.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Gerudo_Nabooru_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        }

        Event221:
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ASName': 'C06-01', 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0041', 'MaintainPerformanceState': 0})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [-13.1899995803833, 104.56999969482422, -22.850000381469727], 'AtVector': [-14.930000305175781, 104.75, -21.940000534057617], 'TargetFovy': 26.399999618530273, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': False, 'MoveTime': 300, 'PosVector': [-13.359999656677246, 104.62000274658203, -22.770000457763672], 'AtVector': [-14.930000305175781, 104.79000091552734, -21.940000534057617], 'TargetFovy': 26.399999618530273, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Npc_Gerudo_Nabooru_Child.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C10'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0031', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'ASName': 'C10'})
        } {
            Npc_Gerudo_Nabooru_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
            Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-14.199999809265137, 104.5999984741211, -20.941999435424805]})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }


        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-10.899999618530273, 104.12999725341797, -23.579999923706055], 'AtVector': [-14.359999656677246, 104.37999725341797, -21.649999618530273], 'TargetFovy': 24.100000381469727, 'IsEnableRevertFast': False})
        } {
            Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0]})
            Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0032', 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'StartFNumber': 7.989999771118164, 'EndDistance': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }

    } else {
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceCancelNo': 1, 'ASName': 'C02', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0051', 'ChoiceNumber': 0})

        fork {
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, -0.10000000149011612, 0.0]})
        } {
            Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 6, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0042', 'MaintainPerformanceState': 0, 'ChoiceNumber': 1, 'ChoiceLabel2': 0})
        }

        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Gerudo_Nabooru_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        }

        goto Event221
    }
}

void C11() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [-13.350000381469727, 104.70999908447266, -22.1299991607666], 'AtVector': [-16.1299991607666, 104.70999908447266, -22.079999923706055], 'TargetFovy': 37.70000076293945, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0034', 'ASName': 'C11-01', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': True})
        Npc_Gerudo_Nabooru_Child.EventTalk({'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_DesertColossus_0025:Dm_DesertColossus_0025_0035', 'ASName': 'C11-02', 'EndDialogOption': 0, 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': True})
        GameSystemActor.EventTriggerZeldaNotesSimpleAddNPCTalkCount({'Frame': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
}
