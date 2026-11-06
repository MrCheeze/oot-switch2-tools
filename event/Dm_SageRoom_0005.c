-------- EventFlow: Dm_SageRoom_0005 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventWait', 'EventTriggerZeldaNotesRequestSendDailyScreenShot', 'EventTriggerZeldaNotesSimpleAddNPCTalkCount']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerSetCharaReflectionCaustics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_SageRoom_0005/Dm_SageRoom_0005_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SageRoom_0005_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNaviMoveAroundToPlayer', 'EventTalk', 'EventNaviMoveAtPos', 'EventWarpToTargetActor', 'EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SageRoom_0005/Dm_SageRoom_0005_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SageRoom_0005_Npc_Navi.root.as', 'IsWorld': False, 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[Item_Medal_Light]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_SageRoom_0005/Dm_SageRoom_0005_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SageRoom_0005_Dm_Locator.root.as'}

Actor: Dm_Npc_Hylia_Rauru
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerSetCharaReflectionCaustics', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_SageRoom_0005/Dm_SageRoom_0005_Npc_Hylia_MU_Rauru/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SageRoom_0005_Npc_Hylia_MU_Rauru.root.as'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Medal_Light
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SageRoom_0005/Dm_SageRoom_0005_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SageRoom_0005_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundStopBGM', 'EventSoundStartSound', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Eff_001]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetActor', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[Eff_000]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerParticipateEvent', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsWorld': False, 'IsGrounding': True, 'UseEventModelAnime': '', 'UseEventAS': ''}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Sword_Master
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 0}

Actor: Land_SageRoom_Base_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text3': '', 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04', 'IsWaitEnd': False})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C05', 'IsWaitEnd': False, 'Text3': '', 'Text2': ''})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C06', 'IsWaitEnd': False, 'Text3': '', 'Text2': ''})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C07', 'IsWaitEnd': False})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C08', 'IsWaitEnd': False, 'Text3': '', 'Text2': ''})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C09', 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
    }


    fork {

        call C11()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C11', 'IsWaitEnd': False})
    }


    fork {

        call C12()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C12', 'IsWaitEnd': False, 'Text5': '', 'Text4': '', 'Text3': '', 'Text2': ''})
    }


    fork {

        call C13()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C13', 'IsWaitEnd': False})
    }


    fork {

        call C14()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C14', 'IsWaitEnd': False, 'BgColor': 5, 'Text3': '', 'Text4': '', 'Text2': ''})
    }


    call C15()


    fork {

        call C15-05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'Text3': '', 'Text1': 'C15-05', 'Text2': ''})
    }


    fork {

        call C17()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C17', 'IsWaitEnd': False})
    }


    call Shine_Get_C18()

}

void Ready() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Length': 1, 'Color': 0, 'IsNoPlayAnime': True})

    fork {
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'UseDemoWait': False, 'Position': [0.0, 100.12000274658203, 0.0], 'ASCommand': 'EvtWait', 'ClothWarpMode': 2, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'C01_Lp', 'IsAllSlot': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 2})
        Player_Event.EventTriggerSetCharaReflectionCaustics({'DampEndHeightRatio': 0.699999988079071, 'DampStartHeightRaito': 0.0, 'Intensity': 0.20000000298023224})
    } {
        Dm_Npc_Hylia_Rauru.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [0.0, 100.1500015258789, -4.875999927520752]})
        Dm_Npc_Hylia_Rauru.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Rauru-loopA', 'IsWaitEnd': False, 'ClothWarpMode': 2, 'ForceFadeInFrame': 0.0})
        Dm_Npc_Hylia_Rauru.EventTriggerSetCharaReflectionCaustics({'DampEndHeightRatio': 0.699999988079071, 'DampStartHeightRaito': 0.0, 'Intensity': 0.20000000298023224})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.5, 0.0, 0.30000001192092896], 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Dm_Locator[01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [0.0, 100.12000274658203, 0.0], 'ClothWarpMode': -1})
    } {
        Dm_Locator[Item_Medal_Light].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -30.0, 'Position': [0.0, 90.0, 0.0], 'ClothWarpMode': -1})
        Item_Medal_Light.EventTriggerSetModelLodManual({'LodLevel': 0})
        Item_Medal_Light.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Dm_Locator', 'InstanceName': 'Item_Medal_Light'})
    }

}

