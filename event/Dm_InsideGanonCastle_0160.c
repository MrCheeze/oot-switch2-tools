-------- EventFlow: Dm_InsideGanonCastle_0160 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0160_Player_Adult.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0160_Npc_Hylia_WU_Zelda_Adult.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[HomePos]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Land_CrumblingGanonCastle_A_04
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_Land_CrumblingGanonCastle_A_04/workspace.pp__ModelProject.gyml', 'UseEventAS': '', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Stalfos_Haribote[B]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Stalfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0160_Enemy_Stalfos_Haribote.root.as'}

Actor: Enemy_Stalfos_Haribote[A]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Stalfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0160_Enemy_Stalfos_Haribote.root.as'}

Actor: Enemy_Dinolfos_Haribote[A]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Dinolfos/workspace.pp__ModelProject.gyml'}

Actor: Enemy_Stalfos_Haribote[C]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Stalfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0160_Enemy_Stalfos_Haribote.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Enemy_Dinolfos_Haribote[B]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Dinolfos/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない'}

Actor: Enemy_Dinolfos_Haribote[C]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Dinolfos/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない'}

Actor: Enemy_Bubble_Green_Haribote[D]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Bubble/workspace.pp__ModelProject.gyml'}

Actor: Enemy_Bubble_Green_Haribote[A]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Bubble/workspace.pp__ModelProject.gyml'}

Actor: Enemy_Bubble_Green_Haribote[B]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Bubble/workspace.pp__ModelProject.gyml'}

Actor: Enemy_Bubble_Green_Haribote[C]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Bubble/workspace.pp__ModelProject.gyml'}

Actor: Enemy_Bubble_Green_Haribote[E]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Enemy_Bubble/workspace.pp__ModelProject.gyml'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Npc_Navi/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[10]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerStartVoice', 'EventTriggerCloseDemoScreen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Voice]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Shindou]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor[Capture]
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor[Light]
entrypoint: None()
actions: ['EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[PointLight_Pos]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0160/Dm_InsideGanonCastle_0160_Dm_Locator/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 1}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerSoundStartRoomSend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C00()


    call C01()


    call C05()


    call C06()


    call C07()


    call C010()

}

void C01() {

    fork {
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'HomePos', 'IsWaitEnd': False, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C01-Npc_Navi-A-0', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': 'HomePos', 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'YAngle': -88.36399841308594, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [0.20543000102043152, -6.5, -1.8846299648284912]})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C01', 'IsAnimeDriven': False, 'IsAllSlot': True})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'TargetActorKind': 1, 'PositionOffset': [0.9221500158309937, 0.0, -0.29409000277519226], 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'YAngle': -65.0, 'UseDemoWait': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01', 'UseAnmDriven': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor[Voice].EventWait({'Frames': 1, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'RootType': 1, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_04.EventPlayAS({'ASName': 'C01-Dm_Land_CrumblingGanonCastle_A_04-A-0', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0160:Dm_InsideGanonCastle_0160And0170_Z_01', 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0})
        EventSystemActor.EventWait({'Frames': 54, 'IsWaitEnd': True})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0160:Dm_InsideGanonCastle_0160And0170_Z_08', 'MessageDemoPosType': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 92})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_InsideGanonCastle_0160And0170_L_01'})
        } {
            VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0160:Dm_InsideGanonCastle_0160And0170_Z_02', 'MessageDemoPosType': 0})
        }

    } {
        Dm_Land_CrumblingGanonCastle_A_04.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0160_C01'})
    } {
        EventSystemActor[Shindou].EventWait({'Frames': 69, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_DoDon', 'Length': 0.0})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 92})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 0.0})
    } {
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'EndFNumber': 40.0, 'StartFNumber': 40.0, 'RequiredFrame': 177, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 2.0, 'EndDistance': 2.0, 'IsEnableNear': False, 'EndFNumber': 15.0, 'RequiredFrame': 0, 'StartFNumber': 15.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C01', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C01', 'IsWaitEnd': True, 'Frames': 0})
        EventSystemActor[10].EventWait({'IsWaitEnd': True, 'Frames': 59})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C02', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C02'})
    } {
        SoundSystemActor.EventTriggerSoundStartRoomSend({'VoiceMode': 1, 'CommandLife': 0})
    }

    Dm_Land_CrumblingGanonCastle_A_04.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_InsideGanonCastle_0160', 'SLinkKey': '', 'IsKill': False})
}

