-------- EventFlow: Dm_TimeTemple_0030 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0030/Dm_TimeTemple_0030_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0030_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventCloseDoCommand', 'EventOpenDoCommand']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviMoveAtPos', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0030/Dm_TimeTemple_0030_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0030_Dm_Locator.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'Position': [0.0, 0.0, 0.0]}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Rotation': [0.0, 90.0, 0.0], 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [136.83099365234375, 106.12000274658203, -34.0]}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput', 'EventWait', 'EventTriggerControllerRumble', 'EventTriggerZeldaNotesRequestSendDailyScreenShot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [137.66299438476562, 106.3550033569336, -33.99800109863281]}

Actor: Land_HrlCity_MasterSword
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventTriggerSoundControlBGM', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[voice]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    call previous()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C01', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C02', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C03', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C04', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text4': '', 'Text3': '', 'Text2': ''})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C05', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text3': '', 'Text4': ''})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C06', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text3': '', 'Text2': ''})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C07', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C08', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C09', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C10()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C10', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C11()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C11', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C12()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C12', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }

}

void previous() {
    Dm_Locator[position].EventTriggerParticipateEvent()
}

void C01() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.7200000286102295, 0.4300000071525574, 2.200000047683716], 'AtVector': [-0.3199999928474426, 0.8700000047683716, 0.3700000047683716], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventTriggerModelBindWithDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01-Player_Child-A-0', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 3})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01-Dm_Locator-A-0', 'IsAnimeDriven': True})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [136.66000366210938, 107.22000122070312, -33.58000183105469], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsLookAtObject': True, 'LookAtWorldPos': [137.67999267578125, 107.33000183105469, -34.0], 'WorldPos': [137.44000244140625, 107.31999969482422, -33.33000183105469], 'IncSpeedDistance': 0.10000000149011612, 'MoveSpeed': 0.800000011920929, 'IsTurnLooking': True, 'MinimumSpeed': 0.0, 'DecSpeedDistance': 0.30000001192092896, 'ASCommand': '', 'OverwriteRotNearDist': -1.0})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 60.0, 'ASName': 'EvtWait'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndFNumber': 36.0, 'EndDistance': 1.399999976158142, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.399999976158142, 'StartFNumber': 36.0, 'EndBluarLevel': 2.0, 'StartBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C01', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C01'})
    }

}

void C02() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.8700000047683716, 1.2799999713897705, 0.3799999952316284], 'AtVector': [0.7799999713897705, 1.2599999904632568, 0.4300000071525574], 'TargetFovy': 17.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C02-Player_Child-A-0', 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Land_HrlCity_MasterSword.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'InstanceName': '', 'TransOffset': [0.0, 0.0, 0.0]})
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02-Dm_Locator-A-0', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndDistance': 1.0, 'EndFNumber': 180.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.0, 'StartFNumber': 180.0, 'EndBluarLevel': 1.0, 'StartBluarLevel': 1.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C02', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C02'})
    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': True, 'SLinkKey': 'grip_sword'})
    } {
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0000'})
    }

}

void C03() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.019999999552965164, 2.490000009536743, 3.75], 'AtVector': [0.019999999552965164, 0.9800000190734863, 0.9599999785423279], 'TargetFovy': 26.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C03-Player_Child-A-0', 'UseAnmDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C03-Dm_Locator-A-0', 'IsAnimeDriven': True, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 2.700000047683716, 'StartDistance': 2.700000047683716, 'IsEnableNear': True, 'StartFNumber': 45.0, 'EndFNumber': 45.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})
        UISystemActor.EventOpenDoCommand({'DoActionType': 13, 'IsWaitEnd': True})
        GameSystemActor.EventWaitForKeyInput({'IsWaitEnd': True, 'KeyInputValue': 0})
        UISystemActor.EventCloseDoCommand({'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C03', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C03'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'sword_sound', 'IsIgnoreDucking': True})
    } {
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 65})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0001'})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C04-0'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C04-Player_Child-A-0', 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C04-Dm_Locator-A-0', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 2.0, 'EndFNumber': 240.0, 'EndDistance': 1.0, 'StartFNumber': 240.0, 'StartDistance': 1.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Dm_Locator[1].EventTriggerEmitXLink({'ELinkKey': 'Dm_TimeTemple_Shine_01_C04', 'SLinkKey': ''})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C04', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C04'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'MS_Fx', 'IsIgnoreDucking': True})
    }

}

void C05() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C05-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C05-Player_Child-A-0', 'UseAnmDriven': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C05-Dm_Locator-A-0', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndFNumber': 240.0, 'StartFNumber': 240.0, 'EndDistance': 0.36000001430511475, 'StartDistance': 0.36000001430511475, 'IsEnableNear': True, 'StartBluarLevel': 0.800000011920929, 'EndBluarLevel': 0.800000011920929, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[1].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_TimeTemple_Shine_01_C04', 'SLinkKey': '', 'IsKill': False})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C05'})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C05', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C05'})
    } {
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 39})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0003'})
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 97})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0002'})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C06-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C06-Player_Child-A-0', 'UseAnmDriven': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C06-Dm_Locator-A-0', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 1.5, 'StartDistance': 1.5, 'IsEnableNear': True, 'StartFNumber': 46.0, 'EndFNumber': 46.0, 'StartBluarLevel': 1.7000000476837158, 'EndBluarLevel': 1.7000000476837158, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[1].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C05', 'IsKill': False})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C06'})
    } {
        EventSystemActor.EventWait({'Frames': 70, 'IsWaitEnd': True})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_TimeTemple_0030', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C06', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C06'})
    } {
        GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    }

}

