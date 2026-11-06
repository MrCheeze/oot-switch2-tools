-------- EventFlow: Dm_Zora_0010 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Zora_KingZora_child
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Zora_0010/Dm_Zora_0010_Npc_Zora_ZU_KingZora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Zora_0010_KingZora.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventTalk', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Zora_0010/Dm_Zora_0010_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Zora_0010_Navi.root.as', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventDoNothing', 'EventTriggerPlayerLookAtObject', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_Zora_0010/Dm_Zora_0010_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Zora_0010_Player.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Item_RutoLetter
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [0.0, -10.0, 0.0]}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Bottle_Letter
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerModelBind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_007
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_001
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventTriggerAddPreComputedCullingBasePos']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_004
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventOverwriteSceneShadingParams', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'Rotation': [0.0, 90.0, 0.0], 'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [59.290000915527344, 117.44999694824219, 15.75]}

Actor: EventSystemActor[Controller]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text4': '', 'Text3': '', 'DispTime': 1, 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text4': '', 'Text3': '', 'DispTime': 1, 'Text1': 'C03', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text4': '', 'Text2': '', 'Text3': '', 'DispTime': 1, 'Text1': 'C04', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text4': '', 'Text2': '', 'Text3': '', 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C05'})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text4': '', 'Text2': '', 'Text3': '', 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C06'})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text4': '', 'Text2': '', 'Text3': '', 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C07'})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text4': '', 'Text2': '', 'Text3': '', 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C08'})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text4': '', 'Text2': '', 'Text3': '', 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C09'})
    }


    call C10()

}

void C01() {
    Player_Event.EventDoNothing({'IsWaitEnd': True})

    fork {
        Dm_Locator.EventTriggerParticipateEvent()
        Player_Event.EventTriggerModelBindWithDependency({'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        Item_Bottle_Letter.EventTriggerModelBind({'ActorName': 'Player_Event', 'InstanceName': '', 'BoneName': 'Weapon_Root', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.07999999821186066, 1.0299999713897705, 0.4300000071525574]})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 3, 'ForceFadeFrame': 0.0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsWaitEnd': True, 'offset': [0.5, 0.05000000074505806, 0.0], 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_KingZora_child', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'IsTurnX': True, 'Direction': 0.0, 'IsWaitEnd': True})
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.3700000047683716, 0.33000001311302185, -1.309999942779541], 'AtVector': [-0.28999999165534973, 1.2599999904632568, 0.8700000047683716], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_KingZora_child.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'ASName': 'C01-st'})
    } {
        Npc_Zora_007.EventTriggerParticipateEvent()
        Npc_Zora_007.EventWarpToTargetPosAndRot({'Position': [51.400001525878906, 116.0999984741211, 13.479999542236328], 'IsWaitEnd': True, 'YAngle': 75.0, 'ClothWarpMode': -1})
        Npc_Zora_007.EventPlayAS({'ASName': 'Act_Pray', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Zora_001.EventTriggerParticipateEvent()
        Npc_Zora_004.EventTriggerParticipateEvent()
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Zora_0010_C01', 'CurrDemoPaletteName': 'Dm_Zora_0010_C01'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'StartDistance': 4.099999904632568, 'EndDistance': 4.099999904632568, 'IsEnableNear': False, 'StartFNumber': 11.399999618530273, 'EndFNumber': 11.399999618530273, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [59.540000915527344, 118.5999984741211, 15.760000228881836]})
    Npc_Zora_KingZora_child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0000', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': True, 'ASName': 'C01_Talk', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Npc_Zora_KingZora_child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'C01-ed', 'IsWaitEnd': False, 'ForceFadeInFrame': 40.0})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C02-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': False, 'RootType': 2, 'TargetActorName': ''})
    } {
        Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [58.0, 116.0, 15.760000228881836]})
        Npc_Zora_KingZora_child.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C02', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        Dm_Item_RutoLetter.EventTriggerModelBind({'ActorName': 'Npc_Zora_KingZora_child', 'InstanceName': '', 'BoneName': 'Weapon_R', 'RotOffset': [-295.03900146484375, -2.359999895095825, 96.22000122070312], 'TransOffset': [-0.09841000288724899, -0.3345800042152405, -0.017710000276565552]})
    } {
        Player_Event.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': ''})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 90.0, 'UseDemoWait': False, 'Position': [59.28746032714844, 117.4000015258789, 15.7506103515625], 'ClothWarpMode': 3, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_KingZora_child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        Item_Bottle_Letter.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartDistance': 4.0, 'EndDistance': 4.0, 'StartFNumber': 18.5, 'EndFNumber': 18.5, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 0.0})
    }

    Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02', 'MaintainPerformanceState': 0})
    Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [58.0, 114.0, 15.670000076293945]})
    Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
    Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0002', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-1', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
}

