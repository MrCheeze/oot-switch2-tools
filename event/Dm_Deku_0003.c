-------- EventFlow: Dm_Deku_0003 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_Deku_0003/Dm_Deku_0003_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Deku_0003_Player.root.as'}

Actor: Dm_Locator[HomePosition]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_Deku_0003/Dm_Deku_0003_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Deku_0003_Navi.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[LightWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor[Light]
entrypoint: None()
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor[DOF]
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor[GateWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[VibrationWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[PalletWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        Dm_Locator[HomePosition].EventDmLocatorWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_Deku_0003_Pos', 'NotChangeRot': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorInstanceName': 'HomePosition', 'RootType': 3, 'TargetActorName': 'Dm_Locator'})
    } {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePosition', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseDemoWait': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 90.0, 'Position': [6.309999942779541, 48.18000030517578, 67.97000122070312], 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C01'})
    } {
        EventSystemActor[GateWait].EventWait({'IsWaitEnd': True, 'Frames': 48})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideTheDekuTree_BossArea_ShutIn', 'Index': -1, 'Value': True})
    } {
        EventSystemActor[VibrationWait].EventWait({'IsWaitEnd': True, 'Frames': 88})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 0.6600000262260437})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_Deku_0003_C01', 'IsWaitEnd': False, 'CurrDemoPaletteName': 'Dm_Deku_0003_C01', 'Frames': 0})
        EventSystemActor[PalletWait].EventWait({'IsWaitEnd': True, 'Frames': 62})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_Deku_0003_C01', 'CurrDemoPaletteName': 'Dm_Deku_0003_C01_2', 'IsWaitEnd': True, 'Frames': 20})
        EventSystemActor[PalletWait].EventWait({'IsWaitEnd': True, 'Frames': 296})
        EventSystemActor[PalletWait].EventWait({'IsWaitEnd': True, 'Frames': 18})
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        PostProcessingActor[DOF].EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 3.5, 'StartFNumber': 30.0, 'EndDistance': 3.5, 'EndFNumber': 25.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'RequiredFrame': 128, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor[DOF].EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 3.5, 'StartFNumber': 25.0, 'EndBluarLevel': 3.0, 'StartBluarLevel': 1.5, 'EndFNumber': 30.0, 'IsWaitEnd': True, 'EndDistance': 1.5, 'RequiredFrame': 249, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor[DOF].EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 1, 'IsWaitEnd': True, 'StartFNumber': 30.0, 'StartBluarLevel': 3.0, 'EndDistance': 6.5, 'EndFNumber': 8.0, 'EndBluarLevel': 1.0, 'StartDistance': 1.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor[LightWait].EventWait({'IsWaitEnd': True, 'Frames': 1})
        PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'LightHash': 'Light00', 'InstanceName': '', 'LightType': 1, 'InnerAngle': 10.0, 'OuterAngle': 150.0, 'Direction': [0.0, -0.699999988079071, 1.0], 'PositionOffset': [-1.0, 9.0, -12.0]})
        PostProcessingActor[Light].EventEditLocationalLight({'LightHash': 'Light00', 'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': True, 'SourceRadius': -100.0, 'FrameTransitionCount': 0, 'Color': [451.0, 184.0, 108.0], 'Intensity': 250.0})
        EventSystemActor[LightWait].EventWait({'IsWaitEnd': True, 'Frames': 58})
        PostProcessingActor[Light].EventEditLocationalLight({'LightHash': 'Light00', 'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': True, 'Intensity': 0.0, 'SourceRadius': 0.0, 'FrameTransitionCount': 30, 'Color': [451.0, 184.0, 108.0]})
        EventSystemActor[LightWait].EventWait({'IsWaitEnd': True, 'Frames': 289})
        PostProcessingActor[Light].EventEditLocationalLight({'LightHash': 'Light00', 'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': True, 'Intensity': 0.0, 'SourceRadius': 0.0, 'Color': [451.0, 184.0, 108.0], 'FrameTransitionCount': 1})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'DoorClose', 'IsIgnoreDucking': False})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'Position': [-2.380000114440918, 46.959999084472656, 67.69000244140625], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Deku_0003_Close'})
    }


    fork {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'RootType': 3})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C02'})
    }

}
