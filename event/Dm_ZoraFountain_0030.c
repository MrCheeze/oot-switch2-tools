-------- EventFlow: Dm_ZoraFountain_0030 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency', 'EventTriggerEmitXLink', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ZoraFountain_0030/Dm_ZoraFountain_0030_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZoraFountain_0030_Player_Child.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Zora_Ruto_Child_001
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventTriggerChangeEmotion', 'EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventTriggerRequestLookAtTheFront', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZoraFountain_0030/Dm_ZoraFountain_0030_Npc_Zora_ZU_Ruto_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZoraFountain_0030_Npc_Zora_ZU_Ruto_Child.root.as'}

Actor: Item_Stone_Water
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'Position': [60.20500183105469, 103.09600067138672, -10.229000091552734], 'UseEventModelAnime': 'Work/Model/Event/Dm_ZoraFountain_0030/Dm_ZoraFountain_0030_Item_Stone_Water/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZoraFountain_0030_Item_Stone_Water.root.as', 'IsWorld': True, 'Rotation': [0.0, 0.0, 0.0]}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerZeldaNotesRequestSendDailyScreenShot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[player]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZoraFountain_0030/Dm_ZoraFountain_0030_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZoraFountain_0030_Dm_Locator.root.as'}

Actor: Dm_Locator[Stone]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Ruto]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZoraFountain_0030/Dm_ZoraFountain_0030_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZoraFountain_0030_Dm_Locator.root.as'}

Actor: EventSystemActor[Ruto]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_JabuJabu
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Shindo]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart', 'EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call ready()


    call C01()


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
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
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C05', 'Text2': '', 'IsWaitEnd': False})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C06', 'Text2': '', 'IsWaitEnd': False})
    }

}

void ready() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': True})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Npc_Zora_Ruto_Child_001', 'KeyName': 'WaterIn'})
    UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'Length': 1, 'IsNoPlayAnime': True})

    fork {
        Dm_Locator[player].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 100.0, 'Position': [56.65599822998047, 101.03700256347656, -9.602999687194824], 'ClothWarpMode': -1})
        Player_Event.EventTriggerModelBindWithDependency({'ActorName': 'Dm_Locator', 'BoneName': '', 'RotOffset': [0.0, 0.0, 0.0], 'InstanceName': 'player', 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 100.0, 'Position': [56.880001068115234, 102.38999938964844, -9.75], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsNearOffset': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'ArrivedASCommand': '', 'offset': [0.5199999809265137, 0.15000000596046448, 0.0], 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Dm_Locator[Ruto].EventWarpToTargetPosAndRot({'Position': [60.334999084472656, 100.90799713134766, -10.251999855041504], 'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -80.0})
        Npc_Zora_Ruto_Child_001.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'Ruto', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        Dm_Locator[Stone].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [56.65599822998047, 101.03700256347656, -9.602999687194824], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Item_Stone_Water.EventTriggerSetModelLodManual({'LodLevel': 0})
        Item_Stone_Water.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'BoneName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Stone'})
    } {
        Npc_JabuJabu.EventTriggerParticipateEvent()
        Npc_JabuJabu.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
    } {
        Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_WaterSurface_01_body'})
        Npc_Zora_Ruto_Child_001.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZoraFountain_0030_WaterSurface_01_body', 'SLinkKey': ''})
    } {
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 5, 'FadeTime': 0.0})
    } {
        EventWorldManagerController.Event_SetEnvPaletteForFlowchart({'EnvPaletteName': 'Dm_ZoraFountain_0030', 'ChangeSpeed': 5, 'IsWaitEnd': False, 'EnvTimeTableName': ''})
    }

    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Zora_Ruto_Child_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C01-Loop', 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        Item_Stone_Water.EventPlayAS({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    } {
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'IsWaitEnd': True, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'InstanceName': '', 'ActorName': 'Npc_Zora_Ruto_Child_001', 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 430})
        Item_Stone_Water.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_SpiritStone_01'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndDistance': 1.7999999523162842, 'EndFNumber': 48.0, 'EndBluarLevel': 3.0, 'RequiredFrame': 0, 'StartDistance': 1.7999999523162842, 'StartFNumber': 48.0, 'StartBluarLevel': 3.0, 'IsWaitEnd': False, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableDofFarCancel': False, 'IsEnableNear': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Item_Stone_Water.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_SpiritStone_00'})
        Item_Stone_Water.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_GetDemo_00'})
    } {
        EventSystemActor[Controller].EventWait({'Frames': 440, 'IsWaitEnd': True})
        GameSystemActor[Shindo].EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_ZoraFountain_0030_C01', 'CurrDemoPaletteName': 'Dm_ZoraFountain_0030_C01'})
    }

}

void C02() {

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Item_Stone_Water.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02', 'IsAnimeDriven': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C02', 'IsWaitEnd': True, 'ClothWarpMode': 2})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'IsEnableDofFarCancel': False, 'IsEnableNear': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Item_Stone_Water.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_SpiritStone_02'})
        Item_Stone_Water.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_GetDemo_00', 'IsKill': False})
        Item_Stone_Water.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_GetDemo_01'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_ZoraFountain_0030_C02', 'CurrDemoPaletteName': 'Dm_ZoraFountain_0030_C02'})
    }

}

