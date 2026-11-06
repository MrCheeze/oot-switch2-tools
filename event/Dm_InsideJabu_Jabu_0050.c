-------- EventFlow: Dm_InsideJabu_Jabu_0050 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerSeparatedFromAnchor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerBackMoveForAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'IsGrounding': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0050/Dm_InsideJabu_Jabu_0050_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0050_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0050/Dm_InsideJabu_Jabu_0050/workspace.pp__ModelProject.gyml'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNaviFollowPlayer', 'EventNaviMoveAroundToPlayer', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventTriggerChangeEmotion']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'Position': [0.0, 0.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0050/Dm_InsideJabu_Jabu_0050_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0050_Npc_Navi.root.as', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_Ruto_Child_002
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitNpcOrPlayerVoice', 'EventPlayASWithClothWarp', 'EventTriggerVoiceChangeSpVoiceMode']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0050/Dm_InsideJabu_Jabu_0050_Npc_Zora_ZU_Ruto_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0050_Npc_Zora_ZU_Ruto_Child.root.as', 'IsGrounding': True, 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsWorld': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange']
queries: ['EventQueryTalkChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Look]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor[NV]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTrigger_SetTime', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Vo]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[light02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {
    Npc_Zora_Ruto_Child_002.EventTriggerVoiceChangeSpVoiceMode({'CommandLife': 0, 'NoPosVoiceMode': 3})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideJabuJabuBelly_WarpPortal', 'Index': -1}) {

        call EntryPoint9()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_WarpPortal', 'Index': -1, 'Value': True})

        call EntryPoint7()

    }
}

void EntryPoint1() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'BgAlpha': 100, 'Text2': '', 'IsWaitEnd': False})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'ActorName': 'Npc_Zora_Ruto_Child_002'})
    } {
        Npc_Zora_Ruto_Child_002.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 2})
        Npc_Zora_Ruto_Child_002.EventTalk({'ASName': 'Wait', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0001', 'MaintainPerformanceState': 0})
        Npc_Zora_Ruto_Child_002.EventTalk({'ASName': 'Wait', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0002', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_Zora_Ruto_Child_002', 'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Npc_Navi.EventTalk({'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0013', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Npc_Zora_Ruto_Child_002.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.20000000298023224, 0.0, 0.0]})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Npc_Zora_Ruto_Child_002.EventTriggerRequestLookAtTheFront()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
}

void ready() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_Zora_Ruto_Child_002', 'CheckDistance': 1.399999976158142}) {

        fork {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'center', 'OffsetDist': 0.6000000238418579})
        } {
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'OffsetType': -1, 'IsNearOffset': True, 'offset': [0.30000001192092896, 0.10000000149011612, 0.0], 'Speed': 1.0, 'IsWaitEnd': False})
        }

    } else {
        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'OffsetType': -1, 'IsNearOffset': True, 'offset': [0.30000001192092896, 0.10000000149011612, 0.0], 'IsWaitEnd': False, 'Speed': 1.399999976158142})
    }

    fork {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Child_002', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Ruto_Child_002.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': True})
        Npc_Zora_Ruto_Child_002.EventTriggerRequestLookAtTheFront()
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor2ActorName': '', 'MoveTime': 100, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.5199999809265137, 1.0399999618530273, -1.7999999523162842], 'AtVector': [-0.6600000262260437, 0.5699999928474426, 1.4600000381469727], 'TargetFovy': 24.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    Npc_Zora_Ruto_Child_002.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 2})
}

void EntryPoint4() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'BgAlpha': 100, 'IsWaitEnd': False, 'Text1': 'C06'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C06-0', 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Player_Event', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'IsAllSlot': False, 'UseAnmDriven': True, 'IsWaitEnd': False, 'ForceFadeFrame': 40.0, 'ASCommand': 'C06', 'ClothWarpMode': 2})
    } {
        Npc_Zora_Ruto_Child_002.EventPlayASWithClothWarp({'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASName': 'C06', 'ClothWarpMode': -1, 'ForceFadeInFrame': 0.0})
    } {
        EventSystemActor[NV].EventWait({'IsWaitEnd': True, 'Frames': 160})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'offset': [0.0, 0.20000000298023224, 0.4000000059604645], 'Speed': 0.75})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 240})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 2.299999952316284, 'EndDistance': 2.299999952316284, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 135, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 2.299999952316284, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 140, 'EndDistance': 3.0, 'EndBluarLevel': 1.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[0].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.75], 'ClothWarpMode': -1})
        Dm_Locator[0].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideJabu_Jabu_0050_Warp_01'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C06', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C06'})
        EventSystemActor[light02].EventWait({'IsWaitEnd': True, 'Frames': 100})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C06', 'Frames': 200, 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C06_2'})
    } {
        EventSystemActor[Vo].EventWait({'IsWaitEnd': True, 'Frames': 130})
        Npc_Zora_Ruto_Child_002.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_InsideJabu_Jabu_0050_0014_Sp_00'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'WARP', 'IsIgnoreDucking': False})
    }

}