void C03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.05999999865889549, 2.0199999809265137, 2.130000114440918], 'AtVector': [0.029999999329447746, 3.049999952316284, 5.25], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartDistance': 4.099999904632568, 'EndDistance': 4.099999904632568, 'StartFNumber': 27.0, 'EndFNumber': 27.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-1', 'MaintainPerformanceState': 0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
        Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [63.349998474121094, 122.0, 15.680000305175781]})
        Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C03', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.05999999865889549, 2.0199999809265137, 2.130000114440918], 'AtVector': [0.029999999329447746, 3.049999952316284, 5.25], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.05999999865889549, 2.0199999809265137, 2.130000114440918], 'AtVector': [0.029999999329447746, 3.049999952316284, 5.25], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 10, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.07999999821186066, 2.450000047683716, 2.0799999237060547], 'AtVector': [0.05999999865889549, 4.230000019073486, 4.849999904632568], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartDistance': 4.099999904632568, 'EndDistance': 4.099999904632568, 'StartFNumber': 27.0, 'EndFNumber': 27.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C04() {

    fork {
        Dm_Item_RutoLetter.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0006', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C04', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-6.309999942779541, 4.739999771118164, -0.25999999046325684], 'AtVector': [-0.7400000095367432, 3.4800000190734863, 4.949999809265137], 'TargetFovy': 43.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'C05', 'ClothWarpMode': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartFNumber': 17.0, 'EndFNumber': 17.0, 'StartDistance': 3.9000000953674316, 'EndDistance': 3.9000000953674316, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Npc_Zora_KingZora_child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'C04-02', 'ForceFadeInFrame': -1.0})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.7999999523162842, 0.33000001311302185, -1.9600000381469727], 'AtVector': [-0.6399999856948853, 1.159999966621399, 0.33000001311302185], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 500, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.8200000524520874, 0.46000000834465027, -1.7899999618530273], 'AtVector': [-0.6700000166893005, 1.2999999523162842, 0.5099999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [60.650001525878906, 120.5, 18.0]})
        Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0007', 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ASName': 'C05', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartDistance': 3.9000000953674316, 'EndDistance': 3.9000000953674316, 'StartFNumber': 12.0, 'EndFNumber': 12.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C06() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C06-st', 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Navi.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0008', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.3400000035762787, 1.3799999952316284, 1.8300000429153442], 'AtVector': [0.10999999940395355, 0.75, 0.029999999329447746], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [59.540000915527344, 118.5999984741211, 15.760000228881836]})
        Npc_Zora_KingZora_child.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'CurrDemoPaletteName': 'Dm_Zora_0010_C06', 'PrevDemoPaletteName': 'Dm_Zora_0010_C06'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'StartDistance': 4.099999904632568, 'EndDistance': 4.099999904632568, 'StartFNumber': 15.0, 'EndFNumber': 15.0, 'StartBluarLevel': 0.800000011920929, 'EndBluarLevel': 0.800000011920929, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [59.290000915527344, 117.44999694824219, 15.75], 'EndPos': [59.290000915527344, 117.44999694824219, 15.75]})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C06-end', 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Zora_KingZora_child'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C07', 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': False, 'ForceFadeFrame': 57.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 28})
    }

}