void C07() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C07', 'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C07-Player_Child-A-0', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C07-Dm_Locator-A-0', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'EndDistance': 2.0, 'IsPrimaryApply': True, 'StartDistance': 2.0, 'IsEnableNear': True, 'StartFNumber': 75.0, 'EndFNumber': 75.0, 'StartBluarLevel': 1.2999999523162842, 'EndBluarLevel': 1.2999999523162842, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C07', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C07'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Sword_Sound', 'IsIgnoreDucking': True})
    } {
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 83})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0004'})
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 165})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0005'})
    }

}

void C08() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.009999999776482582, 0.7599999904632568, 3.1500000953674316], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.009999999776482582, 0.8199999928474426, 1.6200000047683716], 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.019999999552965164, 0.7400000095367432, 4.28000020980835], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 499, 'AtVector': [0.009999999776482582, 0.8199999928474426, 1.6200000047683716], 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 680})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})

        call GetPouchContent.DisplayGetByActorName({'ActorName': 'Weapon_Sword_Master'})

    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C08-Player_Child-A-0', 'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C08-Player_Child-A-0_Loop', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C08-Dm_Locator-A-0', 'IsAnimeDriven': True})
        Dm_Locator.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C08-Dm_Locator-A-0_Loop', 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': True, 'EndDistance': 1.399999976158142, 'StartDistance': 1.399999976158142, 'IsEnableNear': True, 'StartFNumber': 40.0, 'EndFNumber': 40.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C08', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C08'})
    } {
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 48})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0006'})
    } {
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'LightHash': 'light0100', 'LightType': 0, 'InstanceName': '', 'OffsetBase': 0, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'Direction': [0.0, 1.0, 0.0], 'PositionOffset': [1.0, 4.5, 0.0]})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'light0100', 'EditSourceRadius': True, 'LocationalLightCreateType': 0, 'EditIntensity': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'Color': [0.28999999165534973, 1.1299999952316284, 2.1700000762939453], 'EditColor': True, 'Intensity': 300.0})
    } {
        GameSystemActor.EventTriggerZeldaNotesRequestSendDailyScreenShot({'TypeID': 'get_item', 'Frame': 678, 'TargetID': 'Weapon_Sword_Master'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': True, 'ASCommand': 'C08-Player_Child-A-1', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C08-Dm_Locator-A-1', 'IsWaitEnd': True})
    }

}

void C09() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.8500000238418579, 0.949999988079071, -0.20000000298023224], 'AtVector': [-0.07000000029802322, 0.9100000262260437, 0.46000000834465027], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'ASCommand': 'C09-Player_Child-A-0', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C09-Dm_Locator-A-0', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'StartBluarLevel': 2.0, 'IsPrimaryApply': True, 'EndDistance': 0.800000011920929, 'EndFNumber': 240.0, 'StartDistance': 0.800000011920929, 'StartFNumber': 240.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Land_HrlCity_MasterSword.EventTriggerEmitXLink({'ELinkKey': 'Dm_TimeTemple_Shine_01_C09', 'SLinkKey': ''})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C09', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C09'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'MS_Fx_C09', 'IsIgnoreDucking': True})
    } {
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 80})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0008'})
    } {
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'light0100', 'EditColor': False, 'Intensity': 0.0, 'EditSourceRadius': False, 'LocationalLightCreateType': 0, 'Color': [1.0, 1.0, 1.0], 'EditIntensity': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30})
    }

}

void C10() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C10', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'ASCommand': 'C10-Player_Child-A-0', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Dm_Locator-A-0', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': True, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'StartDistance': 0.0, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C10'})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C10', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C10'})
    }

}

void C11() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C11'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'ASCommand': 'C11-Player_Child-A-0', 'IsAllSlot': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C12-Player_Child-A-0_Loop', 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C11-Dm_Locator-A-0', 'IsAnimeDriven': True})
        Dm_Locator.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C12-Dm_Locator-A-0_Loop', 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': True, 'EndDistance': 1.0, 'EndFNumber': 36.0, 'EndBluarLevel': 2.0, 'StartDistance': 1.0, 'StartFNumber': 36.0, 'StartBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[1].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C10', 'IsKill': False})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C11'})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C11', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C11'})
    } {
        EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 54})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'TimeTemple_0030_0009'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C12() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C13-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsPrimaryApply': True, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'StartDistance': 0.0, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[1].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C11', 'IsKill': False})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C12'})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0030_C12', 'CurrDemoPaletteName': 'Dm_TimeTemple_0030_C12'})
    }

    Player_Event.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'position'})
}