void C010() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 1, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C10-0'})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': '1F_HoldEnemyPlayer', 'ASCommand': 'EvtWait', 'UseDemoWait': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 22, 'ForceGetUpDuringSleep': True, 'InstanceName': '1F_HoldEnemy', 'ArrivalState': 1, 'IsWaitEnd': False, 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsAnimeDriven': True, 'ASName': 'Act_Hold', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {
        Enemy_Stalfos_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [11.487000465393066, -6.5, -11.378000259399414], 'YAngle': -64.39099884033203, 'ClothWarpMode': -1})
        Enemy_Stalfos_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10A'})
    } {
        Enemy_Stalfos_Haribote[B].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -39.49399948120117, 'PositionOffset': [9.581999778747559, -6.5, -12.348999977111816], 'ClothWarpMode': -1})
        Enemy_Stalfos_Haribote[B].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10B'})
    } {
        Enemy_Stalfos_Haribote[C].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'HomePos', 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [13.350000381469727, -4.400000095367432, -18.799999237060547], 'YAngle': -30.0})
        Enemy_Stalfos_Haribote[C].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10C', 'IsAnimeDriven': True})
    } {
        Enemy_Bubble_Green_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [12.395999908447266, -3.2939999103546143, -12.996000289916992], 'YAngle': -55.32099914550781, 'ClothWarpMode': -1})
        Enemy_Bubble_Green_Haribote[A].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Enemy_Bubble-A-0', 'IsAnimeDriven': True})
    } {
        Enemy_Bubble_Green_Haribote[B].EventWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'IsWaitEnd': False, 'PositionOffset': [14.708000183105469, 0.5929999947547913, -21.57900047302246], 'YAngle': -28.99799919128418, 'ClothWarpMode': -1})
        Enemy_Bubble_Green_Haribote[B].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Enemy_Bubble-B-0', 'IsAnimeDriven': True})
    } {
        Enemy_Bubble_Green_Haribote[C].EventWarpToTargetActor({'InstanceName': 'HomePos', 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'IsWaitEnd': False, 'PositionOffset': [9.380000114440918, -2.7780001163482666, -16.76799964904785], 'YAngle': -15.359999656677246, 'ClothWarpMode': -1})
        Enemy_Bubble_Green_Haribote[C].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Enemy_Bubble-C-0', 'IsAnimeDriven': True})
    } {
        Enemy_Bubble_Green_Haribote[D].EventWarpToTargetActor({'InstanceName': 'HomePos', 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'IsWaitEnd': False, 'PositionOffset': [12.031000137329102, -2.434999942779541, -11.442000389099121], 'YAngle': -75.97200012207031, 'ClothWarpMode': -1})
        Enemy_Bubble_Green_Haribote[D].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Enemy_Bubble-D-0', 'IsAnimeDriven': True})
    } {
        Enemy_Bubble_Green_Haribote[E].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'HomePos', 'IsWaitEnd': False, 'YAngle': -28.99799919128418, 'ClothWarpMode': -1, 'PositionOffset': [17.23200035095215, -0.0017999999690800905, -23.700000762939453]})
        Enemy_Bubble_Green_Haribote[E].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Enemy_Bubble-E-0', 'IsAnimeDriven': True})
    } {
        Enemy_Dinolfos_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [13.800000190734863, -4.400000095367432, -16.200000762939453], 'YAngle': -25.0})
        Enemy_Dinolfos_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Enemy_Dinolfos-A-0'})
    } {
        Enemy_Dinolfos_Haribote[B].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'TargetActorKind': 1, 'InstanceName': 'HomePos', 'IsWaitEnd': False, 'YAngle': -50.0, 'ClothWarpMode': -1, 'PositionOffset': [15.776659965515137, -5.236000061035156, -14.126270294189453]})
        Enemy_Dinolfos_Haribote[B].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Enemy_Dinolfos-B-0'})
    } {
        Enemy_Dinolfos_Haribote[C].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'HomePos', 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [15.121540069580078, -6.504000186920166, -5.539219856262207], 'YAngle': -155.61599731445312})
        Enemy_Dinolfos_Haribote[C].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Enemy_Dinolfos-C-0'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsNearOffset': False, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsHomePosition': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'offset': [-0.4099999964237213, 0.0, 0.0], 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 10})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0160:Dm_InsideGanonCastle_0160And0170_Z_07'})
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 165})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_04.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C10-Dm_Land_CrumblingGanonCastle_A_04-A-0'})
        Dm_Land_CrumblingGanonCastle_A_04.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C10', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C10'})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 190})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C10', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C10Temp', 'Frames': 40})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 42})
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': True})
    } {
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
    } {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePos', 'SceneName': 'C05-0'})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'TargetActorKind': 1, 'ASCommand': 'EvtWait', 'YAngle': -30.0, 'IsWaitEnd': False, 'PositionOffset': [-0.4000000059604645, -6.485000133514404, 2.8499999046325684], 'UseDemoWait': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C05', 'IsAllSlot': True, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': 'HomePos', 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'YAngle': -10.0, 'IsWaitEnd': False, 'PositionOffset': [0.30000001192092896, -6.485000133514404, -1.25], 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C05', 'IsAllSlot': True, 'IsAnimeDriven': False})
    } {
        Enemy_Stalfos_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [12.92529010772705, -4.385479927062988, -17.20479965209961], 'YAngle': -32.801998138427734, 'ClothWarpMode': -1})
        Enemy_Stalfos_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C05A'})
    } {
        Enemy_Stalfos_Haribote[B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dinolfos_Haribote[A].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[A].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Stalfos_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dinolfos_Haribote[B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dinolfos_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[D].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[E].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_04.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C05-Dm_Land_CrumblingGanonCastle_A_04-A-0'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 83})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0160:Dm_InsideGanonCastle_0160And0170_Z_03'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0160:Dm_InsideGanonCastle_0160And0170_Z_04'})
    } {
        Dm_Land_CrumblingGanonCastle_A_04.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0160_C05'})
    } {
        EventSystemActor[Shindou].EventWait({'Frames': 37, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doka'})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_InsideGanonCastle_0160And0170_L_02'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C05', 'Frames': 60, 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C05A'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 70, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartDistance': 1.2999999523162842, 'EndDistance': 1.2999999523162842, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'C05_Zelda_Link_FallDwon'})
    }

}

void C07() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePos', 'SceneName': 'C07-0', 'RootType': 1})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'UseAnmDriven': False, 'ASCommand': 'C07', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': 'HomePos', 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'YAngle': 135.0, 'PositionOffset': [5.150000095367432, -6.5, -7.349999904632568], 'ClothWarpMode': 2, 'IsWaitEnd': False})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': False, 'ASName': 'C07'})
    } {
        Enemy_Stalfos_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -39.255001068115234, 'ClothWarpMode': -1, 'PositionOffset': [14.248900413513184, -4.988460063934326, -17.681520462036133]})
        Enemy_Stalfos_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C07A'})
    } {
        Enemy_Stalfos_Haribote[B].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -70.0, 'ClothWarpMode': -1, 'PositionOffset': [15.30385971069336, -4.868100166320801, -15.10634994506836]})
        Enemy_Stalfos_Haribote[B].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C07B'})
    } {
        Enemy_Dinolfos_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'YAngle': -30.0, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [11.891500473022461, -4.488979816436768, -19.011770248413086]})
        Enemy_Dinolfos_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C07-Enemy_Dinolfos-A-0'})
    } {
        Enemy_Bubble_Green_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Enemy_Bubble_Green_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C07-Enemy_Bubble-A-0'})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C07-Npc_Navi-A-0', 'ForceFadeInFrame': 0.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C07', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C07', 'Frames': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 69})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C08', 'Frames': 30, 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C08A'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C09', 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C08', 'Frames': 15})
    } {
        EventSystemActor[Shindou].EventWait({'Frames': 168, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Byeen', 'Length': 0.0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Hylia_Zelda_Adult_EnableHoldEnemy', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Zelda_Adult_EnableBarrier'})
    } {
        Enemy_Dinolfos_Haribote[B].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'TargetActorKind': 1, 'InstanceName': 'HomePos', 'IsWaitEnd': False, 'PositionOffset': [20.360179901123047, -6.584400177001953, -12.035050392150879], 'YAngle': -99.08300018310547, 'ClothWarpMode': -1})
        Enemy_Dinolfos_Haribote[B].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C07-Enemy_Dinolfos-B-0'})
    } {
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()

        fork {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 70, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 91.0, 'EndFNumber': 91.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': True, 'SourceRadius': 0.5, 'LightHash': 'PointLight_Zelda', 'Intensity': 8000.0, 'FrameTransitionCount': 0, 'Color': [1.7000000476837158, 0.699999988079071, 0.3499999940395355]})
        }

        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()

        fork {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 0.5, 'EndDistance': 0.5, 'StartFNumber': 230.0, 'EndFNumber': 230.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'RequiredFrame': 63, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': True, 'SourceRadius': 0.5, 'LightHash': 'PointLight_Zelda', 'FrameTransitionCount': 0, 'Intensity': 500.0, 'Color': [1.850000023841858, 0.699999988079071, 0.3499999940395355]})
        }

        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()

        fork {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 60, 'EndDistance': 4.0, 'StartBluarLevel': 1.5, 'StartDistance': 5.0, 'EndBluarLevel': 1.0, 'EndFNumber': 45.0, 'StartFNumber': 20.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': True, 'SourceRadius': 0.5, 'LightHash': 'PointLight_Zelda', 'Color': [1.850000023841858, 0.699999988079071, 0.3499999940395355], 'FrameTransitionCount': 0, 'Intensity': 0.0})
        }

    } {
        EventSystemActor[10].EventWait({'IsWaitEnd': True, 'Frames': 100})
        EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Npc_Hylia_Zelda_Adult', 'IsWaitEnd': False, 'InstanceName': '', 'ELinkKeyName': 'Dm_StartBarrier'})
    } {
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 25})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0160:Dm_InsideGanonCastle_0160And0170_Z_05'})
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 73})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0160:Dm_InsideGanonCastle_0160And0170_Z_06'})
    } {
        Dm_Land_CrumblingGanonCastle_A_04.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C07-Dm_Land_CrumblingGanonCastle_A_04-A-0'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'C07_Enemys_02', 'IsIgnoreDucking': False})
    }

}