void EntryPoint2() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'BgAlpha': 100, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.7200000286102295, 0.38999998569488525, -0.9700000286102295], 'AtVector': [-0.33000001311302185, 0.7400000095367432, 1.3700000047683716], 'TargetFovy': 24.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Child_002.EventWarpToTargetPosAndRot({'Position': [42.36328887939453, 101.76260375976562, -112.10399627685547], 'YAngle': 86.81173706054688, 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Npc_Zora_Ruto_Child_002.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C02-01', 'IsWaitEnd': True, 'ForceFadeInFrame': 20.0, 'ClothWarpMode': -1})
        Npc_Zora_Ruto_Child_002.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0003', 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'ASName': 'C02-02'})
        Npc_Zora_Ruto_Child_002.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 2})
        Npc_Zora_Ruto_Child_002.EventTalk({'ASName': 'Wait', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0015'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 2.5999999046325684, 'EndDistance': 2.5999999046325684, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C02', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C02'})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [43.83052062988281, 101.76270294189453, -112.08480072021484], 'YAngle': -89.2229232788086, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 2, 'EnableInAir': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [43.56394958496094, 103.5, -111.86959838867188]})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Zora_Ruto_Child_002', 'offset': [0.20000000298023224, 0.10000000149011612, 0.25], 'IsWaitEnd': True, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_Zora_Ruto_Child_002', 'IsWaitEnd': False})
    }

}

void EntryPoint3() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'BgAlpha': 100, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Zora_Ruto_Child_002', 'PosVector': [-1.1399999856948853, 1.190000057220459, 1.0800000429153442], 'AtVector': [-0.1899999976158142, 0.9100000262260437, 0.25], 'TargetFovy': 24.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'offset': [0.550000011920929, 0.0, -0.20000000298023224], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Npc_Zora_Ruto_Child_002.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsWaitEnd': True, 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C03-01'})
        Npc_Zora_Ruto_Child_002.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Zora_Ruto_Child_002.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0005', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'ASName': 'C03-02'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.2999999523162842, 'EndDistance': 1.2999999523162842, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C03', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C03'})
    }

}

void EntryPoint5() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'BgAlpha': 100, 'IsWaitEnd': False, 'Text1': 'C04'})

    fork {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'offset': [0.25, 0.0, 0.5], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel1': 9998, 'ChoiceLabel2': 9999, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0007', 'ChoiceNumber': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'ASName': 'Fly'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.0199999809265137, 0.9100000262260437, 2.799999952316284], 'AtVector': [0.9599999785423279, 0.7200000286102295, -0.7699999809265137], 'TargetFovy': 24.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 2.700000047683716, 'EndDistance': 2.700000047683716, 'EndBluarLevel': 1.5, 'StartBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C04', 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0050_C04'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'C04', 'ForceFadeFrame': 20.0, 'IsAllSlot': True})
    }

}

void EntryPoint6() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'BgAlpha': 100, 'IsWaitEnd': False, 'Text1': 'C05'})

    fork {
        Dm_Locator[Look].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': '', 'ActorName': 'Player_Event', 'ClothWarpMode': -1, 'PositionOffset': [0.699999988079071, 1.0, 0.5]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player_Event.EventTriggerPlayerLookAtObject({'Direction': 0.0, 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Look', 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player_Event', 'IsTurnX': True})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0008', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.4099999964237213, 0.9800000190734863, 0.9200000166893005], 'AtVector': [1.059999942779541, 0.7200000286102295, -0.8299999833106995], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Child_002.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndBluarLevel': 1.5, 'StartBluarLevel': 1.5, 'StartDistance': 0.75, 'EndDistance': 0.75, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 64.0, 'EndFNumber': 64.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0, 'ForceFadeFrame': 20.0})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        Npc_Zora_Ruto_Child_002.EventPlayAS({'ASName': 'C05', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

        call EntryPoint4()

        EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'ZoraFountain_Child', 'NextStartPos': 'ClearJabuJabu', 'BootEventName': 'Get_StoneOfWater_Complete', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:DungeonWarp_03', 'MaintainPerformanceState': 0, 'ASName': 'Fly'})

        fork {
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

            fork {
                Player_Event.EventPlayerSeparatedFromAnchor({'IsWaitEnd': True, 'SeparatedDIstance': 3.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'center', 'DecSpeedDistance': 3.0, 'MoveSpeed': 0.5, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            } {
                Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsHomePosition': True, 'OffsetType': -1})
            }

        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [41.766998291015625, 103.55799865722656, -112.125], 'AtVector': [45.21799850463867, 102.97100067138672, -112.0530014038086], 'MoveTime': 120, 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 80})

            }

        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }
}

