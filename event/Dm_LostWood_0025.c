-------- EventFlow: Dm_LostWood_0025 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Kokiri_Mido_Adult
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_LostWood_0025/Dm_LostWood_0025_Npc_Kokiri_MC_Mido/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LostWood_0025_Mido.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'WaitingResumeInGameBgm': False})
    Npc_Kokiri_Mido_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [47.88999938964844, 100.01000213623047, -28.770000457763672]})
    Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'YAngle': 180.0, 'TargetActorKind': 1, 'ActorName': 'Npc_Kokiri_Mido_Adult', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [-0.10999999940395355, 0.0, 2.0999999046325684], 'IsWaitEnd': True, 'ASCommand': 'EvtWait'})
    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Kokiri_Mido_Adult', 'offset': [-0.5, -0.05000000074505806, -0.10000000149011612], 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Kokiri_Mido_Adult', 'InstanceName': '', 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.05000000074505806, -0.3449999988079071, 0.0]})
    Npc_Kokiri_Mido_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-1-Lp', 'IsAllSlot': True})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
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

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0, 'CameraResetPolicy': 0})
    SoundSystemActor.EventTriggerStartInGameBgm({'ResumeDelay': 1, 'IsFadeIn': False, 'WithPlayableEvent': False})
}

void C01() {

    fork {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Mido_Adult', 'PosVector': [-2.140000104904175, 1.350000023841858, 4.989999771118164], 'AtVector': [-1.0399999618530273, 1.1200000047683716, 2.9800000190734863], 'TargetFovy': 15.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0000', 'ASName': 'C01-1-Lp', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False})
        Npc_Kokiri_Mido_Adult.EventTriggerRequestLookAtTheFront()
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0001', 'ASName': 'C01-2-St', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0002', 'ASName': 'C01-2-Lp', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_Kokiri_Mido_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0003', 'ASName': 'C04-St', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0004', 'ASName': 'C04-Lp', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0005', 'ASName': 'C04-Lp', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False})
        Npc_Kokiri_Mido_Adult.EventTriggerRequestLookAtTheFront()
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0006', 'ASName': 'C04-Ed', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_LostWood_0025_C01', 'CurrDemoPaletteName': 'Dm_LostWood_0025_C01'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 3.450000047683716, 'EndDistance': 3.450000047683716, 'StartFNumber': 98.5999984741211, 'EndFNumber': 98.5999984741211, 'StartBluarLevel': 1.8799999952316284, 'EndBluarLevel': 1.8799999952316284, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Mido_Adult', 'PosVector': [-0.7900000214576721, 0.49000000953674316, 1.059999942779541], 'AtVector': [-0.11999999731779099, 0.8100000023841858, 0.23999999463558197], 'TargetFovy': 26.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0007', 'ASName': 'C05-1-Lp', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False})
        Npc_Kokiri_Mido_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0008', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'ASName': 'C07-St'})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 1.159999966621399, 'EndDistance': 1.159999966621399, 'StartFNumber': 75.19999694824219, 'EndFNumber': 75.19999694824219, 'StartBluarLevel': 1.25, 'EndBluarLevel': 1.25, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Kokiri_Mido_Adult', 'PosVector': [-0.699999988079071, 0.7699999809265137, -1.2599999904632568], 'AtVector': [-0.49000000953674316, 0.8299999833106995, -0.6399999856948853], 'TargetFovy': 27.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0009', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'ASName': 'C07-Lp'})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 1.809999942779541, 'EndDistance': 1.809999942779541, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'StartBluarLevel': 1.9500000476837158, 'EndBluarLevel': 1.9500000476837158, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Mido_Adult', 'PosVector': [-2.140000104904175, 1.350000023841858, 4.989999771118164], 'AtVector': [-1.0399999618530273, 1.1200000047683716, 2.9800000190734863], 'TargetFovy': 15.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTriggerRequestLookAtTheFront()
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0010', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'ASName': 'C07-St-1'})
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})
        Npc_Kokiri_Mido_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0011', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'ASName': 'C07-St-2'})
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Kokiri_Mido_Adult.EventTriggerRequestLookAtTheFront()
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0012', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'ASName': 'C07-St-1'})
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0025:Dm_LostWood_0025_0013', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C07-St-2'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_LostWood_0025_C04', 'CurrDemoPaletteName': 'Dm_LostWood_0025_C04'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 3.450000047683716, 'EndDistance': 3.450000047683716, 'StartFNumber': 98.5999984741211, 'EndFNumber': 98.5999984741211, 'StartBluarLevel': 1.8799999952316284, 'EndBluarLevel': 1.8799999952316284, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_LostWood_0025_C04', 'CurrDemoPaletteName': 'Dm_LostWood_0025_C04_1', 'Frames': 40})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.5})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}
