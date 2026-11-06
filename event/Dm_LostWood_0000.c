-------- EventFlow: Dm_LostWood_0000 --------

Actor: Npc_Kaepora
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerModelBind', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerVoiceChangeSpVoiceMode']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_LostWood_0000/Dm_LostWood_0000_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LostWood_0000_Npc_U_Kaepora.root.as', 'Position': [0.0, 0.0, 0.0]}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerMove', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_LostWood_0000_GoronCity_Player_Child.root.as', 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_LostWood_0000_GoronCity/Dm_LostWood_0000_GoronCity_Player_Child/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_LostWood_0000/Dm_LostWood_0000/workspace.pp__ModelProject.gyml'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventNaviFollowPlayer', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

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

Actor: Dm_Locator[kepora]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_LostWood_0000/Dm_LostWood_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LostWood_0000_Dm_Locator.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventSoundReleaseDucking', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EnterFromKokiriForest() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C01', 'BgAlignH': 0, 'BgAlignW': 0})
    } {

        call C01_kokiri()

    }


    call C02_kokiri()


    call C03_kokiri()


    call C04_kokiri()


    call C05_kokiri()

}

void C01() {
    Npc_Kaepora.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 170.0, 'Position': [22.5, 106.94000244140625, -20.799999237060547], 'ClothWarpMode': -1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [21.520000457763672, 101.93000030517578, -23.489999771118164], 'AtVector': [23.959999084472656, 100.83000183105469, -26.6200008392334], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01', 'UseAnmDriven': True, 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [24.3799991607666, 101.05000305175781, -29.200000762939453]})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsNearOffset': True, 'IsHomePosition': False, 'offset': [0.5, 0.0, 0.0], 'OffsetType': -1, 'Speed': -1.0})
    } {
        Dm_Locator[kepora].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [22.5, 106.94000244140625, -20.799999237060547], 'ClothWarpMode': -1})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        Npc_Kaepora.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C01', 'IsAllSlot': True})
        Npc_Kaepora.EventTriggerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        Npc_Kaepora.EventTriggerVoiceChangeSpVoiceMode({'CommandLife': 0, 'NoPosVoiceMode': 5})
    }


    fork {
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'C01', 'IsPlayASAllSlot': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01-2', 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'ActorName': 'Npc_Kaepora', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3})
    }

    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 1, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'SceneName': 'C01-1'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C02() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_LostWood_0000_GoronCity'})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [23.040000915527344, 106.1500015258789, -24.030000686645508], 'AtVector': [22.68000030517578, 107.3499984741211, -21.860000610351562], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Kaepora.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C02-1', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
    Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0001', 'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'EndDialogOption': 4, 'ASName': 'C02-wait', 'MaintainPerformanceState': 0})
}

void C03() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.5, 1.0, 0.0], 'ClothWarpMode': -1})
    Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'Target': 3, 'ActorName': 'Npc_Kaepora', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True})

    fork {
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0002', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'ASName': 'C02-wait', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'PosVector': [19.860000610351562, 110.33000183105469, -20.260000228881836], 'AtVector': [21.0, 108.0, -21.84000015258789], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [19.43000030517578, 110.4800033569336, -20.540000915527344], 'AtVector': [20.889999389648438, 108.0, -22.020000457763672], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 280, 'IsEnableRevertFast': False})
    }

}

void C04() {

    fork {
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-wait', 'MaintainPerformanceState': 0})
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-wait', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 0.2199999988079071, -1.8799999952316284], 'AtVector': [0.0, 0.6000000238418579, -1.1200000047683716], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 400, 'IsWaitEnd': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.7400000095367432, 0.28999999165534973, -1.6299999952316284], 'AtVector': [0.4699999988079071, 0.5899999737739563, -1.059999942779541], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Kaepora.EventTriggerModelBind({'BoneName': 'Dm_Locator', 'ActorName': 'Dm_Locator', 'TransOffset': [0.0, 0.0, 0.0], 'InstanceName': 'kepora', 'RotOffset': [0.0, 170.0, 0.0]})
    Npc_Kaepora.EventTriggerVoiceChangeSpVoiceMode({'NoPosVoiceMode': 4, 'CommandLife': 0})
}

void C05() {

    fork {
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0007', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-wait', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [24.549999237060547, 105.4800033569336, -24.469999313354492], 'AtVector': [23.030000686645508, 107.20999908447266, -22.040000915527344], 'TargetFovy': 50.900001525878906, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }


    fork {
        Npc_Kaepora.EventTriggerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 5.0, 0.0]})
        Npc_Kaepora.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0008', 'IsWaitEnd': True, 'EndDialogOption': 3, 'ASName': 'C02-wait', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C05', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    }


    fork {
        Npc_Kaepora.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C05', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
    } {
        Dm_Locator[kepora].EventPlayAS({'ASName': 'C05', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-0', 'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 113})
        Npc_Kaepora.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LostWood_0000_Jump_01'})
    } {
        SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_LostWood_0000_GoronCity'})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
}