void EntryPoint7() {

    call ready()


    call EntryPoint1()


    call EntryPoint2()


    call EntryPoint3()


    call EntryPoint5()


    call EntryPoint6()

}

void EntryPoint8() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_Zora_Ruto_Child_002', 'CheckDistance': 1.399999976158142}) {

        fork {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'center', 'OffsetDist': 0.6000000238418579})
        } {
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'OffsetType': -1, 'IsNearOffset': True, 'offset': [0.30000001192092896, 0.10000000149011612, 0.0], 'IsWaitEnd': False, 'Speed': 1.0})
        }

    } else {
        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'OffsetType': -1, 'IsNearOffset': True, 'offset': [0.30000001192092896, 0.10000000149011612, 0.0], 'IsWaitEnd': False, 'Speed': 1.399999976158142})
    }

    fork {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Child_002', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'IsDoNavi': False})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        Npc_Zora_Ruto_Child_002.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor2ActorName': '', 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 100, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.2100000381469727, 0.9900000095367432, -1.850000023841858], 'AtVector': [0.5899999737739563, 0.6200000047683716, 1.6299999952316284], 'TargetFovy': 24.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    Npc_Zora_Ruto_Child_002.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': False})
    Npc_Zora_Ruto_Child_002.EventTalk({'ASName': 'Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0016'})
    Npc_Zora_Ruto_Child_002.EventTalk({'ASName': 'Wait', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0006', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})

    fork {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [43.38288116455078, 102.71900177001953, -111.79669952392578]})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Player_Event'})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0050:Dm_InsideJabu_Jabu_0050_0009', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.4099999964237213, 0.9800000190734863, 0.9200000166893005], 'AtVector': [1.059999942779541, 0.7200000286102295, -0.8299999833106995], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'BgAlpha': 100, 'IsWaitEnd': False, 'Text1': 'C01'})
    } {
        Npc_Zora_Ruto_Child_002.EventWarpToTargetPosAndRot({'Position': [42.36328887939453, 101.76260375976562, -112.10399627685547], 'YAngle': 86.81173706054688, 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Npc_Zora_Ruto_Child_002.EventPlayASWithClothWarp({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1, 'ASName': 'C05'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndBluarLevel': 1.5, 'StartBluarLevel': 1.5, 'StartDistance': 0.75, 'EndDistance': 0.75, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 64.0, 'EndFNumber': 64.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [43.83052062988281, 101.76270294189453, -112.08480072021484], 'YAngle': -89.2229232788086, 'IsWaitEnd': True, 'UseDemoWait': True, 'ClothWarpMode': 2, 'ASCommand': 'DemoWaitHalf', 'EnableInAir': False})
        Dm_Locator[Look].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': '', 'ActorName': 'Player_Event', 'ClothWarpMode': -1, 'PositionOffset': [0.699999988079071, 1.0, 0.5]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'Direction': 0.0, 'InstanceName': 'Look', 'PosOffset': [0.0, 0.0, 0.0]})
    }

    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

        call EntryPoint4()

        EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'ZoraFountain_Child', 'NextStartPos': 'ClearJabuJabu', 'BootEventName': 'Get_StoneOfWater_Complete', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:DungeonWarp_03', 'MaintainPerformanceState': 0, 'ASName': 'Fly'})

        fork {
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

            fork {
                Player_Event.EventPlayerSeparatedFromAnchor({'IsWaitEnd': True, 'SeparatedDIstance': 3.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'center', 'DecSpeedDistance': 3.0, 'MoveSpeed': 0.5, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            } {
                Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsHomePosition': True, 'OffsetType': -1})
            }

        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [41.766998291015625, 103.55799865722656, -112.125], 'AtVector': [45.21799850463867, 102.97100067138672, -112.0530014038086], 'MoveTime': 120, 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 80})

            }

        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }
}

void EntryPoint9() {

    call EntryPoint8()

}
