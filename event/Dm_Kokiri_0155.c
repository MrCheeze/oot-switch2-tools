-------- EventFlow: Dm_Kokiri_0155 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0155/Dm_Kokiri_0155_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0155_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0155/Dm_Kokiri_0155/workspace.pp__ModelProject.gyml'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0155/Dm_Kokiri_0155_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0155_Npc_Navi.root.as', 'EventMemberCreateMethod': 2, 'ExceptionalBindType': 3}

Actor: Npc_Fairy_Saria
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0155/Dm_Kokiri_0155_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0155_Npc_Navi.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood]
entrypoint: None()
actions: ['EventPlayAS', 'EventLookAtObjectImmediate', 'EventTriggerChangeEmotion', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 2, 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0155_Npc_Kokiri_WC_Saria.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0155/Dm_Kokiri_0155_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventOverwriteSceneShadingParams', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline', 'Event_ResetFoliageShadowParamForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Item_Ocarina_Fairy_Saria[saria]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Fairy
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerZeldaNotesRequestSendDailyScreenShot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[Foliage]
entrypoint: None()
actions: ['Event_SetFoliageShadowParamForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C04', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
    }

}

void ready() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})

    fork {
        Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood].EventLookAtObjectImmediate({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Dm_Item_Ocarina_Fairy_Saria[saria].EventTriggerParticipateEvent()
        Dm_Item_Ocarina_Fairy_Saria[saria].EventTriggerModelBind({'ActorName': 'Npc_Kokiri_Saria_Child', 'InstanceName': 'KokiriForest_ArriveLostWood', 'BoneName': 'Weapon_R', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [180.0, 0.0, 0.0]})
        Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 3})
        Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 1.0, 'ASName': 'C01-Wait'})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-122.125, 114.46269989013672, -36.88970184326172], 'YAngle': 90.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'C01-LP', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1, 'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'C01-LP'})
        Item_Ocarina_Fairy.EventTriggerParticipateEvent()
        Item_Ocarina_Fairy.EventTriggerModelBind({'ActorName': 'Player_Event', 'BoneName': 'Weapon_L', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.800000011920929, 0.699999988079071, 1.7000000476837158], 'AtVector': [0.75, 0.7099999785423279, 1.600000023841858], 'TargetFovy': 22.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01-Npc_Navi-A-0'})
    } {
        Npc_Fairy_Saria.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01-Npc_Navi-B-0'})
    } {
        Dm_Locator[01].EventWarpToTargetPosAndRot({'YAngle': 90.0, 'IsWaitEnd': True, 'Position': [-121.1259994506836, 114.4000015258789, -36.88800048828125], 'ClothWarpMode': -1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'PrevDemoPaletteName': 'Dm_Kokiri_0155_C01', 'RateStart': 0.0, 'RateEnd': 1.0, 'IsWaitEnd': False, 'CurrDemoPaletteName': 'Dm_Kokiri_0155_C01', 'RateFrame': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'StartDistance': 1.649999976158142, 'EndDistance': 1.649999976158142, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': False, 'Length': 2})
}

void C01() {
    GameSystemActor.EventTriggerZeldaNotesRequestSendDailyScreenShot({'TypeID': 'get_item', 'TargetID': 'Item_Ocarina_Fairy', 'Frame': 0})

    call GetPouchContent.DisplayGetByActorName({'ActorName': 'Item_Ocarina_Fairy'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'C01'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Item_Ocarina_Fairy.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'Item_Ocarina_Fairy', 'IsGetEvent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})

        fork {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [3.4700000286102295, 0.7099999785423279, 3.609999895095825], 'AtVector': [3.4000000953674316, 0.7099999785423279, 3.5399999618530273], 'TargetFovy': 23.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'PrevDemoPaletteName': 'Dm_Kokiri_0155_C02', 'CurrDemoPaletteName': 'Dm_Kokiri_0155_C02', 'RateStart': 0.0, 'RateEnd': 1.0, 'IsWaitEnd': False, 'RateFrame': 0.0})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.8999999761581421, 'BakeLightLuminanceRatio': 0.4000000059604645})
        }

    }

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C02-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C02-Player_Child-A-0', 'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ASName': 'C02-Npc_Navi-A-0', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 60.0})
    } {
        Npc_Fairy_Saria.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C02-Npc_Navi-B-0', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 15.0})
    } {
        Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C02', 'ForceFadeInFrame': 60.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False, 'IsEnableNearDepthBlur': False})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'PrevDemoPaletteName': 'Dm_Kokiri_0155_C02', 'CurrDemoPaletteName': 'Dm_Kokiri_0155_C02', 'RateStart': 0.0, 'RateEnd': 1.0, 'IsWaitEnd': False, 'RateFrame': 0.0})
    }

}

void C03() {

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'RootType': 3, 'TargetActorName': 'Npc_Kokiri_Saria_Child', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorInstanceName': 'KokiriForest_ArriveLostWood'})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'PrevDemoPaletteName': 'Dm_Kokiri_0155_C03', 'CurrDemoPaletteName': 'Dm_Kokiri_0155_C03', 'RateStart': 0.0, 'RateEnd': 1.0, 'IsWaitEnd': False, 'RateFrame': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartFNumber': 35.0, 'EndFNumber': 25.0, 'RequiredFrame': 350, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood].EventPlayAS({'Partial': '', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C04'})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'ShadowRatio': 0.9934139847755432, 'BakeLightLuminanceRatio': 0.293612003326416})
    }

}

void C04() {

    fork {
        Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood].EventTriggerSetModelLodManual({'LodLevel': 1})
        Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood].EventPlayAS({'Partial': '', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C04'})
    } {
        Npc_Fairy_Saria.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C04-Npc_Navi-B-0', 'IsWaitEnd': False})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'RateStart': 0.0, 'RateEnd': 1.0, 'IsWaitEnd': False, 'RateFrame': 0.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0155_C04', 'CurrDemoPaletteName': 'Dm_Kokiri_0155_C04'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 9.0, 'EndFNumber': 9.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {

        fork {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C04-0', 'RootType': 3, 'TargetActorName': 'Npc_Kokiri_Saria_Child', 'TargetActorInstanceName': 'KokiriForest_ArriveLostWood', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:WorldSE+Demo系SEミュート(フェード長い)', 'CommandLife': 1, 'DuckingName2': '', 'DuckingName3': ''})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }

    } {
        EventWorldManagerController[Foliage].Event_SetFoliageShadowParamForFlowchart({'IsWaitEnd': False})
    } {
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.9973790049552917, 'BakeLightLuminanceRatio': 0.3050430119037628})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventWorldManagerController.Event_ResetFoliageShadowParamForFlowchart({'IsWaitEnd': False})
}
