-------- EventFlow: Dm_FinalBattle_0010 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010/workspace.pp__ModelProject.gyml'}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventAIScheduleWarpToAnchor', 'EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Npc_Hylia_WU_Zelda_Adult.root.as'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventPlayerUnequip', 'EventTriggerXLinkFadeByKey', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventPlayerDrawn', 'EventTriggerEquipmentUserRequestChangeState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Player_Adult.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Player_Adult/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventOpenDoCommand', 'EventCloseDoCommand', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput', 'EventCloseMessageDialog', 'EventTriggerControllerRumble']
queries: ['EventQueryIsDreamWorld']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerNaviWarpToPlayerHomePosition', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Npc_Navi.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3}

Actor: Dm_Locator[OriginPosition]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Dm_Locator/workspace.pp__ModelProject.gyml', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventAS': ''}

Actor: Dm_Locator[MasterSword]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor', 'EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Dm_Locator.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: Weapon_Sword_Master
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[GameDataWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: WorldMgrThunderMgr
entrypoint: None()
actions: ['EventTriggerWorldMgrThunderMgrChangePatternKey', 'EventTriggerWmThunderMgrSetIsUpdate', 'EventTriggerWmThunderOneShot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Ganon_SecondHalfBattle
entrypoint: None()
actions: ['EventPlayAS', 'EventDungeonBossWarpToReferencedAnchor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventDungeonBossSetConsiderBattlePresentation', 'EventPlayASWithClothWarp', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode', 'EventTriggerSoundChangeForbidEmitFootStep', 'EventTriggerSoundChangeAllowEmitFootStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Enemy_DungeonBoss_Ganon/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Enemy_DungeonBoss_Ganon.root.as'}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerStartVoice', 'EventTriggerCloseDemoScreen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Effect]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor[Effect]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Land_GanonCastle_FinalBattleField_BigRubble_A_01[1]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Land_GanonCastle_FinalBattleField_BigRubble_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Land_GanonCastle_FinalBattleField_BigRubble_A.root.as', 'EventMemberCreateMethod': 2}

Actor: Land_GanonCastle_FinalBattleField_BigRubble_A_01[2]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Land_GanonCastle_FinalBattleField_BigRubble_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Land_GanonCastle_FinalBattleField_BigRubble_A.root.as', 'EventMemberCreateMethod': 2}

Actor: EventWorldManagerController[Lighting]
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_GanonCastle_FireWallCircle_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: VoicePlayActor[Ganon]
entrypoint: None()
actions: ['EventTriggerStartVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Triforce]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Dm_Locator.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: EventSystemActor[Shindou]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Ganon_Crystal
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Enemy_DungeonBoss_Ganon_Crystal/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Enemy_DungeonBoss_Ganon.root.as'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[Env]
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart']
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

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetChangeWindSpeedForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Ganon
entrypoint: None()
actions: ['EventTriggerDeathSignal']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0010/Dm_FinalBattle_0010_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0010_Npc_Navi.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

void EntryPoint0() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})

    call C01()


    call C02()


    call C05()


    call C08()


    call C09()


    call C10()


    call C11()


    call C12()


    call C15()


    fork {

        call C18()

    } {
        EventWorldManagerController.Event_SetChangeWindSpeedForFlowchart({'Speed': 9.0, 'IsWaitEnd': False})
    } {
        Enemy_DungeonBoss_Ganon.EventTriggerDeathSignal()
        if !GameSystemActor.EventQueryIsDreamWorld() {
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        } else {
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        }
    }

}