void C07() {
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Zora_0010_C01', 'CurrDemoPaletteName': 'Dm_Zora_0010_C01'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-5.019999980926514, 0.33000001311302185, -4.619999885559082], 'AtVector': [-3.4200000762939453, 0.8600000143051147, -2.369999885559082], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 240, 'Actor1ActorName': 'Player_Event', 'PosVector': [-4.78000020980835, 0.4399999976158142, -4.210000038146973], 'AtVector': [-3.180000066757202, 0.9700000286102295, -1.9600000381469727], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartFNumber': 17.0, 'EndFNumber': 17.0, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.690000057220459, 1.5299999713897705, -0.3100000023841858], 'AtVector': [-0.8399999737739563, 2.5199999809265137, 2.1700000762939453], 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0010', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartDistance': 4.0, 'EndDistance': 4.0, 'StartFNumber': 14.600000381469727, 'EndFNumber': 14.600000381469727, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked.Npc_Zora_KingZora_child', 'Index': -1}) {
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0029'})
    }
    Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0011', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
    Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0021', 'ASName': 'C08-ha!', 'MaintainPerformanceState': 0})

    fork {
        Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0022', 'ASName': 'C08-sokono', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 1, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.809999942779541, 0.23000000417232513, -2.609999895095825], 'AtVector': [-0.7699999809265137, 1.0299999713897705, -0.12999999523162842], 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 90, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    if !GameSystemActor.EventQueryTalkChoice2() {
        Event197:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 60.0, 'IsAllSlot': False, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'C07-Loop', 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0023', 'MaintainPerformanceState': 0})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0012', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } else {
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0024', 'ChoiceLabel2': 1, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        Npc_Navi.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0026', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ChoiceNumber': 1, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0027', 'MaintainPerformanceState': 0})
        goto Event197
    }
}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-2.359999895095825, 1.2200000286102295, -0.5199999809265137], 'AtVector': [-1.25, 2.690000057220459, 2.490000009536743], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 1, 'IsWaitEnd': False, 'Target': 3, 'ActorName': 'Npc_Zora_KingZora_child', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsTurnX': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_KingZora_child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 3.0, 0.0]})
    } {
        Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0013', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartDistance': 4.0, 'EndDistance': 4.0, 'StartFNumber': 25.0, 'EndFNumber': 25.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C10() {

    fork {
        Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [57.810001373291016, 118.0, 0.0]})
        Npc_Zora_KingZora_child.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C10', 'Partial': '', 'IsAnimeDriven': True, 'ForceFadeInFrame': 20.0, 'IsAllSlot': True})
        Npc_Zora_KingZora_child.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'WorldPos': [59.45000076293945, 121.80000305175781, 12.720000267028809]})
        Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': False})
        Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0019', 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'EndDialogOption': 0})
    } {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-4.610000133514404, 0.6200000047683716, -4.53000020980835], 'AtVector': [-3.2200000286102295, 1.100000023841858, -2.1500000953674316], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C10', 'Text4': '', 'Text3': '', 'Text2': ''})
        } {
            Npc_Zora_KingZora_child.EventTriggerEmitXLink({'ELinkKey': 'Dm_Zora_0010_KingZora_Splash_01', 'SLinkKey': ''})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 17.0, 'EndFNumber': 17.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 600})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [10.029999732971191, 7.619999885559082, -5.880000114440918], 'AtVector': [4.190000057220459, 4.190000057220459, 0.7400000095367432], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text3': '', 'Text2': '', 'Text1': 'C11'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 3.5, 'EndDistance': 3.5, 'StartFNumber': 7.699999809265137, 'EndFNumber': 7.699999809265137, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.2000000476837158, 0.49000000953674316, 0.3199999928474426], 'AtVector': [-0.4099999964237213, 1.5299999713897705, 2.4100000858306885], 'TargetFovy': 63.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Zora_KingZora_child_EnableClothCollidable', 'Value': True, 'Index': -1})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text3': '', 'Text2': '', 'Text1': 'C12'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 4.0, 'EndDistance': 4.0, 'StartFNumber': 6.599999904632568, 'EndFNumber': 6.599999904632568, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [-10.34000015258789, 3.0199999809265137, -12.479999542236328], 'AtVector': [-1.2699999809265137, 2.200000047683716, 2.75], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 4.5, 'EndDistance': 4.5, 'StartFNumber': 18.299999237060547, 'EndFNumber': 18.299999237060547, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text3': '', 'Text2': '', 'Text1': 'C14'})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.019999999552965164, 0.7400000095367432, -4.159999847412109], 'AtVector': [0.029999999329447746, 0.9700000286102295, -2.640000104904175], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text3': '', 'Text2': '', 'Text1': 'C15'})
        } {
            Npc_Zora_KingZora_child.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Zora_0010_KingZora_Splash_01', 'IsKill': True, 'SLinkKey': ''})
        } {
            EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    } {
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 40})

        call Controller()


        call Controller()


        call Controller()


        call Controller()


        call Controller()

    } {
        Npc_Zora_007.EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    }

    Npc_Zora_KingZora_child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
    Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [58.0, 118.5999984741211, 14.0]})
    Npc_Zora_KingZora_child.EventTalk({'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Zora_0010:Dm_Zore_0010_0020', 'ASName': '', 'MaintainPerformanceState': 0, 'IsCloseDialog': False, 'EndDialogOption': 0})
    Npc_Zora_KingZora_child.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 3.0})
}

void Controller() {
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doon'})
    EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 75})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doon'})
    EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 75})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doon'})
    EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 75})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doon'})
    EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 75})
}
