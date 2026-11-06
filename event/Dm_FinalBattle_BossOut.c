-------- EventFlow: Dm_FinalBattle_BossOut --------

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_BossOut/Dm_FinalBattle_BossOut_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_BossOut_Zelda.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Enemy_DungeonBoss_Ganon_SecondHalfBattle
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventPlayASWithClothWarp', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_BossOut/Dm_FinalBattle_BossOut_Enemy_DungeonBoss_Ganon/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_BossOut_Ganon.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerDrawn', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic', 'EventGoOffstageForUser', 'EventPlayerUnequip', 'EventTriggerPlayerEquipmentMasterSwordNotShine', 'EventWaitCreationFinishedEquipment', 'EventTriggerPlayerRequestCreateDynamicEquipmentNoRelationPouch', 'EventTriggerPlayerUnequipGlassTruth', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_BossOut/Dm_FinalBattle_BossOut_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_BossOut_Player.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_BossOut/Dm_FinalBattle_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_BossOut_Navi.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_BossOut/Dm_FinalBattle_BossOut/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[HomePosition]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventOpenDoCommand', 'EventCloseDoCommand']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[UI]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Xlink]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
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

Actor: EventWorldManagerController[Wind]
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[Light]
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput', 'EventRemoveProjectiles']
queries: ['EventQueryIsDreamWorld']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundStartSound', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor[Capture]
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Event]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: WorldMgrThunderMgr
entrypoint: None()
actions: ['EventTriggerWmThunderMgrSetIsUpdate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[Env]
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Sword_Master[Demo]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerModelBind']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {
    EventWorldManagerController[Env].Event_SetEnvPaletteForFlowchart({'EnvPaletteName': 'FinalBattleField_SecondHalf', 'ChangeSpeed': 5, 'IsWaitEnd': False, 'EnvTimeTableName': ''})
    WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': False})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerOnMotionTypeStatic()

    fork {

        call C01()


        call C05-1()


        call C05-2()


        call C05-3()

    } {
        EventWorldManagerController[Wind].Event_SetWindForFlowchart({'IsImmTrans': True, 'IsWaitEnd': False, 'Azimuth': 0.0, 'Elevation': -30.0, 'Speed': 15.0})
    }

    if !GameSystemActor.EventQueryIsDreamWorld() {

        fork {

            call C06()

            Player_Event.EventPlayerOffMotionTypeStatic()
        } {
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 180})
            SoundSystemActor.EventTriggerSoundStopSound({'GroupName': '', 'SLinkKey': 'SE_Dm_FinalBattle_BossOut_B', 'FadeFrame': 120})
            UISystemActor.EventEventFadeOut({'Length': 2, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 60})
        }

    } else {

        call C06()


        call C08()

        Player_Event.EventPlayerOffMotionTypeStatic()
    }
}

