-------- EventFlow: Dm_TimeTemple_0080 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0080/Dm_TimeTemple_0080_Player_Child/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0080_Player_Child.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[world]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0080/Dm_TimeTemple_0080_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0080_Dm_Locator.root.as', 'IsWorld': True, 'Position': [137.2100067138672, 106.12000274658203, -34.0], 'Rotation': [0.0, 90.0, 0.0]}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsWorld': True, 'Position': [137.66299438476562, 106.3550033569336, -33.99800109863281], 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Land_HrlCity_MasterSword
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerModelUnbind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0080/Dm_TimeTemple_0080_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0080_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'WaitingResumeInGameBgm': False})

    call C01()


    call C02()

}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C01'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player_Event.EventTriggerModelBindWithDependency({'BoneName': 'Dm_Locator', 'ActorName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'InstanceName': 'world'})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        Land_HrlCity_MasterSword.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'InstanceName': '0', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        Dm_Locator[0].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-Dm_Locator-A-0'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C01-Player_Child-A-0', 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 3})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0', 'RootType': 1, 'TargetActorName': ''})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [136.60000610351562, 107.12000274658203, -33.5]})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [-0.6000000238418579, 0.0, 0.6000000238418579], 'IsHomePosition': False, 'IsNearOffset': False, 'MinimumSpeed': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'LookAtTarget': 0, 'LookAtActorName': '', 'IncSpeedDistance': 0.10000000149011612, 'IsLookAtObject': False, 'IsTurnLooking': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'DecSpeedDistance': 0.10000000149011612, 'MoveSpeed': 0.800000011920929})
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': False, 'IsWaitEnd': False})
    } {
        Dm_Locator[world].EventPlayAS({'ASName': 'C01_Player_Trans', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_TimeTemple_0080', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_ShineTriforece_01_C02'})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0080_C01', 'CurrDemoPaletteName': 'Dm_TimeTemple_0080_C01'})
    }

}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C02'})

    fork {
        Dm_Locator[0].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C02-Dm_Locator-A-0'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ASCommand': 'C02-Player_Child-A-0', 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-0'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 1.2000000476837158, 'EndDistance': 1.2000000476837158, 'StartFNumber': 90.0, 'EndFNumber': 90.0, 'RequiredFrame': 15, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'RequiredFrame': 30, 'EndDistance': 3.5, 'EndFNumber': 80.0, 'StartFNumber': 90.0, 'StartDistance': 1.2000000476837158, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'RequiredFrame': 120, 'StartDistance': 3.5, 'EndDistance': 4.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 390})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsNoPlayAnime': False, 'Length': 2, 'IsWaitEnd': False})
    } {
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_SwordShine_01_C02'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_01_C02'})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0080_C02', 'CurrDemoPaletteName': 'Dm_TimeTemple_0080_C02'})
    } {
        GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    }

    Player_Event.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'world'})
    Land_HrlCity_MasterSword.EventTriggerModelUnbind()
}
