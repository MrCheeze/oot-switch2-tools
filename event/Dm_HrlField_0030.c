-------- EventFlow: Dm_HrlField_0030 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject', 'EventGoOffstageForUser', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Kaepora
entrypoint: None()
actions: ['EventTalk', 'EventTriggerModelBind', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventWarpToTargetActor', 'EventLookAtObjectImmediate', 'EventTriggerChangeEmotion', 'EventTriggerVoiceChangeSpVoiceMode']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0030/Dm_HrlField_0030_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0030_Keapora.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[cam_P]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0030/Dm_HrlField_0030_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0030_Dm_Locator.root.as'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0030/Dm_HrlField_0030_Dm_Locator/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0030_Dm_Locator.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[C06]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventTriggerSoundStopBGM', 'EventTriggerSoundStartSceneBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[GSA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[GSA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventOverwriteSceneShadingParams', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 3, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})

    fork {
        Npc_Kaepora.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlField_0030:Dm_HrlField_0030_0000', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'C01', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtNotice', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 10.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        Dm_Locator[cam_P].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [184.3800048828125, 156.08999633789062, 39.93000030517578], 'ClothWarpMode': -1})
    } {
        Npc_Kaepora.EventTriggerVoiceChangeSpVoiceMode({'CommandLife': 0, 'NoPosVoiceMode': 6})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Npc_Kaepora', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'MoveTotargetPosType': 1, 'IsLinearMove': False, 'LatShiftRange': 20.0, 'LongShiftRange': 20.0, 'Actor2ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 3, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 2, 'MoveTime': 90, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kaepora', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': True, 'SlowTurn': True, 'IsDoNavi': False})
    } {
        Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [184.33999633789062, 166.75999450683594, 39.90999984741211], 'ClothWarpMode': -1})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Kaepora', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    }


    call C2()

}

void C2() {

    fork {
        Npc_Kaepora.EventLookAtObjectImmediate({'OffsetBase': 0, 'ActorName': 'Player_Event', 'InstanceName': '', 'IsWaitEnd': False, 'Target': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
        Npc_Kaepora.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C06_wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0})
        Npc_Kaepora.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '0', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': -120.0, 'OffsetBase': 0, 'ClothWarpMode': 2})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Kaepora.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0030:Dm_HrlField_0030_0001', 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': 'C06_wait', 'MaintainPerformanceState': 0})
        Npc_Kaepora.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Kaepora.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_HrlField_0030:Dm_HrlField_0030_0002', 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'C06_wait', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-5.210000038146973, 8.430000305175781, -3.180000066757202], 'AtVector': [-4.679999828338623, 8.630000114440918, -2.859999895095825], 'TargetFovy': 25.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.30000001192092896, 'EnableCameraAlpha': True, 'LookAtDis': 1.0, 'MoveTime': 170, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-5.199999809265137, 8.430000305175781, -3.180000066757202], 'AtVector': [-4.710000038146973, 8.739999771118164, -2.880000114440918], 'TargetFovy': 25.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'OffsetBase': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'PositionOffset': [-8.600299835205078, -0.4478999972343445, -3.827080011367798], 'YAngle': 60.0, 'ASCommand': 'EvtWait'})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kaepora', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [184.33999633789062, 166.75999450683594, 39.90999984741211], 'ClothWarpMode': -1})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 59.540069580078125, 'ClothWarpMode': -1, 'Position': [175.5399932861328, 156.0, 36.77000045776367]})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Kaepora', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_HrlField_0030'})
    } {
        TerrainSystemActor.EventTerrainCalcCenter({'SceneName': 'HyruleField_02', 'Position': [184.33999633789062, 166.75999450683594, 39.90999984741211], 'IsWaitEnd': True})
    }


    call C3()

}

void C3() {

    fork {
        Npc_Kaepora.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': '0', 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0]})
        GameSystemActor[GSA1].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Kaepora.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_HrlField_0030:Dm_HrlField_0030_0003', 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'C06_wait', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [1.8799999952316284, 1.5800000429153442, 1.6399999856948853], 'AtVector': [0.9300000071525574, 1.25, 0.8299999833106995], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [1.9800000190734863, 1.4800000190734863, 1.6200000047683716], 'AtVector': [1.309999942779541, 1.25, 0.5400000214576721], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveTime': 240, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor[GSA2].EventWait({'IsWaitEnd': True, 'Frames': 45})
    } {
        Dm_Locator[C06].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [184.33999633789062, 166.75999450683594, 39.90999984741211], 'ClothWarpMode': -1})
        Dm_Locator[0].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06_Loop', 'IsWaitEnd': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    call C4()

}

void C4() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'IsLoop': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'C06', 'IsReferenceRootOnce': True, 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 1.0, 'SceneName': 'C06-0'})
    } {
        Dm_Locator[0].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06_Loop', 'IsWaitEnd': False})
    } {
        Npc_Kaepora.EventTalk({'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_HrlField_0030:Dm_HrlField_0030_0005', 'EndDialogOption': 0, 'ASName': 'C06_wait', 'MaintainPerformanceState': 0})
        Npc_Kaepora.EventTalk({'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0030:Dm_HrlField_0030_0006', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsPlayASAllSlot': False, 'ASName': 'C06_wait', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'OffsetBase': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'PositionOffset': [-8.600299835205078, -0.4478999972343445, -3.827080011367798], 'YAngle': 275.0, 'ASCommand': 'EvtWait'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsHomePosition': False, 'IsNearOffset': False, 'offset': [0.5, 0.0, 0.0], 'IsWaitEnd': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'offset': [0.5, 0.0, 0.0], 'IsHomePosition': True, 'IsNearOffset': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C04', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 1.0})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_HrlField_0030'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'C06', 'RootType': 3, 'IsReferenceRootOnce': True, 'SceneName': 'C06-0'})
    } {
        Dm_Locator[0].EventPlayAS({'ASName': 'C06', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Npc_Kaepora.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Kaepora.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C06', 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 73})
        Npc_Kaepora.EventTriggerEmitXLink({'ELinkKey': 'Dm_HrlField_0030_Jump_01', 'SLinkKey': ''})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call C5()

}

void C5() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.20000000298023224, 'EndRecelerateRate': 0.20000000298023224, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [-7.019999980926514, -10.039999961853027, -4.179999828338623], 'AtVector': [-7.150000095367432, -9.970000267028809, -4.170000076293945], 'TargetFovy': 48.779998779296875, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [-7.019999980926514, -10.390000343322754, -4.179999828338623], 'AtVector': [-7.179999828338623, -10.369999885559082, -4.179999828338623], 'TargetFovy': 51.84000015258789, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 300, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWait({'IsWaitEnd': False})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 400})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text1': 'C05'})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 5.0, 'CameraResetPolicy': 0})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'BgmName': 'BGM_HyruleField', 'StartType': 2})
}