void C01() {
    WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': False})
    WorldMgrThunderMgr.EventTriggerWorldMgrThunderMgrChangePatternKey({'PatternKey': 'Dm_FinalBattle_A'})
    Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventDungeonBossWarpToReferencedAnchor({'InstanceName': 'Dm_FinalBattle_0010_Locator', 'IsWaitEnd': True})
    Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventDungeonBossSetConsiderBattlePresentation()
    Dm_Locator[OriginPosition].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'IsWaitEnd': True, 'InstanceName': 'Dm_FinalBattle_0010_Locator'})

    fork {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'OriginPosition', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'TargetActorKind': 1, 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C02', 'IsWaitEnd': False})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': False})
    } {
        Dm_Locator[MasterSword].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_FinalBattle_0010_Locator', 'IsWaitEnd': True, 'NotChangeRot': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [3.4968700408935547, 0.0, -8.706469535827637], 'InstanceName': 'OriginPosition', 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'YAngle': 180.0})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginPosition'})
    } {
        UISystemActor.EventEventFadeIn({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    } {
        Dm_Locator[Effect].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_FinalBattle_0010_Locator', 'IsWaitEnd': True, 'NotChangeRot': False})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': 'WeakPoint_L_Darkness'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': 'WeakPoint_R_Darkness'})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0010_Tail_Break', 'SLinkKey': ''})
    } {
        Land_GanonCastle_FinalBattleField_BigRubble_A_01[1].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Land_GanonCastle_FinalBattleField_BigRubble_A_01[2].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 115})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_000_baab'})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        Enemy_DungeonBoss_Ganon_Crystal.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C01_Tail', 'ForceFadeInFrame': 0.0})
    } {
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C01', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C01', 'IsWaitEnd': True, 'Frames': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 6, 'FadeTime': 0.0})
    } {
        Dm_Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C05-0', 'TargetActorInstanceName': 'OriginPosition'})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayASWithClothWarp({'IsAnimeDriven': False, 'ASName': 'C05', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True, 'Partial': '', 'ClothWarpMode': 2})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_000_c'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_001_c'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        Dm_Locator[MasterSword].EventPlayAS({'ASName': 'C05-Dm_Locator-A-0', 'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Locator[Effect].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C05-Dm_Locator-B-0'})
    } {
        Dm_Locator[Effect].EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0010_FireWall', 'SLinkKey': ''})
    } {

        fork {
            EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C05', 'IsWaitEnd': True, 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C05', 'Frames': 0})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'SourceRadius': 0.5, 'LightHash': 'PointLight_Fire', 'Color': [1.0, 0.30000001192092896, 0.15000000596046448], 'IsFrameTransition': False, 'Intensity': 10000.0})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'SourceRadius': 0.5, 'IsFrameTransition': False, 'LightHash': 'PointLight_Sword', 'Intensity': 3300.0, 'Color': [1.0, 0.4000000059604645, 0.20000000298023224]})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'IsFrameTransition': False, 'LightHash': 'PointLight_BG', 'Color': [1.0, 0.30000001192092896, 0.15000000596046448], 'SourceRadius': 1.0, 'Intensity': 4000.0})
        }

        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C05', 'IsWaitEnd': True, 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C05A', 'Frames': 20})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 3.0, 'StartFNumber': 30.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 20, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'EndDistance': 3.4000000953674316, 'EndFNumber': 49.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': True, 'SourceRadius': 0.5, 'LightHash': 'PointLight_Fire', 'Color': [1.0, 0.30000001192092896, 0.15000000596046448], 'FrameTransitionCount': 20, 'Intensity': 4000.0})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': False, 'LightHash': 'PointLight_BG', 'Color': [1.0, 0.30000001192092896, 0.15000000596046448], 'SourceRadius': 0.699999988079071, 'Intensity': 900.0, 'FrameTransitionCount': 20})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.5, 'IsFrameTransition': False, 'LightHash': 'PointLight_Sword', 'FrameTransitionCount': 20, 'Intensity': 2500.0, 'Color': [1.0, 0.4000000059604645, 0.20000000298023224]})
        }

    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'C08'})
    } {
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
    }

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginPosition'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'ASName': 'C02', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02', 'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C02', 'IsWaitEnd': True})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'OriginPosition', 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 75.0, 'IsWaitEnd': True, 'PositionOffset': [38.0, 0.0, 0.3499999940395355], 'ClothWarpMode': -1})
    } {
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 141})
        Obj_GanonCastle_FireWallCircle_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Chemical_Fire', 'SLinkKey': '', 'IsKill': False})
        Obj_GanonCastle_FireWallCircle_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0010_FireWallLow', 'SLinkKey': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_000_bab'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 145})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_000_bb'})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        Weapon_Sword_Master.EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'InstanceName': 'MasterSword'})
        Dm_Locator[MasterSword].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02-Dm_Locator-A-0'})
    } {
        WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': True})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 75})
        WorldMgrThunderMgr.EventTriggerWorldMgrThunderMgrChangePatternKey({'PatternKey': 'Dm_FinalBattle_A'})
        WorldMgrThunderMgr.EventTriggerWmThunderOneShot({'PatternKey': 'Dm_FinalBattle_A'})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 50})
        WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 7.0, 'EndDistance': 7.0, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'RequiredFrame': 156, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 7.0, 'EndDistance': 7.0, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'RequiredFrame': 0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C02', 'Frames': 0, 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C02'})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 74})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C02', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C02A', 'Frames': 0})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 61})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 6, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C02A', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C03'})
        EventSystemActor[Shindou].EventWait({'Frames': 120, 'IsWaitEnd': True})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 45, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C03', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C03A'})
    } {
        PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightType': 0, 'ActorName': 'Dm_Locator', 'Direction': [0.0, 0.0, 0.0], 'LightHash': 'PointLight_Fire', 'InstanceName': 'OriginPosition', 'PositionOffset': [34.0, 2.0, -0.550000011920929]})
        PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightType': 0, 'ActorName': 'Dm_Locator', 'Direction': [0.0, 0.0, 0.0], 'InstanceName': 'OriginPosition', 'LightHash': 'PointLight_Sword', 'PositionOffset': [37.75, 1.7999999523162842, -0.699999988079071]})
        PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightType': 0, 'ActorName': 'Dm_Locator', 'Direction': [0.0, 0.0, 0.0], 'InstanceName': 'OriginPosition', 'LightHash': 'PointLight_BG', 'PositionOffset': [35.75, 0.25, -0.05000000074505806]})
    } {
        Enemy_DungeonBoss_Ganon_Crystal.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C09() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginPosition', 'SceneName': 'C09-0'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayASWithClothWarp({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'ASName': 'C09', 'ClothWarpMode': 2})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'ASCommand': 'C09', 'ClothWarpMode': 2, 'ForceFadeFrame': 0.0})
    } {
        Dm_Locator[MasterSword].EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C09-Dm_Locator-A-0', 'ForceFadeInFrame': 0.0})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C09', 'ForceFadeInFrame': 0.0})
    } {
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        EventSystemActor[Effect].EventWait({'Frames': 73, 'IsWaitEnd': True})
        Weapon_Sword_Master.EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0010_MasterSwordr_Stab_Ground', 'SLinkKey': ''})
    } {

        fork {
            EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C09', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C09', 'Frames': 0})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 1.5, 'EndDistance': 1.5, 'StartFNumber': 130.0, 'EndFNumber': 130.0, 'RequiredFrame': 0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        }

        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 47})

        fork {
            EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C09A', 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C09A'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartDistance': 1.100000023841858, 'EndDistance': 1.100000023841858, 'StartFNumber': 90.0, 'EndFNumber': 90.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'RequiredFrame': 60, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        }

        WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': True})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 1})
        WorldMgrThunderMgr.EventTriggerWorldMgrThunderMgrChangePatternKey({'PatternKey': 'Dm_FinalBattle_Top_B'})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            WorldMgrThunderMgr.EventTriggerWmThunderOneShot({'PatternKey': 'Dm_FinalBattle_Top_B'})
        } {
            EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C09B', 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C09B'})
        }

    } {
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Intensity': 0.0, 'SourceRadius': 0.5, 'LightHash': 'PointLight_Fire', 'Color': [1.0, 0.30000001192092896, 0.15000000596046448], 'IsFrameTransition': False, 'FrameTransitionCount': 0})
    } {
        PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightType': 0, 'ActorName': 'Dm_Locator', 'Direction': [0.0, 0.0, 0.0], 'InstanceName': 'OriginPosition', 'LightHash': 'PointLight_DoMasterSword', 'PositionOffset': [10.300000190734863, 0.30000001192092896, -2.0]})
    }

}

