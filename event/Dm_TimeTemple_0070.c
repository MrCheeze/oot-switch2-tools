-------- EventFlow: Dm_TimeTemple_0070 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0070/Dm_TimeTemple_0070_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0070_Player_Adult.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'Rotation': [0.0, 90.0, 0.0], 'IsWorld': True, 'Position': [136.9499969482422, 106.35399627685547, -34.0], 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

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

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0070/Dm_TimeTemple_0070_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0070_Dm_Locator.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': True, 'Rotation': [0.0, 90.0, 0.0], 'Position': [136.93499755859375, 106.12000274658203, -34.0]}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerCopyGameDataString64']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [137.66299438476562, 106.3550033569336, -33.99800109863281], 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: EventSystemActor[WaitCheck01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call other()


    call C01()


    call C02()

}

void other() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'WaitingResumeInGameBgm': False})
    GameDataActor.EventTriggerCopyGameDataString64({'SrcGameDataName': 'PlayerStatus.EquipWeapon', 'Index': -1, 'SrcIndex': -1, 'DstGameDataName': 'PlayerWeaponBeforeForceEquipMasterSword'})
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Master', 'WeaponSlot': 0}) {
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
    } else {

        fork {
            Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Sword_Master', 'DynamicEquipmentState': 1, 'IsActive': True})
        } {
            Event26:
            if Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Master', 'WeaponSlot': 0}) {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                goto Event26
            }
        }

    }
    Player_Event.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C01'})
    Player_Event.EventTriggerModelBindWithDependency({'BoneName': 'Dm_Locator', 'ActorName': 'Dm_Locator', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01-Player_Adult-A-0', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'UseAnmDriven': True, 'ClothWarpMode': 3})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0', 'InterpolateFrame': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [136.3000030517578, 107.33000183105469, -34.0]})
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [-0.800000011920929, -0.4000000059604645, 0.6000000238418579], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IncSpeedDistance': 0.10000000149011612, 'MoveSpeed': 1.0, 'DecSpeedDistance': 0.20000000298023224, 'IsWaitEnd': False})
        EventSystemActor[WaitCheck01].EventWait({'IsWaitEnd': True, 'Frames': 155})
        Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': False, 'Target': 0, 'WorldPos': [137.52000427246094, 107.2509994506836, -34.02000045776367], 'ActorName': '', 'IsWaitEnd': False})
    } {
        Dm_Locator.EventPlayAS({'ASName': 'C01_C02-Dm_Locator-A-0', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_TimeTemple_0080', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0070_C01', 'CurrDemoPaletteName': 'Dm_TimeTemple_0070_C01'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'StabSword', 'IsIgnoreDucking': True})
    }

}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C02'})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02-Player_Adult-A-0', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'SceneName': 'C02-0', 'InterpolateFrame': 1.0, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 415})
        UISystemActor.EventEventFadeOut({'Color': 1, 'Length': 2, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 1.2000000476837158, 'EndDistance': 1.2000000476837158, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'RequiredFrame': 110, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 1.2000000476837158, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'EndDistance': 2.0, 'RequiredFrame': 120, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        GameSystemActor.EventWait({'Frames': 55, 'IsWaitEnd': True})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_SwordShine_02_C02'})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_ShineTriforece_02_C02'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_Shine_02_C02'})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0070_C02', 'CurrDemoPaletteName': 'Dm_TimeTemple_0070_C02'})
    } {
        GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    }

    Player_Event.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': ''})
}