void C01() {

    fork {
        Dm_Locator[HomePosition].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'FinalBattle_BossOut', 'NotChangeRot': False, 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
            Event205:
            Player_Event.EventTriggerPlayerRequestCreateDynamicEquipmentNoRelationPouch({'EquipmentActorName': 'Weapon_Sword_Master', 'DynamicEquipmentState': 1})
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 1})
            Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
            Event252:
            Player_Event.EventPlayerDrawn({'IsDrawnImmediate': True, 'IsWaitEnd': True, 'EquipmentSlot': 0})
            Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
            Player_Event.EventTriggerPlayerEquipmentMasterSwordNotShine()
            Weapon_Sword_Master[Demo].EventTriggerModelBind({'ActorName': 'Player_Event', 'BoneName': 'Weapon_L', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
            Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': 'HomePosition', 'ActorName': 'Dm_Locator', 'YAngle': 0.0, 'OffsetBase': 1, 'ASCommand': 'EvtWait', 'PositionOffset': [0.0, 0.0, 0.0], 'UseDemoWait': False, 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Giant'}) {
            goto Event205
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
            goto Event205
        } else {
            goto Event252
        }
    } {
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': 'HomePosition', 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'OffsetBase': 1, 'IsWaitEnd': False, 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'InstanceName': 'HomePosition', 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'YAngle': 0.0, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [26.786409378051758, 0.0, 0.24698999524116516], 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'ASName': 'C01', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePosition', 'YAngle': 0.0, 'OffsetBase': 1, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 0.0, 0.0]})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'ASName': 'C01', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'StartDistance': 0.0, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsWaitEnd': True, 'RequiredFrame': 164, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 0.0, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsWaitEnd': False, 'EndDistance': 5.0, 'EndFNumber': 10.0, 'EndBluarLevel': 3.0, 'RequiredFrame': 8, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_FinalBattle_BossOut:Dm_FinalBattle_BossOut_Text_008_aaab', 'Speaker': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle'})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_BossOut:Dm_FinalBattle_BossOut_Text_008_aab'})
    } {
        EventSystemActor[Event].EventWait({'IsWaitEnd': True, 'Frames': 44})
        GameSystemActor[Vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
        EventSystemActor[Event].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor[Vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_C01'})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_Miasma_C05-01'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 6, 'FadeTime': 0.0})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_FinalBattle_BossOut_A', 'IsIgnoreDucking': False})
    }

}

void C05-2() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C05-2_St', 'IsWaitEnd': True, 'IsLoop': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsLoop': True, 'IsWaitEnd': False, 'SceneName': 'C05-2'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ClothWarpMode': 0, 'ASCommand': 'C05-2'})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C05-2'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C05-2', 'IsAllSlot': True})
    } {
        UISystemActor.EventOpenDoCommand({'IsWaitEnd': True, 'DoActionType': 26})
        GameSystemActor.EventWaitForKeyInput({'IsWaitEnd': True, 'KeyInputValue': 4})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
        UISystemActor.EventCloseDoCommand({'IsWaitEnd': True})
    }

}

void C05-3() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'SceneName': 'C05-3', 'InterpolateFrame': 30.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0, 'ASCommand': 'C05-3'})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C05-3'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': True, 'ASName': 'C05-3'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartBluarLevel': 3.0, 'EndDistance': 1.0, 'EndFNumber': 130.0, 'EndBluarLevel': 3.0, 'StartDistance': 1.0, 'StartFNumber': 130.0, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 56})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Player_Event', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_BossOut:Dm_FinalBattle_BossOut_Text_008_aad'})
    } {
        Weapon_Sword_Master[Demo].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_Mastersword_Awaking_C05-01', 'IsKill': False})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_Miasma_C05-03'})
        Weapon_Sword_Master[Demo].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_Mastersword_Awaking_C05-03'})
    } {
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'SE_Dm_FinalBattle_BossOut_Loop', 'GroupName': '', 'FadeFrame': -1})
    }

}

void C05-1() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'SceneName': 'C05-1', 'InterpolateFrame': 0.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ClothWarpMode': 1, 'ForceFadeFrame': 0.0, 'ASCommand': 'C05-1'})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C05-1'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayASWithClothWarp({'Partial': '', 'IsAnimeDriven': False, 'ClothWarpMode': 2, 'IsAllSlot': True, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C05-1'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartDistance': 5.0, 'StartFNumber': 10.0, 'StartBluarLevel': 3.0, 'RequiredFrame': 12, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': '弱点（額）_発光エフェクト_遠距離用'})
        Weapon_Sword_Master[Demo].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_Mastersword_Awaking_C05-01'})
        Weapon_Sword_Master[Demo].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_Mastersword_Awaking_Blade'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Wpn_Light_VS_Ganon', 'ActorName': 'Weapon_Sword_Master'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': '激化', 'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': '弱点（額）「出さない分岐」'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_FinalBattle_BossOut_Loop', 'IsIgnoreDucking': False})
    }

}