void C10() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C10-0', 'TargetActorInstanceName': 'OriginPosition', 'IsWaitEnd': False})
    } {
        Dm_Locator[MasterSword].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C10-Dm_Locator-A-0_Lp', 'ForceFadeInFrame': 0.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C10', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        UISystemActor.EventOpenDoCommand({'DoActionType': 13, 'IsWaitEnd': True})
        GameSystemActor.EventWaitForKeyInput({'IsWaitEnd': True, 'KeyInputValue': 0})
    } {
        Dm_Npc_Navi.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'OriginPosition', 'TargetActorKind': 1, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Dm_Npc_Navi.EventPlayAS({'ASName': 'C10', 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': False, 'IsAnimeDriven': False})
    } {
        Npc_Hylia_Zelda_Adult.EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1, 'AnchorType': 6})
    } {
        Weapon_Sword_Master.EventTriggerModelBind({'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, 0.0, 0.0], 'InstanceName': '', 'ActorName': 'Player_Event', 'BoneName': 'Weapon_L'})
    } {
        WorldMgrThunderMgr.EventTriggerWmThunderOneShot({'PatternKey': 'Dm_FinalBattle_Top_B'})
    } {
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'IsFrameTransition': False, 'LightHash': 'PointLight_DoMasterSword', 'Color': [0.4300000071525574, 1.0700000524520874, 2.140000104904175], 'SourceRadius': 0.5, 'Intensity': 120.0})
    } {
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C10A', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C10A'})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C10A', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C10', 'IsWaitEnd': False, 'Frames': 15})
        WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'StartDistance': 1.100000023841858, 'EndDistance': 1.100000023841858, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartFNumber': 115.0, 'EndFNumber': 115.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C10_Do', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Dm_Locator[MasterSword].EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C10-Dm_Locator-A-0_Ed', 'ForceFadeInFrame': 0.0})
    } {
        UISystemActor.EventCloseDoCommand({'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 13})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_007_c'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_FinalBattle_0010_B', 'IsIgnoreDucking': False})
    }

}

void C11() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C11-0', 'TargetActorInstanceName': 'OriginPosition'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'IsAnimeDriven': True, 'ASName': 'C11', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C11', 'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ClothWarpMode': 2})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'C11', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Weapon_Sword_Master.EventTriggerModelBind({'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Player_Event', 'InstanceName': '', 'BoneName': 'Weapon_L', 'RotOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 81})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_008_bb'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
        VoicePlayActor[Ganon].EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_008_d'})
    } {

        fork {
            EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C11', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C11'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartDistance': 4.0, 'EndDistance': 4.0, 'RequiredFrame': 0, 'EndFNumber': 25.0, 'StartFNumber': 25.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        }

        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 84})

        fork {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartFNumber': 90.0, 'EndFNumber': 90.0, 'StartDistance': 1.399999976158142, 'EndDistance': 1.399999976158142, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        }

        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 75})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C11', 'Frames': 20, 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C11A'})
    } {
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'IsFrameTransition': False, 'LightHash': 'PointLight_DoMasterSword', 'Color': [0.4300000071525574, 1.0700000524520874, 2.140000104904175], 'SourceRadius': 0.5, 'Intensity': 0.0})
    } {
        Dm_Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginPosition', 'SceneName': 'C08-0'})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayASWithClothWarp({'ASName': 'C08', 'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ClothWarpMode': 2})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'OriginPosition', 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'YAngle': -90.0, 'PositionOffset': [13.560999870300293, 0.0, 0.03999999910593033]})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventDungeonBossWarpToReferencedAnchor({'InstanceName': 'Dm_FinalBattle_0010_Locator', 'IsWaitEnd': False})
    } {
        Weapon_Sword_Master.EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Hylia_Zelda_Adult', 'InstanceName': '', 'BoneName': 'Weapon_L'})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 169})
        Weapon_Sword_Master.EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'BoneName': 'Dm_Locator', 'ActorName': 'Dm_Locator', 'InstanceName': 'MasterSword', 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 38})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_002_c'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 92})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_005_c'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 46})
        Weapon_Sword_Master.EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0010_MasterSword_Debris_Rock_00', 'SLinkKey': ''})
    } {
        Dm_Locator[MasterSword].EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C08-Dm_Locator-A-0'})
    } {
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C08', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C08'})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 130})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C08', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C08A', 'Frames': 10})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 0.6000000238418579, 'EndDistance': 0.6000000238418579, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartFNumber': 190.0, 'EndFNumber': 190.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'RequiredFrame': 35, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 0.6000000238418579, 'EndDistance': 0.6000000238418579, 'RequiredFrame': 20, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'EndFNumber': 280.0, 'StartFNumber': 190.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 0.6000000238418579, 'EndDistance': 0.6000000238418579, 'EndFNumber': 315.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 20, 'StartFNumber': 280.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'IsFrameTransition': False, 'LightHash': 'PointLight_Sword', 'Color': [1.0, 0.550000011920929, 0.5], 'SourceRadius': 0.699999988079071, 'Intensity': 500.0})
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.5, 'LightHash': 'PointLight_Fire', 'Color': [1.0, 0.30000001192092896, 0.15000000596046448], 'IsFrameTransition': False, 'FrameTransitionCount': 0, 'Intensity': 1000.0})
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'IsFrameTransition': False, 'Color': [1.0, 0.550000011920929, 0.5], 'LightHash': 'PointLight_BG', 'SourceRadius': 3.0, 'Intensity': 0.0})
    }

}

