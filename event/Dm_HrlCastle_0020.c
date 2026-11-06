-------- EventFlow: Dm_HrlCastle_0020 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventDeleteShowItem', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': ''}

Actor: Npc_Hylia_Talon_Child
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventAIScheduleSimpleGetUp', 'EventTriggerEmitXLink', 'EventTriggerLookAtObject', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0020/Dm_HrlCastle_0020_Npc_Hylia_MU_Talon/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0020.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_AlarmCucco
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0020_AlarmCucco.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0020/Dm_HrlCastle_0020_Item_PocketCucco/workspace.pp__ModelProject.gyml'}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

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

Actor: EventSystemActor[ESA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()

}

void C05() {

    fork {
        Npc_Hylia_Talon_Child.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True})
        Npc_Hylia_Talon_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, -2.0, 0.0]})
        Npc_Hylia_Talon_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Hylia_Talon_Child.EventWarpToTargetPosAndRot({'Position': [31.183000564575195, 117.04000091552734, -140.62600708007812], 'YAngle': 82.0, 'ClothWarpMode': -1, 'IsWaitEnd': True})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0002', 'IsCloseDialog': False, 'ASName': 'Wait', 'EndDialogOption': 0, 'IsAnonymous': True, 'MaintainPerformanceState': 0})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0003', 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'Wait', 'IsAnimeDriven': True, 'IsAnonymous': True, 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Hylia_Talon_Child'})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'YAngle': -90.0, 'IsWaitEnd': True, 'Position': [32.43000030517578, 117.04000091552734, -140.61000061035156], 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventDeleteShowItem({'IsFadeOut': False, 'IsScaleOut': False, 'IsWaitEnd': True, 'ChangeVisibleOffWithRequestDelete': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [32.779998779296875, 118.5999984741211, -138.16000366210938], 'AtVector': [32.04999923706055, 117.93000030517578, -139.89999389648438], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C5'})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -90.0, 'Position': [32.75, 117.93000030517578, -141.2100067138672], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'OffsetBase': 1, 'InstanceName': '', 'Target': 3, 'ActorName': 'Npc_Hylia_Talon_Child', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartFNumber': 23.0, 'EndFNumber': 23.0, 'StartDistance': 1.850000023841858, 'EndDistance': 1.850000023841858, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0020_05', 'CurrDemoPaletteName': 'Dm_HrlCastle_0020_05'})
    }


    fork {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        Npc_Hylia_Talon_Child.EventTalk({'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0004', 'IsCloseDialog': False, 'IsWaitEnd': True, 'ASName': 'Wait', 'IsAnonymous': True, 'MaintainPerformanceState': 0})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0005', 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'Wait', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingS', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 123})
        Npc_Hylia_Talon_Child.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
        Npc_Hylia_Talon_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, -0.5, 0.0]})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0006', 'IsCloseDialog': False, 'ASName': 'Act_Surprise_Wait', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkingL', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -2.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -2.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    }

}

void C06() {

    fork {
        Npc_Hylia_Talon_Child.EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C06_Surprised'})
        Npc_Hylia_Talon_Child.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [30.741430282592773, 117.04519653320312, -140.60000610351562], 'YAngle': 90.0, 'ClothWarpMode': -1})
        Npc_Hylia_Talon_Child.EventTriggerRequestLookAtTheFront()
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0007', 'IsCloseDialog': False, 'IsAnimeDriven': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': True, 'ASName': 'C06_Surprised'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [32.5099983215332, 119.6500015258789, -140.11000061035156], 'AtVector': [31.709999084472656, 118.94000244140625, -140.30999755859375], 'TargetFovy': 30.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C6'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0020_06', 'CurrDemoPaletteName': 'Dm_HrlCastle_0020_06'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartDistance': 2.299999952316284, 'EndDistance': 2.299999952316284, 'StartFNumber': 24.0, 'EndFNumber': 24.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Npc_Hylia_Talon_Child.EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C06_Dash'})
        Npc_Hylia_Talon_Child.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Talon_RunSmoke_01'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [32.5099983215332, 119.6500015258789, -140.11000061035156], 'AtVector': [31.709999084472656, 118.94000244140625, -140.30999755859375], 'TargetFovy': 30.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 53})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [32.40999984741211, 119.66999816894531, -140.72999572753906], 'AtVector': [31.709999084472656, 118.94000244140625, -140.30999755859375], 'TargetFovy': 30.0, 'StartAccelerateRate': 0.38999998569488525, 'MoveTime': 28, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 55})
        Npc_Hylia_Talon_Child.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_HrlCastle_0020_0010_Sp_00'})
    } {
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 64})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_DoDon'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartDistance': 2.299999952316284, 'EndDistance': 2.299999952316284, 'StartFNumber': 24.0, 'EndFNumber': 24.0, 'RequiredFrame': 40, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C01() {

    fork {
        Npc_Hylia_Talon_Child.EventPlayAS({'ASName': 'C01_Sleepwait', 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsAllSlot': True, 'IsWaitEnd': False})
        Npc_Hylia_Talon_Child.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [31.329999923706055, 117.04000091552734, -140.60000610351562], 'YAngle': 139.0, 'ClothWarpMode': -1})
        Npc_Hylia_Talon_Child.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C01_Sleepwait', 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsAllSlot': True})
    } {
        Dm_Locator[01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [31.309999465942383, 117.04000091552734, -140.60000610351562], 'ClothWarpMode': -1})
        Item_AlarmCucco.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': '01', 'BoneName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        Item_AlarmCucco.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'C01'})
        Item_AlarmCucco.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Coco_Feather_01'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0'})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C1', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 8.0, 'EndFNumber': 8.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0020_01', 'CurrDemoPaletteName': 'Dm_HrlCastle_0020_01'})
    }

}