void C01_kokiri() {

    fork {
        Npc_Kaepora.EventWarpToTargetPosAndRot({'YAngle': -10.0, 'IsWaitEnd': True, 'Position': [1.159999966621399, 105.88999938964844, -3.25], 'ClothWarpMode': -1})
        Npc_Kaepora.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'C02-Loop', 'IsAllSlot': True})
        Npc_Kaepora.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 2.0, 0.0]})
    } {
        Dm_Locator[kepora].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1.159999966621399, 105.88999938964844, -3.25], 'ClothWarpMode': -1})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'YAngle': 180.0, 'IsWaitEnd': True, 'Position': [0.15000000596046448, 100.04000091552734, 8.149999618530273], 'ASCommand': 'EvtWait', 'ClothWarpMode': 2, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [0.12999999523162842, 101.0, -4.75]})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -180.0, 'Position': [-0.30000001192092896, 101.13999938964844, 7.960000038146973], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'WorldPos': [0.12999999523162842, 101.0, -4.75], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.23999999463558197, 101.12999725341797, 10.180000305175781], 'AtVector': [0.20000000298023224, 101.08000183105469, 8.149999618530273], 'TargetFovy': 55.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kaepora.EventTriggerVoiceChangeSpVoiceMode({'CommandLife': 0, 'NoPosVoiceMode': 5})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'C02-Loop', 'IsPlayASAllSlot': True})
    } {
        Player_Event.EventPlayerMove({'WorldPos': [0.11999999731779099, 100.04000091552734, 5.630000114440918], 'MoveSpeed': 0.5, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'IsWaitEnd': True, 'IsContinueMoveAnimeAfterFinish': False, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtNotice', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Kaepora'})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'offset': [0.0, 0.0, 0.0], 'Speed': 0.0, 'IsWaitEnd': True, 'OffsetType': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'PosVector': [0.1599999964237213, 101.0, 7.909999847412109], 'AtVector': [0.11999999731779099, 100.95999908447266, 5.889999866485596], 'TargetFovy': 55.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }


    fork {
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Npc_Kaepora', 'InstanceName': '', 'IsWaitEnd': True})
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 55, 'PosVector': [0.1599999964237213, 101.0999984741211, 7.909999847412109], 'AtVector': [0.2199999988079071, 101.83999633789062, 6.03000020980835], 'TargetFovy': 55.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C02_kokiri() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Kaepora.EventPlayAS({'ASName': 'C02', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0, 'ASName': 'C01-wait'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.5699999928474426, 104.87999725341797, -0.10999999940395355], 'AtVector': [0.8899999856948853, 105.97000122070312, -1.7599999904632568], 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C02'})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_LostWood_0000'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void C03_kokiri() {

    fork {
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0002', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsWaitEnd': True, 'ASName': 'C01-wait', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        Player_Event.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'WorldPos': [0.07999999821186066, 100.04000091552734, 4.25], 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'ApplySlowMove': True, 'DecSpeedDistance': 0.5, 'IsWaitEnd': False, 'MoveSpeed': 0.0})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Kaepora'})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsHomePosition': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'OffsetType': -1, 'Speed': -1.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3.569999933242798, 109.08000183105469, -2.940000057220459], 'AtVector': [3.2200000286102295, 108.41999816894531, -2.5399999618530273], 'TargetFovy': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [3.7799999713897705, 109.0999984741211, -2.7200000286102295], 'AtVector': [3.390000104904175, 108.41999816894531, -2.390000104904175], 'TargetFovy': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 260, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C03'})
    }

}

void C04_kokiri() {

    fork {
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01-wait', 'MaintainPerformanceState': 0})
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01-wait', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.20999999344348907, 0.3499999940395355, -1.840000033378601], 'AtVector': [-0.11999999731779099, 0.6499999761581421, -1.0099999904632568], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'IsLinearMove': False, 'MoveTime': 400, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.5699999928474426, 0.38999998569488525, -1.75], 'AtVector': [0.28999999165534973, 0.7099999785423279, -0.8999999761581421], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C04'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Kaepora.EventTriggerModelBind({'BoneName': 'Dm_Locator', 'ActorName': 'Dm_Locator', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, -10.0, 0.0], 'InstanceName': 'kepora'})
    Npc_Kaepora.EventTriggerVoiceChangeSpVoiceMode({'NoPosVoiceMode': 4, 'CommandLife': 0})
}

void C05_kokiri() {

    fork {
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0007', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01-wait', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'TargetFovy': 50.93000030517578, 'PosVector': [-0.7360000014305115, 104.55799865722656, 0.35600000619888306], 'AtVector': [-0.656000018119812, 104.64800262451172, 0.22599999606609344], 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C05'})
    }

    Npc_Kaepora.EventTalk({'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LostWood_0000:Dm_LostWood_0000_0008', 'IsWaitEnd': True, 'EndDialogOption': 3, 'IsPlayASAllSlot': False, 'ASName': 'C01-wait', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})

    fork {
        Npc_Kaepora.EventPlayAS({'ASName': 'C05-kokiri', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Locator[kepora].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C05-L-kokiri', 'ForceFadeInFrame': -1.0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-0', 'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 123})
        Npc_Kaepora.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LostWood_0000_Jump_01'})
    } {
        SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_LostWood_0000'})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
}

void EnterFromGoronCity() {
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C01', 'BgAlignH': 0, 'BgAlignW': 0})
    } {

        call C01()

    }


    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C02'})
    } {

        call C02()

    }


    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C03'})
    } {

        call C03()

    }


    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C04'})
    } {

        call C04()

    }


    call C05()

}