void C03() {

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C03', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Item_Stone_Water.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C03', 'IsWaitEnd': False, 'IsAnimeDriven': False})
    } {
        Npc_Zora_Ruto_Child_001.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor[Ruto].EventWait({'Frames': 300, 'IsWaitEnd': True})
        Npc_Zora_Ruto_Child_001.EventPlayAS({'ASName': 'Swim_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        Dm_Locator[Ruto].EventWarpToTargetPosAndRot({'Position': [60.334999084472656, 100.90799713134766, -10.251999855041504], 'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -140.0})
        Npc_Zora_Ruto_Child_001.EventTriggerRequestLookAtTheFront()
    } {
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player_Event', 'PosOffset': [0.0, 0.4000000059604645, 0.0]})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_SpiritStoneGet', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 670, 'EndDistance': 0.550000011920929, 'EndFNumber': 72.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'EndBluarLevel': 3.0, 'StartBluarLevel': 2.0, 'StartFNumber': 60.0, 'StartDistance': 2.0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Item_Stone_Water.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_GetDemo_01', 'IsKill': False})
        Item_Stone_Water.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_GetDemo_02'})
    } {
        Item_Stone_Water.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Pad_End'})
        Item_Stone_Water.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Particle'})
    } {
        GameSystemActor.EventTriggerZeldaNotesRequestSendDailyScreenShot({'Frame': 746, 'TypeID': 'get_item', 'TargetID': 'Item_Stone_Water'})
    }


    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Stone_Water'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Item_Stone_Water.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ZoraFountain_0030_GetDemo_02'})
    Item_Stone_Water.EventTriggerXLinkFadeByKey({'SLinkKey': 'Pad_End', 'ELinkKey': '', 'IsKill': False})
    Item_Stone_Water.EventTriggerXLinkFadeByKey({'SLinkKey': 'Particle', 'ELinkKey': '', 'IsKill': False})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [58.880001068115234, 101.9800033569336, -11.430000305175781], 'AtVector': [61.11000061035156, 101.80999755859375, -9.779999732971191], 'TargetFovy': 28.700000762939453, 'IsEnableRevertFast': False})
    } {
        Dm_Locator[player].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [57.933998107910156, 100.95999908447266, -13.11400032043457], 'YAngle': 40.0})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'Frames': 40, 'IsWaitEnd': True})
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Child_001', 'IsWaitEnd': False})
    } {
        Item_Stone_Water.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Zora_Ruto_Child_001.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_ZoraFountain_0030:Dm_ZoraFountain_0030_0005', 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'ASName': 'C04-Loop'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartDistance': 1.7999999523162842, 'EndDistance': 1.7999999523162842, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': True, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Zora_Ruto_Child_001.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZoraFountain_0030_WaterSurface_01_body', 'SLinkKey': ''})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_ZoraFountain_0030_C04', 'CurrDemoPaletteName': 'Dm_ZoraFountain_0030_C04'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C05-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Zora_Ruto_Child_001.EventTriggerRequestLookAtTheFront()
        Npc_Zora_Ruto_Child_001.EventPlayAS({'ASName': 'C05', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': False})
    } {
        Dm_Locator[Ruto].EventPlayAS({'ASName': 'C05-Ruto', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Zora_Ruto_Child_001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_WaterSplash_C05_00'})
        Npc_Zora_Ruto_Child_001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_WaterSplash_C05_01'})
        Npc_Zora_Ruto_Child_001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_WaterSplash_C05_02'})
        Npc_Zora_Ruto_Child_001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_WaterSplash_C05_03'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartDistance': 4.099999904632568, 'EndDistance': 4.099999904632568, 'IsEnableNear': False, 'IsEnableDofFarCancel': True, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [60.84000015258789, 101.95999908447266, -9.680000305175781], 'AtVector': [61.47999954223633, 101.95999908447266, -8.899999618530273], 'TargetFovy': 21.0, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Child_001.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 5})

        fork {
            Npc_Zora_Ruto_Child_001.EventPlayAS({'ASName': 'C06-00', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsAllSlot': True})
        } {
            Dm_Locator[Ruto].EventPlayAS({'ASName': 'C06-00-Ruto', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }


        fork {
            Npc_Zora_Ruto_Child_001.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_ZoraFountain_0030:Dm_ZoraFountain_0030_0006', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C06-01', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False})
        } {
            Dm_Locator[Ruto].EventPlayAS({'ASName': 'C06-01-Ruto', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

        Npc_Zora_Ruto_Child_001.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})

        fork {
            Npc_Zora_Ruto_Child_001.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_ZoraFountain_0030:Dm_ZoraFountain_0030_0007', 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'ASName': 'C06-02', 'IsPlayASAllSlot': False, 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
        } {
            Dm_Locator[Ruto].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06-02-Ruto'})
        }


        fork {
            Npc_Zora_Ruto_Child_001.EventPlayAS({'ForceFadeInFrame': 30.0, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'C06-03', 'IsAnimeDriven': True, 'IsAllSlot': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        } {
            Dm_Locator[Ruto].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C06-03-Ruto', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            Npc_Zora_Ruto_Child_001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZoraFountain_0030_WaterSplash_C06'})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 4.5, 'EndDistance': 4.5, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': True, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_ZoraFountain_0030_C06', 'CurrDemoPaletteName': 'Dm_ZoraFountain_0030_C06', 'Frames': 0})
    }


    fork {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 0})
    } {
        Player_Event.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'player'})
    } {
        Item_Stone_Water.EventTriggerModelUnbind()
    } {
        Npc_Zora_Ruto_Child_001.EventTriggerModelUnbind()
    } {
        Npc_JabuJabu.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
    } {
        Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 5, 'FadeTime': 0.0})
    } {
        Player_Event.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ZoraFountain_0030_WaterSurface_01_body'})
        Npc_Zora_Ruto_Child_001.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ZoraFountain_0030_WaterSurface_01_body', 'SLinkKey': '', 'IsKill': False})
    }

}