void C07() {

    fork {
        Npc_Hylia_Talon_Child.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [31.1299991607666, 117.37000274658203, -136.9600067138672], 'ClothWarpMode': -1})
        Npc_Hylia_Talon_Child.EventTriggerRequestLookAtTheFront()
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C7'})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Hylia_Talon_Child', 'Target': 0, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0020_07', 'CurrDemoPaletteName': 'Dm_HrlCastle_0020_07'})
    }


    fork {
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0008', 'EndDialogOption': 1, 'IsCloseDialog': False, 'IsAnimeDriven': True, 'MaintainPerformanceState': 0, 'ASName': 'C07-8_Dash'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-1'})
    } {
        EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 113})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0020_08', 'CurrDemoPaletteName': 'Dm_HrlCastle_0020_08'})
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C8'})
    } {
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 167})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doka'})
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 14})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dooon'})
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 42})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doka'})
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 12})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doka'})
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 18})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Small'})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_AlarmCucco', 'Num': -1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Goto_HyruleCastle', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'StepName': 'Step04'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'IsFirstStep': False, 'ChallengeName': 'Goto_HyruleCastle'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastle_IsMalonAppear', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Talon_AfterWakeUp', 'Index': -1, 'Value': True})
}

void C02() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C2'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'EndFNumber': 20.0, 'StartFNumber': 20.0, 'StartDistance': 5.019999980926514, 'EndDistance': 5.019999980926514, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0020_02', 'CurrDemoPaletteName': 'Dm_HrlCastle_0020_02'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Item_AlarmCucco.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'C02'})
    } {
        Npc_Hylia_Talon_Child.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsAllSlot': True, 'ASName': 'C02_Sleepwait'})
    }

}

void C03() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C3'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'StartDistance': 1.5, 'EndDistance': 1.5, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'RequiredFrame': 80, 'StartFNumber': 6.0, 'EndFNumber': 6.0, 'IsAutoFocalDist': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'StartDistance': 1.5, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsWaitEnd': False, 'StartFNumber': 6.0, 'EndFNumber': 6.0, 'EndDistance': 1.7999999523162842, 'RequiredFrame': 20, 'IsAutoFocalDist': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0020_03', 'CurrDemoPaletteName': 'Dm_HrlCastle_0020_03'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C03-0', 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False})
    } {
        Item_AlarmCucco.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'C03'})
        EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Item_AlarmCucco.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Coco_Feather_02'})
    } {
        Npc_Hylia_Talon_Child.EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsAllSlot': True, 'ASName': 'C03_Sleepwait', 'IsWaitEnd': True})
    }

}

void C04() {

    fork {
        Npc_Hylia_Talon_Child.EventAIScheduleSimpleGetUp({'IsChangeMotionType': True, 'IsChangeMoveState': False, 'IsWaitEnd': False})

        fork {
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0000', 'IsCloseDialog': False, 'EndDialogOption': 1, 'IsAnimeDriven': True, 'IsPlayASAllSlot': True, 'IsAnonymous': True, 'MaintainPerformanceState': 0, 'ASName': 'C04_Owaaa'})
        } {
            GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 21})
            GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doon'})
        }

        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0020:Dm_HrlCastle_0020_0001', 'EndDialogOption': 1, 'IsCloseDialog': False, 'IsAnimeDriven': True, 'IsPlayASAllSlot': True, 'IsAnonymous': True, 'MaintainPerformanceState': 0, 'ASName': 'C04_Getup'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'EndBluarLevel': 1.0, 'StartDistance': 1.5, 'StartFNumber': 6.0, 'RequiredFrame': 20, 'IsEnableNear': False, 'EndFNumber': 8.0, 'EndDistance': 2.0, 'StartBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0020_04', 'CurrDemoPaletteName': 'Dm_HrlCastle_0020_04'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C4'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C04-0'})
    } {
        Item_AlarmCucco.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'C04'})
    }

}
