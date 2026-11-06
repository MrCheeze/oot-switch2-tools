-------- EventFlow: Dm_FinalBattle_0030 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0030/Dm_FinalBattle_0030/workspace.pp__ModelProject.gyml'}

Actor: Enemy_DungeonBoss_Ganon_SecondHalfBattle
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventDungeonBossSetConsiderBattlePresentation', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0030/Dm_FinalBattle_0030_Enemy_DungeonBoss_Ganon/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0030_Ganon.root.as', 'IsWorld': False, 'IsGrounding': False, 'IsBindNearestActor': False, 'EventMemberCreateMethod': 2}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0030/Dm_FinalBattle_0030_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0030_Zelda.root.as', 'EventMemberCreateMethod': 2}

Actor: Dm_Locator[OriginPosition]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventPlayerUnequip']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_FinalBattle_0030/Dm_FinalBattle_0030_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FinalBattle_0030_Player.root.as', 'EventMemberCreateMethod': 2}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit', 'EventNodeEffectFade', 'EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerStartVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[VFX_Ganon]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'EventMemberCreateMethod': 2}

Actor: GameSystemActor[controller_shake]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[VFX_Ganon_02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[Lighting]
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Lighting]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[controller_shake_02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C00()

    PostProcessingActor.EventNorifyCutChangeForGraphics()

    call C01()


    fork {

        call C02()

    } {
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 1.0, 'IsKeepWithRelativePos': False})
    }

}

void C01() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': True, 'CameraName': '', 'RootType': 1, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True, 'TargetActorName': '', 'SceneName': 'C01-0', 'IsIgnoreRootRot': True})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'YAngle': -90.0, 'ClothWarpMode': -1, 'InstanceName': 'OriginPosition', 'PositionOffset': [32.63800048828125, 0.017000000923871994, -1.5570000410079956], 'OffsetBase': 0, 'IsWaitEnd': False})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASName': 'C01_zelda', 'ForceFadeInFrame': 0.0})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': '無敵'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': '最終形態'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Weapon_Sword_Master', 'KeyName': 'Wpn_Light_VS_Ganon'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': '衝撃波_プライマリー（予兆）', 'ActorName': 'Ganon_Bullet_Thunder'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': '衝撃波_プライマリー（攻撃）', 'ActorName': 'Ganon_Bullet_Thunder'})
        EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Npc_Hylia_Zelda_Adult', 'ELinkKeyName': 'Dm_FinalBattle_0030_TriforceWisdom', 'IsWaitEnd': False, 'InstanceName': ''})
    } {
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 390})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0030:Dm_FinalBattle_0030_001_c'})
    } {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'PositionOffset': [13.03499984741211, 0.0, 0.9229999780654907], 'YAngle': -90.0, 'InstanceName': 'OriginPosition', 'IsWaitEnd': False, 'ASCommand': 'C01_Player'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'OriginPosition', 'YAngle': 90.0, 'OffsetBase': 0, 'IsWaitEnd': False, 'PositionOffset': [1.371000051498413, 0.0, -1.0299999713897705], 'ClothWarpMode': -1})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C01-Ganon'})
    } {
        GameSystemActor[controller_shake].EventWait({'Frames': 400, 'IsWaitEnd': True})
        GameSystemActor[controller_shake].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 6, 'FadeTime': 0.0})
    } {
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_0030_C01_zelda', 'CurrDemoPaletteName': 'Dm_FinalBattle_0030_C01_zelda', 'IsWaitEnd': True, 'Frames': 0})
        GameSystemActor[Lighting].EventWait({'IsWaitEnd': True, 'Frames': 280})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_FinalBattle_0030_C01_zelda', 'IsWaitEnd': True, 'CurrDemoPaletteName': 'Dm_FinalBattle_0030_C01_Bloom_A', 'Frames': 10})
        GameSystemActor[Lighting].EventWait({'IsWaitEnd': True, 'Frames': 110})
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 10, 'PrevDemoPaletteName': 'Dm_FinalBattle_0030_C01_Bloom_A', 'CurrDemoPaletteName': 'Dm_FinalBattle_0030_C01_Bloom_B'})
    } {

        fork {
            PostProcessingActor.EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Hylia_Zelda_Adult', 'InstanceName': '', 'OffsetBase': 0, 'LightHash': 'C01_zelda', 'LightType': 1, 'InnerAngle': 90.0, 'OuterAngle': 90.0, 'PositionOffset': [-2.0, 1.0, -0.18799999356269836], 'Direction': [0.9950000047683716, 0.006000000052154064, 0.09799999743700027]})
        } {
            PostProcessingActor.EventEditLocationalLight({'LightHash': 'C01_zelda', 'LocationalLightCreateType': 0, 'EditIntensity': True, 'EditColor': True, 'Color': [1.2599999904632568, 1.0, 0.30000001192092896], 'SourceRadius': 40.0, 'EditSourceRadius': True, 'IsFrameTransition': True, 'FrameTransitionCount': 0, 'Intensity': 25000.0})
        }

    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventEffectEmitter.EventNodeEffectFade({'IsWaitEnd': False})
}