void C08() {

    fork {
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C08-0'})
    } {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C08', 'IsWaitEnd': True})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.0, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {

        fork {
            EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 130})
            VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_BossOut:Dm_FinalBattle_BossOut_Text_008_d'})
            EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 50})
        } {
            EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_BossOut_C08', 'CurrDemoPaletteName': 'Dm_FinalBattle_BossOut_C08', 'Frames': 256, 'IsWaitEnd': False})
        }


        fork {
            VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
            EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 40})
            VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_BossOut:Dm_FinalBattle_BossOut_Text_009_b'})
            EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 70})
            VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
            EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 160})
        } {
            EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_BossOut_C08', 'IsWaitEnd': False, 'CurrDemoPaletteName': 'Dm_FinalBattle_BossOut_C08_2', 'Frames': 240})
        }

        EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_BossOut_C08_2', 'CurrDemoPaletteName': 'Dm_FinalBattle_BossOut_C08_3', 'IsWaitEnd': False, 'Frames': 60})
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 60, 'PrevDemoPaletteName': 'Dm_FinalBattle_BossOut_C08_3', 'CurrDemoPaletteName': 'Dm_FinalBattle_BossOut_C08_4'})
    } {
        EventWorldManagerController[Wind].Event_SetWindForFlowchart({'Azimuth': 90.0, 'IsWaitEnd': False, 'Elevation': 0.0, 'IsImmTrans': False, 'Speed': 15.0})
    } {
        Npc_Hylia_Zelda_Adult.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_ActMagic'})
        EventSystemActor[Xlink].EventWait({'IsWaitEnd': True, 'Frames': 280})
        Npc_Hylia_Zelda_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_BossOut_Zelda_Enegyball_00', 'SLinkKey': ''})
    } {
        EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 540})
        UISystemActor.EventEventFadeOut({'Color': 1, 'Length': 2, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    }


    fork {
        Player_Event.EventTriggerPlayerUnequipGlassTruth()
    } {
        Weapon_Sword_Master[Demo].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_FinalBattle_BossOut_Mastersword_Awaking_C06'})
    } {
        Npc_Hylia_Zelda_Adult.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_FinalBattle_BossOut_Zelda_Enegyball_00', 'SLinkKey': '', 'IsKill': False})
    } {
        EventWorldManagerController[Wind].Event_ResetWindForFlowchart({'IsWaitEnd': False, 'IsImmTrans': False})
    } {
        EventWorldManagerController[Light].EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True, 'SceneName': 'C06-0'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C06', 'ClothWarpMode': 1})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C06'})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C01', 'IsWaitEnd': False})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayASWithClothWarp({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': True, 'ASName': 'C06', 'ClothWarpMode': 2, 'ForceFadeInFrame': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.0, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController[Wind].Event_SetWindForFlowchart({'IsWaitEnd': False, 'IsImmTrans': True, 'Elevation': 0.0, 'Azimuth': 270.0, 'Speed': 10.0})
    } {
        EventSystemActor[Event].EventWait({'IsWaitEnd': True, 'Frames': 6})
        GameSystemActor[Vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large'})
        EventSystemActor[Event].EventWait({'IsWaitEnd': True, 'Frames': 140})
        GameSystemActor[Vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': 'Dm_FinalBattle_BossOut_Miasma_C05-03'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': '無敵'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': '最終形態'})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_Miasma_C05-01', 'IsKill': False})
        Weapon_Sword_Master[Demo].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_FinalBattle_BossOut_Mastersword_Awaking_C05-03'})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_End'})
        EventSystemActor[Xlink].EventWait({'IsWaitEnd': True, 'Frames': 190})
        CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FinalBattle_BossOut_Camera_Smoke'})
    } {
        EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'CurrDemoPaletteName': 'Dm_FinalBattle_BossOut_C06_1', 'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_BossOut_C06_1', 'Frames': 120})
        EventWorldManagerController[Light].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_FinalBattle_BossOut_C06_1', 'CurrDemoPaletteName': 'Dm_FinalBattle_BossOut_C06_2', 'Frames': 60})
    }

}
