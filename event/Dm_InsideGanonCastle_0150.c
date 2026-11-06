-------- EventFlow: Dm_InsideGanonCastle_0150 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestEnduringCameraShake', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0150/Dm_InsideGanonCastle_0150/workspace.pp__ModelProject.gyml'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerChangeLayerHitMaskOnlyGround', 'EventTriggerPlayerResetLayerHitMask', 'EventPlayerUnequip', 'EventTriggerEmitXLink', 'EventTriggerEmitNpcOrPlayerVoice']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0150/Dm_InsideGanonCastle_0150_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0150_Player.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventPlayASWithClothWarp', 'EventTriggerEmitXLink']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0150/Dm_InsideGanonCastle_0150_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0150_Zelda.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0150/Dm_InsideGanonCastle_0150_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0150_Navi.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3}

Actor: Dm_Locator[OriginalPosition]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Weapon_Range_Longshot
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0150/Dm_InsideGanonCastle_0150_Item_Hookshot/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0150_Hookshot.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: Dm_Shootable_HookLong
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0150/Dm_InsideGanonCastle_0150_Item_HookshotChain/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0150_HookshotChain.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Shootable_HookLong
entrypoint: None()
actions: ['EventGoOffstageForUser']
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

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerCloseDemoScreen', 'EventTriggerStartVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[VFX_Zelda]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[VFX_Player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Voice]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[Light]
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartRoomSend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'BgmLocalProperty_BGM_EscapeFromGanonTower', 'Index': -1})
    Player_Event.EventTriggerPlayerChangeLayerHitMaskOnlyGround()

    call C01()


    call C03()


    call C05()


    call C06()

}

void C01() {

    fork {
        Dm_Locator[OriginalPosition].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_InsideGanonCastle_0150_Anchor', 'IsWaitEnd': True, 'NotChangeRot': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0.camera', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginalPosition'})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'OriginalPosition', 'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ASCommand': 'EvtWait', 'UseDemoWait': False})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 2})
    } {
        Dm_Weapon_Range_Longshot.EventPlayAS({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAnimeDriven': False})
    } {
        Dm_Shootable_HookLong.EventPlayAS({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
    } {
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 3, 'ArmorName': 'Weapon_Range_Longshot'}) {
            Shootable_HookLong.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'OriginalPosition', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'ASName': 'Act_LookAround', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': 2, 'IsWaitEnd': False, 'YAngle': 134.697998046875, 'Position': [21.974000930786133, 191.0749969482422, 24.628999710083008]})
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C01_Navi', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventTriggerSoundStartRoomSend({'VoiceMode': 1, 'CommandLife': 0})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C03-0.camera', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginalPosition'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ASCommand': 'C03_Player', 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 2, 'IsWaitEnd': False})
    } {
        Dm_Weapon_Range_Longshot.EventPlayAS({'ASName': 'C03', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Dm_Shootable_HookLong.EventPlayAS({'ASName': 'C03', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayASWithClothWarp({'ASName': 'C03_Zalda', 'ClothWarpMode': 2, 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False})
    } {
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 8})

        fork {
            EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 30})
        } {
            Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_InsideGanonCastle_0150_L_01'})
        }


        fork {
            EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 12})
            VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0150:Dm_InsideGanonCastle_0150_Z_00', 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0})
        } {
            Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_InsideGanonCastle_0150_L_02'})
        }

        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 26})

        fork {
            EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 4})
            VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0150:Dm_InsideGanonCastle_0150_Z_01', 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0})
        } {
            Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_InsideGanonCastle_0150_L_03'})
        }

        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C03_Navi', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0150_C03', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0150_C03', 'Frames': 0, 'IsWaitEnd': True})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginalPosition', 'SceneName': 'C05-0.camera'})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'OriginalPosition', 'TargetActorKind': 1, 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': 0.0, 'UseDemoWait': False, 'PositionOffset': [-0.1647299975156784, -9.46306037902832, 17.81218910217285]})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'C05_Player', 'ClothWarpMode': 2})
    } {
        Dm_Weapon_Range_Longshot.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C05'})
    } {
        Dm_Shootable_HookLong.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C05'})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'OriginalPosition', 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': 0.0, 'PositionOffset': [-0.6853700280189514, -9.789649963378906, 19.287870407104492], 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Adult.EventPlayASWithClothWarp({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'ASName': 'C05_Zalda', 'IsAnimeDriven': False, 'ClothWarpMode': 2})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': 2, 'Position': [25.48699951171875, 188.0, 20.357999801635742], 'IsWaitEnd': False, 'YAngle': 134.697998046875})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C05_Navi', 'IsAnimeDriven': False, 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C06() {

    fork {

        fork {
            EventCamera.EventTriggerRequestEnduringCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 4, 'Power': 0.05000000074505806})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginalPosition', 'SceneName': 'C06-0.camera'})
        } {
            EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0150_C06', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0150_C06', 'IsWaitEnd': True, 'Frames': 119})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': 2, 'YAngle': 134.697998046875, 'Position': [29.889999389648438, 181.60000610351562, 17.389999389648438], 'IsWaitEnd': False})
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C06Navi', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True})
            Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0})
        }


        fork {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 1.5})
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        } {
            EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0150_C06', 'Frames': 20, 'IsWaitEnd': True, 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0150_C06_2'})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'OffsetType': -1, 'IsHomePosition': True, 'ArrivedASCommand': 'Wait', 'IsNearOffset': False, 'IsUseAfterPlayerTurn': True, 'IsWaitEnd': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        }

        EventWorldManagerController[Light].EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'C06_Player', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerResetLayerHitMask()
    } {
        Dm_Weapon_Range_Longshot.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C06'})
        Dm_Weapon_Range_Longshot.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Shootable_HookLong.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C06'})
        Dm_Shootable_HookLong.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayASWithClothWarp({'ClothWarpMode': 1, 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C06_Zalda'})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 100})
        VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0150:Dm_InsideGanonCastle_0150_Z_02', 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0})
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 80})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        EventSystemActor[VFX_Zelda].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Hylia_Zelda_Adult.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Land'})
    } {
        EventSystemActor[VFX_Player].EventWait({'IsWaitEnd': True, 'Frames': 48})
        Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Land'})
    }

}