void C01() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '01', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [-4.429999828338623, 1.340000033378601, 2.7899999618530273], 'TargetFovy': 28.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'PosVector': [-11.5, 1.7799999713897705, 3.5899999141693115], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '01', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-11.40999984741211, 1.7999999523162842, 4.369999885559082], 'AtVector': [-4.340000152587891, 1.350000023841858, 3.5799999237060547], 'TargetFovy': 28.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'IsWaitEnd': False, 'MoveTime': 600, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_SageRoom_0005_C01', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C01', 'IsWaitEnd': False, 'Frames': 0})
    }

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_SageRoom_0000', 'CommandLife': 2, 'IsReleaseDucking': False})
    Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0001', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C02() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '01', 'PosVector': [-1.25, 0.8899999856948853, 3.190000057220459], 'AtVector': [0.800000011920929, 1.4700000286102295, -1.1100000143051147], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 3.5, 'EndDistance': 3.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C02', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C02'})
    }

    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'offset': [0.5, 0.0, 0.5], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}

void C04() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnoreAtVectorReferenceActorRot': True, 'EnableCameraAlpha': True, 'TargetFovy': 18.920000076293945, 'PosVector': [-0.7549999952316284, 100.32499694824219, 0.6119999885559082], 'AtVector': [-0.4000000059604645, 101.68299865722656, -4.71999979019165], 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0005', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C04-0', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'StartFNumber': 49.5, 'EndFNumber': 49.5, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C04', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C04'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C04', 'RootType': 0})
    } {
        Dm_Npc_Hylia_Rauru.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0006', 'IsWaitEnd': True, 'ASName': 'C04-0', 'MaintainPerformanceState': 0})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': False})
        Dm_Npc_Hylia_Rauru.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C04-1', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsWaitEnd': True, 'StartDistance': 8.899999618530273, 'StartFNumber': 49.5, 'IsPrimaryApply': False, 'EndFNumber': 76.0, 'EndDistance': 1.5, 'EndBluarLevel': 1.2000000476837158, 'RequiredFrame': 100, 'IsEnableNear': False, 'StartBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'StartFNumber': 76.0, 'StartDistance': 1.5, 'StartBluarLevel': 1.2000000476837158, 'EndDistance': 2.2100000381469727, 'EndFNumber': 34.79999923706055, 'IsAutoFocalDist': False, 'EndBluarLevel': 2.2200000286102295, 'RequiredFrame': 100, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C05() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C05-0', 'IsWaitEnd': False, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0, 'ASCommand': 'C04_Lp'})
    } {
        Dm_Npc_Hylia_Rauru.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0007', 'ASName': 'Rauru-loopA', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'StartFNumber': 49.5, 'EndFNumber': 49.5, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C05', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C05'})
    }

    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C05-1', 'ClothWarpMode': 0})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C05-1', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C05', 'RootType': 0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True})
    } {
        Weapon_Sword_Master.EventTriggerEmitXLink({'ELinkKey': 'Dm_SageRoom_0005_Shine_01_C05', 'SLinkKey': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.599998474121094, 'EndFNumber': 49.599998474121094, 'IsWaitEnd': True, 'RequiredFrame': 150, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.599998474121094, 'EndFNumber': 49.70000076293945, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
}

void C08() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.949999988079071, 101.66000366210938, -6.090000152587891], 'AtVector': [-0.7900000214576721, 101.36000061035156, 0.5400000214576721], 'TargetFovy': 30.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.5, 'EndFNumber': 49.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C08', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C08'})
    }

    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C08', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 120, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.8299999833106995, 101.80999755859375, -6.119999885559082], 'AtVector': [-1.5299999713897705, 102.04000091552734, 0.3100000023841858], 'TargetFovy': 30.0, 'IsEnableRevertFast': False})
    } {

        fork {
            Dm_Npc_Hylia_Rauru.EventTriggerLookAtObject({'ActorName': 'Npc_Navi', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3})
        } {
            Npc_Navi.EventNaviMoveAtPos({'LookAtOffsetBase': 1, 'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'MinimumSpeed': 0.0, 'ASCommand': '', 'LookAtDirection': 0.0, 'MoveSpeed': 9.0, 'IsLookAtObject': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtWorldPos': [0.0, 101.9000015258789, -4.880000114440918], 'IsTurnLooking': False, 'DecSpeedDistance': 4.0, 'IncSpeedDistance': 1.0, 'OverwriteRotNearDist': -1.0, 'WorldPos': [0.5600000023841858, 102.05999755859375, -4.519999980926514]})
        }


        fork {
            Dm_Npc_Hylia_Rauru.EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'ActorName': '', 'WorldPos': [0.5400000214576721, 102.05999755859375, -4.429999828338623]})
        } {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0014', 'MaintainPerformanceState': 0})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 48.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Dm_SagerRoom_0000_Navi'})
    }

    Dm_Npc_Hylia_Rauru.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0015', 'IsWaitEnd': True, 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 120, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.8299999833106995, 101.80999755859375, -6.119999885559082], 'AtVector': [-1.5299999713897705, 102.04000091552734, 0.3100000023841858], 'TargetFovy': 30.0, 'IsEnableRevertFast': False})
    } {
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0016', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.5, 'EndFNumber': 49.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C09() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'TargetFovy': 25.0, 'EnableCameraAlpha': True, 'PosVector': [1.2000000476837158, 101.19000244140625, -3.6500000953674316], 'AtVector': [0.10000000149011612, 101.66999816894531, -4.71999979019165], 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 600, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': False, 'TargetFovy': 25.0, 'EnableCameraAlpha': True, 'AtVector': [0.029999999329447746, 101.66999816894531, -4.670000076293945], 'PosVector': [1.1299999952316284, 101.19000244140625, -3.5999999046325684], 'IsEnableRevertFast': False})
    } {
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ClothWarpMode': 0, 'ASCommand': 'C09-C14'})
    } {
        Dm_Npc_Hylia_Rauru.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0017', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0018', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-0.5099999904632568, 101.63999938964844, -0.20999999344348907], 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C09', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C09'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void C14() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '01', 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.019999999552965164, 1.7300000190734863, 2.450000047683716], 'AtVector': [-0.009999999776482582, 1.6399999856948853, 5.380000114440918], 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '01', 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'MoveTime': 800, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.019999999552965164, 1.7200000286102295, 2.819999933242798], 'AtVector': [-0.009999999776482582, 1.6399999856948853, 5.380000114440918], 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0022', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'ASName': 'Rauru-loopC', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        Dm_Npc_Hylia_Rauru.EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'ASName': 'Rauru-loopC', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0031', 'IsCloseDialog': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'EndFNumber': 49.5, 'StartFNumber': 49.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Dm_Locator[Eff_001].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'TargetActorKind': 1, 'ActorName': 'Dm_Npc_Hylia_Rauru', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1})
        Dm_Locator[Eff_001].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SageRoom_0005_Aura_Light_01_C014'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_RauruSFX', 'IsIgnoreDucking': False})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Roop_SFX_00', 'IsIgnoreDucking': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C14', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C14'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void C03() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03', 'RootType': 3, 'TargetActorName': 'Dm_Npc_Hylia_Rauru', 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C04_Lp', 'IsAllSlot': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0004', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 3.5, 'EndDistance': 3.5, 'StartFNumber': 31.0, 'EndFNumber': 31.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C03', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C03'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}