void C12() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginPosition', 'SceneName': 'C12-0'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'ASName': 'C12'})
    } {
        Player_Event.EventPlayerDrawn({'EquipmentSlot': 4, 'IsDrawnImmediate': True, 'IsWaitEnd': True})
    } {
        Dm_Locator[Triforce].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_0010_Triforce_Ganon'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0010_Ganon_Awakening', 'SLinkKey': ''})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_0010_Ganon_EyeGlow_Loop'})
    } {
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 175})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_008_e'})
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 154})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_008_f'})
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 81})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_008_fb'})
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 145})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_008_g'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FinalBattleField_Cloud'})
        EventWorldManagerController[Env].Event_SetEnvPaletteForFlowchart({'EnvPaletteName': 'FinalBattleField_SecondHalf', 'IsWaitEnd': False, 'EnvTimeTableName': '', 'ChangeSpeed': 3})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FinalBattleField_ChangeENVForBoss', 'Index': -1, 'Value': True})
    } {
        Dm_Locator[Triforce].EventPlayAS({'ASName': 'C12-Dm_Locator-A-0', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
    } {
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 170})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doon'})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 149})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doon'})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 240})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C12', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C12', 'Frames': 0})
        WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 605})
        WorldMgrThunderMgr.EventTriggerWorldMgrThunderMgrChangePatternKey({'PatternKey': 'Dm_FinalBattle_C'})
        WorldMgrThunderMgr.EventTriggerWmThunderOneShot({'PatternKey': 'Dm_FinalBattle_C'})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C12', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C12A', 'Frames': 2})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartDistance': 2.799999952316284, 'EndDistance': 2.799999952316284, 'StartFNumber': 24.0, 'EndFNumber': 24.0, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 264})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartDistance': 2.799999952316284, 'RequiredFrame': 15, 'EndDistance': 5.0, 'StartFNumber': 24.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 145})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'EndDistance': 5.0, 'RequiredFrame': 30, 'StartDistance': 5.0, 'StartFNumber': 16.0, 'EndFNumber': 45.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    WorldMgrThunderMgr.EventTriggerWmThunderOneShot({'PatternKey': 'Dm_FinalBattle_C'})
}