void C00() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsWaitEnd': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.3700000047683716, 1.9600000381469727, -2.1600000858306885], 'AtVector': [-0.1599999964237213, 1.440000057220459, -0.9599999785423279], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.5, 'MoveTime': 50, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'IsRumbleController': True, 'LoopEndCount': 1, 'Power': 3.0, 'Pattern': 1})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'IsRumbleController': True, 'LoopEndCount': 1, 'Power': 3.0, 'Pattern': 2})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 9, 'LoopEndCount': 2, 'Power': 1.5, 'IsRumbleController': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_LookDown'})
    } {
        Dm_Locator[HomePos].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_InsideGanonCastle_0160', 'IsWaitEnd': True, 'NotChangeRot': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePos', 'SceneName': 'C06-0'})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'TargetActorKind': 1, 'ASCommand': 'EvtWait', 'YAngle': -150.0, 'PositionOffset': [0.0, -6.199999809265137, 0.0], 'UseDemoWait': False, 'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0, 'ASCommand': 'C06-Player_Adult-A-0', 'UseAnmDriven': True})
    } {
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': 'HomePos', 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'YAngle': 135.0, 'PositionOffset': [5.150000095367432, -6.5, -7.349999904632568], 'IsWaitEnd': True, 'ClothWarpMode': -1})
    } {
        Enemy_Stalfos_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [12.92529010772705, -4.385479927062988, -17.20479965209961], 'YAngle': -32.801998138427734, 'ClothWarpMode': -1})
        Enemy_Stalfos_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C06-Enemy_Stalfos-A-0'})
    } {
        Enemy_Stalfos_Haribote[B].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [14.573929786682129, -5.749149799346924, -12.526180267333984], 'YAngle': -95.0, 'ClothWarpMode': -1})
        Enemy_Stalfos_Haribote[B].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C06-Enemy_Stalfos-B-0'})
    } {
        Enemy_Dinolfos_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'YAngle': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [10.940329551696777, -5.027919769287109, -24.301250457763672]})
        Enemy_Dinolfos_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C06-Enemy_Dinolfos-A-0'})
    } {
        Enemy_Bubble_Green_Haribote[A].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': -1})
        Enemy_Bubble_Green_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C06-Enemy_Bubble-A-0'})
    } {
        Enemy_Stalfos_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dinolfos_Haribote[B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dinolfos_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[D].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[E].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndBluarLevel': 2.0, 'StartBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartDistance': 15.0, 'EndDistance': 10.0, 'RequiredFrame': 205, 'StartFNumber': 12.0, 'EndFNumber': 23.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndBluarLevel': 2.0, 'StartBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'EndDistance': 7.5, 'RequiredFrame': 10, 'EndFNumber': 42.0, 'StartDistance': 10.0, 'StartFNumber': 23.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Land_CrumblingGanonCastle_A_04.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C06-Dm_Land_CrumblingGanonCastle_A_04-A-0', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor[Shindou].EventWait({'Frames': 154, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dohoon'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0160_C06', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0160_C06'})
    } {
        Dm_Locator[PointLight_Pos].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 1, 'PositionOffset': [4.230000019073486, -4.559999942779541, -3.8299999237060547], 'YAngle': 0.0, 'ClothWarpMode': -1})
        PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightType': 0, 'ActorName': 'Dm_Locator', 'Direction': [0.0, 0.0, 0.0], 'InstanceName': 'PointLight_Pos', 'PositionOffset': [0.0, 0.0, 0.0], 'LightHash': 'PointLight_Zelda'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'C06_Enemys_01', 'IsIgnoreDucking': False})
    }

}
