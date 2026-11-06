-------- EventFlow: Dm_InsideGanonCastle_0170 --------

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0170/Dm_InsideGanonCastle_0170_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0170_Npc_Hylia_WU_Zelda_Adult.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventAS': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0170/Dm_InsideGanonCastle_0170/workspace.pp__ModelProject.gyml', 'IsGrounding': False}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerUnequip']
queries: []
params: {'IsGrounding': True, 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0170_Player_Adult.root.as', 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0170/Dm_InsideGanonCastle_0170_Player_Adult/workspace.pp__ModelProject.gyml'}

Actor: Obj_GanonCastle_CastleGate_A_02
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0170/Dm_InsideGanonCastle_0170_Obj_GanonCastle_CastleGate_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0170_Obj_GanonCastle_CastleGate.root.as'}

Actor: Dm_Locator[BasePoint_Loc]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Fade]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventTriggerNaviWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerStartVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[controller_shake]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[controller_shake_02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Bloom]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[zelda_face]
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartRoomSend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Light]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {

    call C00()


    call C01()


    call C02()

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': True, 'SceneName': 'C02-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True, 'TargetActorName': ''})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C02_zelda', 'IsAllSlot': True})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -90.0, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'UseDemoWait': False, 'Position': [-92.40088653564453, 166.75999450683594, -0.8163300156593323], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C02_Player', 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': True})
    } {
        Obj_GanonCastle_CastleGate_A_02.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C02_CastleGate', 'IsAllSlot': True})
    } {
        EventEffectEmitter.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventSystemActor[Fade].EventWait({'Frames': 644, 'IsWaitEnd': True})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 564})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'BgmLocalProperty_BGM_EscapeFromGanonTower', 'Index': -1})
    } {
        GameSystemActor[controller_shake_02].EventWait({'IsWaitEnd': True, 'Frames': 300})
        GameSystemActor[controller_shake].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_BuBuBu'})
        GameSystemActor[controller_shake_02].EventWait({'IsWaitEnd': True, 'Frames': 170})
        GameSystemActor[controller_shake].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Horse_Large'})
    } {
        Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'IsWaitEnd': False, 'offset': [-0.4000000059604645, 0.20000000298023224, 0.0]})
    } {
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'C01_zelda', 'LocationalLightCreateType': 0, 'EditIntensity': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': True, 'FrameTransitionCount': 5, 'EditColor': True, 'Color': [1.2599999904632568, 1.0, 0.30000001192092896], 'EditSourceRadius': False, 'Intensity': 0.0})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True, 'TargetActorName': '', 'SceneName': 'C01-0'})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': False, 'ASName': 'C01_zelda', 'IsWaitEnd': False, 'ForceFadeInFrame': 1.0})
    } {
        EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Npc_Hylia_Zelda_Adult', 'InstanceName': '', 'IsWaitEnd': False, 'ELinkKeyName': 'Dm_InsideGanonCastle_0170_C01'})
    } {
        SoundSystemActor.EventTriggerSoundStartRoomSend({'VoiceMode': 1, 'CommandLife': 0})
    } {
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 76})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0170:Dm_InsideGanonCastle_0170_000_c', 'MessageDemoPosType': 0})
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 224})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0170:Dm_InsideGanonCastle_0170_001_b', 'MessageDemoPosType': 0})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -90.0, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'UseDemoWait': False, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [-95.08999633789062, 166.75999450683594, 0.23000000417232513]})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        EventWorldManagerController[zelda_face].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0170_C02', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0170_C02', 'Frames': 0})
    } {
        EventSystemActor[Light].EventWait({'IsWaitEnd': True, 'Frames': 355})

        fork {
            PostProcessingActor.EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Hylia_Zelda_Adult', 'InstanceName': '', 'OffsetBase': 0, 'LightHash': 'C01_zelda', 'PositionOffset': [-2.0, 3.6480000019073486, -0.18799999356269836], 'LightType': 1, 'Direction': [0.6159999966621399, -0.7450000047683716, 0.25699999928474426], 'InnerAngle': 90.0, 'OuterAngle': 90.0})
        } {
            PostProcessingActor.EventEditLocationalLight({'LightHash': 'C01_zelda', 'LocationalLightCreateType': 0, 'EditIntensity': True, 'EditColor': True, 'Color': [1.2599999904632568, 1.0, 0.30000001192092896], 'SourceRadius': 40.0, 'EditSourceRadius': True, 'IsFrameTransition': True, 'FrameTransitionCount': 15, 'Intensity': 15000.0})
        }

    } {
        EventSystemActor[Bloom].EventWait({'IsWaitEnd': True, 'Frames': 90})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0170_C02', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0170_Bloom_A', 'Frames': 100})
        EventSystemActor[Bloom].EventWait({'IsWaitEnd': True, 'Frames': 100})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0170_Bloom_A', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0170_Bloom_B', 'Frames': 60})
    } {
        Npc_Navi.EventTriggerNaviWarpToTargetPosAndRot({'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-95.08999633789062, 166.75999450683594, 0.23000000417232513]})
    }

    PostProcessingActor.EventNorifyCutChangeForGraphics()
}

void C00() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        Dm_Locator[BasePoint_Loc].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'ClothWarpMode': -1, 'Position': [-95.08000183105469, 166.75999450683594, -0.07999999821186066]})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': 'BasePoint_Loc', 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': -90.0, 'ClothWarpMode': 2, 'PositionOffset': [3.6500000953674316, 0.0, 0.0]})
    }

    PostProcessingActor.EventNorifyCutChangeForGraphics()
}