void C06() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '01', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-11.050000190734863, 1.3300000429153442, 4.360000133514404], 'AtVector': [-2.450000047683716, 1.059999942779541, 2.9700000286102295], 'TargetFovy': 28.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '01', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 600, 'PosVector': [-12.210000038146973, 1.3700000047683716, 4.550000190734863], 'AtVector': [-2.450000047683716, 1.059999942779541, 2.9700000286102295], 'TargetFovy': 28.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C06', 'IsAllSlot': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Dm_Npc_Hylia_Rauru.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0008', 'IsWaitEnd': True, 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.5, 'EndFNumber': 49.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C06', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C06'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C07() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '01', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [-1.3600000143051147, 0.8600000143051147, 2.5199999809265137], 'AtVector': [0.5899999737739563, 1.7000000476837158, 4.980000019073486], 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '01', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'MoveTime': 600, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-1.350000023841858, 0.8600000143051147, 2.6500000953674316], 'AtVector': [0.3199999928474426, 1.7300000190734863, 5.300000190734863], 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C08_Lp', 'IsAllSlot': True, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Dm_Npc_Hylia_Rauru.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0009', 'IsWaitEnd': True, 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.599998474121094, 'EndFNumber': 49.599998474121094, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C07', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C07'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C11() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        Dm_Npc_Hylia_Rauru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0019', 'ASName': 'Rauru-loopA', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'EnableCameraAlpha': True, 'PosVector': [0.9599999785423279, 100.62000274658203, 3.0299999713897705], 'AtVector': [-0.12999999523162842, 101.19999694824219, -2.049999952316284], 'TargetFovy': 32.58000183105469, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'MoveTime': 1000, 'IsWaitEnd': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'EnableCameraAlpha': True, 'PosVector': [1.100000023841858, 100.62000274658203, 3.0], 'AtVector': [0.009999999776482582, 101.19999694824219, -2.0799999237060547], 'TargetFovy': 32.58000183105469, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.5, 'EndFNumber': 49.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C11', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C11'})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void C12() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '01', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4.429999828338623, 8.380000114440918, -15.109999656677246], 'AtVector': [0.14000000059604645, 0.7300000190734863, 0.3799999952316284], 'TargetFovy': 32.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '01', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'PosVector': [-11.25, 7.510000228881836, -11.600000381469727], 'AtVector': [0.10000000149011612, 0.6499999761581421, 0.3700000047683716], 'TargetFovy': 32.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'MoveTime': 800, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0020', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'ASName': 'Rauru-loopC', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'EndFNumber': 49.5, 'StartFNumber': 49.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C12', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C12'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C13() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-0.550000011920929, 1.0, 2.440000057220459], 'AtVector': [-0.18000000715255737, 1.100000023841858, 1.3600000143051147], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Npc_Hylia_Rauru.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Rauru-loopC'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0021', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C13', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C13'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C15() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 2.200000047683716, 5.889999866485596], 'AtVector': [0.0, 2.0299999713897705, 5.510000228881836], 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 1.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [0.019999999552965164, 4.159999847412109, 10.4399995803833], 'AtVector': [0.0, 1.9600000381469727, 5.510000228881836], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 70, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C15_2', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C15-2', 'IsWaitEnd': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'Text3': '', 'Text1': 'C15-01', 'Text2': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'EndFNumber': 49.5, 'StartFNumber': 49.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[Eff_001].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_SageRoom_0005_Aura_Light_01_C014', 'IsKill': False})
        Dm_Locator[Eff_001].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SageRoom_0005_Aura_Light_01'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C15', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C15'})
    }

    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-9.109999656677246, 0.9700000286102295, -2.9200000762939453], 'AtVector': [-4.960000038146973, 0.36000001430511475, -0.05000000074505806], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-9.109999656677246, 0.9700000286102295, -2.9200000762939453], 'AtVector': [-4.369999885559082, 0.12999999523162842, -1.2899999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'StartAccelerateRate': 0.20000000298023224, 'MoveTime': 380, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

        fork {
            Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0023', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Rauru-loopC', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
        }

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'Text3': '', 'Text1': 'C15-02', 'Text2': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'EndFNumber': 49.5, 'StartFNumber': 49.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Dm_Locator[01].EventTriggerEmitXLink({'ELinkKey': 'Dm_SageRoom_0005_Aura_Forest_01', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Roop_SFX_01', 'IsIgnoreDucking': False})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Wind_SFX', 'IsIgnoreDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Dm_Locator[01].EventTriggerEmitXLink({'ELinkKey': 'Dm_SageRoom_0005_Aura_Fire_01', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Fire_SFX', 'IsIgnoreDucking': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C15_2', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C15_2'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [2.619999885559082, 1.059999942779541, -9.300000190734863], 'AtVector': [0.23000000417232513, 0.36000001430511475, -2.4000000953674316], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'StartAccelerateRate': 0.20000000298023224, 'MoveTime': 380, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [2.619999885559082, 1.059999942779541, -9.300000190734863], 'AtVector': [-0.9700000286102295, 0.15000000596046448, -2.9600000381469727], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'MoveTotargetPosType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C15_3', 'ClothWarpMode': 0})
    } {
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0024', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Rauru-loopC', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C15-3'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'Text3': '', 'Text1': 'C15-03', 'Text2': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'EndFNumber': 49.5, 'StartFNumber': 49.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Dm_Locator[01].EventTriggerEmitXLink({'ELinkKey': 'Dm_SageRoom_0005_Aura_Water_01', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Water_SFX', 'IsIgnoreDucking': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C15_3', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C15_3'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [9.029999732971191, 0.8299999833106995, -4.25], 'AtVector': [4.090000152587891, 0.5, -1.1399999856948853], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'StartAccelerateRate': 0.20000000298023224, 'MoveTime': 380, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [9.029999732971191, 0.8299999833106995, -4.25], 'AtVector': [4.869999885559082, 0.49000000953674316, -0.1599999964237213], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C15_4', 'ClothWarpMode': 0})
    } {
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0025', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Rauru-loopC', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C15-4'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'Text3': '', 'Text1': 'C15-04', 'Text2': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'EndFNumber': 49.5, 'StartFNumber': 49.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Dm_Locator[01].EventTriggerEmitXLink({'ELinkKey': 'Dm_SageRoom_0005_Aura_Spirit_01', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Spilit_SFX', 'IsIgnoreDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Dm_Locator[01].EventTriggerEmitXLink({'ELinkKey': 'Dm_SageRoom_0005_Aura_Shadow_01', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Shadow_SFX', 'IsIgnoreDucking': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C15_4', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C15_4'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C17() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1InstanceName': '0', 'PosVector': [-0.8199999928474426, 100.55000305175781, 1.3899999856948853], 'AtVector': [0.23000000417232513, 101.44000244140625, -1.5700000524520874], 'TargetFovy': 60.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0, 'ASCommand': 'C17-st'})
    } {
        Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0027', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C15', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C17', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C17'})
    }

    Dm_Npc_Hylia_Rauru.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0028', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'C15'})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'IsReferenceRootOnce': False, 'IsLoop': False, 'InterpolateFrame': 20.0, 'SceneName': 'C17', 'RootType': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C17', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
            UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'EndFNumber': 49.5, 'StartFNumber': 49.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
            Dm_Locator[Eff_000].EventTriggerParticipateEvent()
            Dm_Locator[Eff_000].EventTriggerEmitXLink({'ELinkKey': 'Dm_SageRoom_0005_Ray_00', 'SLinkKey': ''})
        } {
            SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_SageRoom_0000', 'IsUseSuspendFade': False})
        }

    } {
        Dm_Npc_Hylia_Rauru.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C17', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Shine_Get_C18() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C18-0'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C18', 'ClothWarpMode': 0, 'UseAnmDriven': True, 'IsAllSlot': True})
    } {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': False, 'InstanceName': '', 'OffsetBase': 0, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'YAngle': 140.0, 'ClothWarpMode': -1, 'PositionOffset': [-0.75, 1.399999976158142, 0.20000000298023224]})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Locator[Item_Medal_Light].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.0, 100.19999694824219, 0.0], 'YAngle': -30.0, 'ClothWarpMode': -1})
        Dm_Locator[Item_Medal_Light].EventPlayAS({'ASName': 'C18', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'StartDistance': 12.0, 'EndDistance': 12.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C18'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C19', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C19', 'Frames': 0})
    } {
        Dm_Locator[Eff_000].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SageRoom_0005_Ray_00'})
    } {
        Land_SageRoom_Base_A_01.EventPlayAS({'ASName': 'CavityOn', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'SE_MedalGet_White_00'})
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'SE_MedalGet_MV_00'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C19-0'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C19', 'ClothWarpMode': 0, 'UseAnmDriven': True, 'IsAllSlot': True})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C19', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Locator[Item_Medal_Light].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C19'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 5.0, 'EndDistance': 3.0, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'RequiredFrame': 180, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C19'})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_MedalGet', 'CommandLife': 2, 'IsReleaseDucking': True})
    } {
        Item_Medal_Light.EventTriggerEmitXLink({'ELinkKey': 'Dm_Awake_Light_Get_Glitter_00', 'SLinkKey': ''})
        Dm_Locator[01].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Awake_Light_Get_Shaft_00'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C20', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C20'})
    } {
        Land_SageRoom_Base_A_01.EventPlayAS({'ASName': 'CavityOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'SE_MedalGet_MV_02'})
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'SE_MedalGet_Shine_Loop'})
    } {
        GameSystemActor.EventTriggerZeldaNotesRequestSendDailyScreenShot({'TypeID': 'get_item', 'TargetID': 'Item_Medal_Light', 'Frame': 529})
    }


    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Medal_Light'})

    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'SE_MedalGet_Shine_Loop', 'GroupName': '', 'FadeFrame': -1})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Dm_Npc_Hylia_Rauru.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0029', 'ASName': 'Rauru-loopA', 'IsOverrideStyle': True, 'IsCloseDialog': False, 'EndDialogOption': 2, 'OverrideStyle': 7, 'MaintainPerformanceState': 0})
    GameSystemActor.EventTriggerZeldaNotesSimpleAddNPCTalkCount({'Frame': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
}

void C15-05() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [3.9600000381469727, 1.600000023841858, 2.930000066757202], 'AtVector': [-0.05999999865889549, 1.2000000476837158, 4.260000228881836], 'TargetFovy': 29.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C15_5-Lp', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C15-5'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'StartFNumber': 49.400001525878906, 'EndFNumber': 49.400001525878906, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[Eff_001].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SageRoom_0005_Aura_Light_01'})
        Dm_Locator[01].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SageRoom_0005_Aura_Forest_01'})
        Dm_Locator[01].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SageRoom_0005_Aura_Fire_01'})
        Dm_Locator[01].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SageRoom_0005_Aura_Water_01'})
        Dm_Locator[01].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SageRoom_0005_Aura_Spirit_01'})
        Dm_Locator[01].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SageRoom_0005_Aura_Shadow_01'})
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Roop_SFX_00', 'GroupName': '', 'FadeFrame': -1})
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'SE_Dm_SagerRoom_0000_Roop_SFX_01', 'GroupName': '', 'FadeFrame': -1})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_SageRoom_0005_C15_5', 'CurrDemoPaletteName': 'Dm_SageRoom_0005_C15_5'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'IsReferenceRootOnce': False, 'IsLoop': False, 'SceneName': 'C15-5', 'InterpolateFrame': 20.0})
    } {

        fork {
            Dm_Npc_Hylia_Rauru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C15', 'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0030', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C15_5-st', 'ClothWarpMode': 0})
        } {
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_SageRoom_0005:Dm_SageRoom_0005_0026', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'ASName': 'EvtTalk', 'MaintainPerformanceState': 0})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 8.899999618530273, 'EndDistance': 8.899999618530273, 'IsWaitEnd': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'EndFNumber': 49.5, 'StartFNumber': 49.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}