void C15() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginPosition', 'SceneName': 'C15-0'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerSoundChangeForbidEmitFootStep()
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'ASName': 'C15'})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerSoundChangeAllowEmitFootStep()
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'C15', 'ClothWarpMode': 2})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C15'})
    } {
        Weapon_Sword_Master.EventTriggerModelBind({'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Player_Event', 'InstanceName': '', 'BoneName': 'Weapon_L', 'RotOffset': [0.0, 0.0, 0.0]})
    } {
        Dm_Locator[Triforce].EventPlayAS({'ASName': 'C15-Dm_Locator-A-0', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
    } {
        Dm_Locator[Triforce].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_0010_Triforce_Ganon', 'IsKill': False})
        Dm_Locator[Triforce].EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0010_Triforce', 'SLinkKey': ''})
    } {
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 215})
        Obj_GanonCastle_FireWallCircle_A_01.EventTriggerEmitXLink({'ELinkKey': 'Chemical_Fire', 'SLinkKey': ''})
        Obj_GanonCastle_FireWallCircle_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_FinalBattle_0010_FireWallLow', 'SLinkKey': '', 'IsKill': False})
        Weapon_Sword_Master.EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0010_Glow_MasterSword', 'SLinkKey': ''})
    } {
        Land_GanonCastle_FinalBattleField_BigRubble_A_01[2].EventDoNothing({'IsWaitEnd': True})
    } {
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 160})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
    } {

        fork {
            EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C15', 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C15', 'Frames': 0})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'EndDistance': 5.0, 'EndFNumber': 20.0, 'RequiredFrame': 0, 'StartDistance': 5.0, 'StartFNumber': 20.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }

        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 224})

        fork {
            EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C17', 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C17'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartDistance': 0.3799999952316284, 'EndDistance': 0.3799999952316284, 'StartFNumber': 350.0, 'EndFNumber': 350.0, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        }

        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 108})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'RequiredFrame': 25, 'EndDistance': 0.44999998807907104, 'EndFNumber': 350.0, 'StartDistance': 0.3799999952316284, 'StartFNumber': 350.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 25})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'EndDistance': 0.44999998807907104, 'StartFNumber': 350.0, 'StartDistance': 0.44999998807907104, 'EndFNumber': 400.0, 'RequiredFrame': 30, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {

        fork {
            PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightType': 0, 'ActorName': 'Dm_Locator', 'Direction': [0.0, 0.0, 0.0], 'InstanceName': 'OriginPosition', 'LightHash': 'PointLight_Link', 'PositionOffset': [9.550000190734863, 1.2999999523162842, -0.8500000238418579]})
        } {
            PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightType': 0, 'ActorName': 'Dm_Locator', 'Direction': [0.0, 0.0, 0.0], 'InstanceName': 'OriginPosition', 'LightHash': 'PointLight_Link2', 'PositionOffset': [9.25, 1.649999976158142, -1.1100000143051147]})
        }

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        fork {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'IsFrameTransition': False, 'SourceRadius': 0.5, 'LightHash': 'PointLight_Link', 'Intensity': 0.0, 'Color': [0.6000000238418579, 1.1200000047683716, 1.4500000476837158]})
        } {
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'IsFrameTransition': False, 'SourceRadius': 0.5, 'Intensity': 0.0, 'LightHash': 'PointLight_Link2', 'Color': [0.7799999713897705, 1.090000033378601, 1.1399999856948853]})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 460})
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': False, 'LightHash': 'PointLight_Link', 'SourceRadius': 0.05000000074505806, 'FrameTransitionCount': 30, 'Color': [0.6000000238418579, 1.1200000047683716, 1.4500000476837158], 'Intensity': 400.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': False, 'SourceRadius': 0.05000000074505806, 'FrameTransitionCount': 30, 'LightHash': 'PointLight_Link2', 'Intensity': 600.0, 'Color': [0.7799999713897705, 1.090000033378601, 1.1399999856948853]})
    }

}