void C00() {

    fork {
        Dm_Locator[OriginPosition].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'OriginPosition', 'YAngle': 0.0, 'ClothWarpMode': -1, 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True, 'SceneName': 'C02-0', 'RootType': 1, 'TargetActorInstanceName': '', 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': True, 'TargetActorName': ''})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C02-Ganon', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventDungeonBossSetConsiderBattlePresentation()
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02_Player', 'IsAllSlot': True, 'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'KeepOneTimeAnm': True})
    } {
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 370})
        VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_FinalBattle_0030:Dm_FinalBattle_0030_002_b', 'MessageDemoPosType': 0, 'Speaker': 'Enemy_DungeonBoss_Ganon'})
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 320})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Enemy_DungeonBoss_Ganon', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0030:Dm_FinalBattle_0030_004_b'})
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 170})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Enemy_DungeonBoss_Ganon', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0030:Dm_FinalBattle_0030_005_b'})
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 145})
        VoicePlayActor.EventTriggerStartVoice({'MessageDemoPosType': 0, 'Speaker': 'Enemy_DungeonBoss_Ganon', 'MessageId': 'EventFlowMsg/Dm_FinalBattle_0030:Dm_FinalBattle_0030_006_b'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'ELinkKey': 'Dm_FinalBattle_0030_MagicAttack', 'SLinkKey': ''})
    } {
        EventSystemActor[VFX_Ganon].EventWait({'IsWaitEnd': True, 'Frames': 680})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': '弱点（額）_発光エフェクト_遠距離用_エフェクト'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'offset': [-0.5, 0.5, 0.0], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'IsUseAfterPlayerTurn': True})
    } {
        EventSystemActor[VFX_Ganon_02].EventWait({'IsWaitEnd': True, 'Frames': 578})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'ThirdEyeOpend'})
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'KeyName': '最終形態'})
        EventSystemActor[VFX_Ganon_02].EventWait({'IsWaitEnd': True, 'Frames': 450})
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Weapon_Sword_Master', 'KeyName': 'Wpn_Light_VS_Ganon'})
    } {
        GameSystemActor[controller_shake].EventWait({'IsWaitEnd': True, 'Frames': 578})
        GameSystemActor[controller_shake].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
        GameSystemActor[controller_shake].EventWait({'IsWaitEnd': True, 'Frames': 122})
        GameSystemActor[controller_shake].EventTriggerControllerRumble({'RumbleCall': 'Camera_Converge00', 'Length': 1.0})
        GameSystemActor[controller_shake].EventWait({'IsWaitEnd': True, 'Frames': 144})
        GameSystemActor[controller_shake].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Camera_Converge03'})
    } {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 6, 'FadeTime': 0.0})
    } {
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'C01_zelda', 'LocationalLightCreateType': 0, 'EditIntensity': True, 'EditColor': True, 'Color': [1.2599999904632568, 1.0, 0.30000001192092896], 'SourceRadius': 40.0, 'EditSourceRadius': True, 'IsFrameTransition': True, 'FrameTransitionCount': 15, 'Intensity': 0.0})
    } {
        EventWorldManagerController[Lighting].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_FinalBattle_0030_C02_Bloom_A', 'CurrDemoPaletteName': 'Dm_FinalBattle_0030_C02_Bloom_A', 'Frames': 0})
        GameSystemActor[Lighting].EventWait({'IsWaitEnd': True, 'Frames': 570})
        EventWorldManagerController[Lighting].EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': True})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        GameSystemActor[controller_shake_02].EventWait({'Frames': 237, 'IsWaitEnd': True})
        GameSystemActor[controller_shake].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
    } {
        EventWorldManagerController.Event_SetWindForFlowchart({'IsImmTrans': True, 'Elevation': -90.0, 'Azimuth': 0.0, 'IsWaitEnd': False, 'Speed': 10.0})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetPosAndRot({'YAngle': -90.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [34.20500183105469, 100.09100341796875, -1.0770000219345093]})
    }


    fork {
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': '弱点（額）_発光エフェクト_遠距離用_エフェクト', 'IsKill': False})
        EventEffectEmitter.EventNodeEffectFade({'IsWaitEnd': False})
    } {
        EventWorldManagerController.Event_ResetWindForFlowchart({'IsImmTrans': True, 'IsWaitEnd': False})
    }

}