void C18() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'OriginPosition', 'SceneName': 'C18-0'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayASWithClothWarp({'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': True, 'ASName': 'C18', 'ClothWarpMode': 2, 'ForceFadeInFrame': 0.0})
    } {

        call PlayerAddPouchAndEquip()

        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'C18', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerNaviWarpToPlayerHomePosition({'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SetUp', 'IsWaitEnd': False})
    } {
        Land_GanonCastle_FinalBattleField_BigRubble_A_01[1].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C18'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_0010_Ganon_Roar'})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_FinalBattle_0010_Ganon_Awakening', 'SLinkKey': '', 'IsKill': False})
        Player_Event.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_0010_Link_Awakening', 'IsKill': False})
        Dm_Locator[Effect].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_FinalBattle_0010_FireWall', 'SLinkKey': '', 'IsKill': False})
        Dm_Locator[Triforce].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_FinalBattle_0010_Triforce', 'SLinkKey': '', 'IsKill': False})
        Dm_Locator[Triforce].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_FinalBattle_0010_Triforce_PointLight', 'SLinkKey': '', 'IsKill': False})
        Weapon_Sword_Master.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_FinalBattle_0010_Glow_MasterSword', 'SLinkKey': '', 'IsKill': False})
    } {
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 250})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_FinalBattle_0010_Ganon_EyeGlow_Loop'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_012_b'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_013_b'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 193})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0010:Dm_FinalBattle_0010_Text_014_b'})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': 'WeakPoint_L_Darkness'})
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': 'WeakPoint_R_Darkness'})
    } {
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': True})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 285})
        WorldMgrThunderMgr.EventTriggerWorldMgrThunderMgrChangePatternKey({'PatternKey': 'Dm_FinalBattle_Top_B'})
        WorldMgrThunderMgr.EventTriggerWmThunderOneShot({'PatternKey': 'Dm_FinalBattle_Top_B'})
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 41})
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        EventSystemActor[GameDataWait].EventWait({'IsWaitEnd': True, 'Frames': 70})
        WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': False})
    } {
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0010_C18', 'CurrDemoPaletteName': 'Dm_FinalBattle_0010_C18', 'Frames': 0})
        EventSystemActor[Shindou].EventWait({'IsWaitEnd': True, 'Frames': 247})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        EventWorldManagerController[Lighting].EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
    } {
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 0, 'IsFrameTransition': False, 'Color': [0.4300000071525574, 1.0700000524520874, 2.140000104904175], 'SourceRadius': 0.5, 'LightHash': 'PointLight_Link', 'Intensity': 0.0})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 6, 'FadeTime': 0.0})
    }

}

void PlayerAddPouchAndEquip() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FinalBattleField_ShouldDeleteMasterSword', 'Value': True, 'Index': -1})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Weapon_Sword_Master', 'IsSetMessageTargetActorName': False, 'IsEquipDIrect': False, 'Num': 1, 'IsGetEvent': False})
    Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Sword_Master', 'DynamicEquipmentState': 1, 'IsActive': True})
    Player_Event.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
}
