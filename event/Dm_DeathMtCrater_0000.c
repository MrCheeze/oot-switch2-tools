-------- EventFlow: Dm_DeathMtCrater_0000 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerMove']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerAddPreComputedCullingBasePos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EnterDeathMountainTrail() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'YAngle': -148.00010681152344, 'ASCommand': 'EvtWait', 'Position': [18.0, 132.27999877929688, 61.15999984741211], 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'DecSpeedDistance': 2.0, 'MoveSpeed': 0.20000000298023224, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'IsWaitEnd': True, 'WorldPos': [16.479999542236328, 131.86000061035156, 59.29999923706055]})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -148.00010681152344, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [16.479999542236328, 131.86000061035156, 59.29999923706055], 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'YAngle': -148.0, 'IsNearOffset': True, 'IsDisguisedPlayerPos': True, 'WorldPos': [18.0, 132.27999877929688, 61.15999984741211], 'Type': -1, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsNearOffset': True, 'Speed': -1.0, 'OffsetType': -1, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'SceneName': 'C01-1'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/DeathMountainCrater.game__location__Location.gyml'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } {

            call Effects()

        }

        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        TerrainSystemActor.EventTerrainCalcCenter({'SceneName': 'DeathMountainCrater_01', 'IsWaitEnd': True, 'Position': [16.479999542236328, 131.8300018310547, 59.29999923706055]})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    } else {

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'YAngle': -148.00010681152344, 'ASCommand': 'EvtWait', 'Position': [18.0, 132.27999877929688, 61.15999984741211], 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'DecSpeedDistance': 2.0, 'MoveSpeed': 0.20000000298023224, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': [16.40999984741211, 131.83999633789062, 59.18000030517578], 'IsWaitEnd': True})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [16.40999984741211, 131.83999633789062, 59.18000030517578], 'YAngle': -148.00010681152344, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'YAngle': -148.0, 'IsNearOffset': True, 'IsDisguisedPlayerPos': True, 'WorldPos': [18.0, 132.27999877929688, 61.15999984741211], 'Type': -1, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsNearOffset': True, 'Speed': -1.0, 'OffsetType': -1, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/DeathMountainCrater.game__location__Location.gyml'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } {

            call Effects()

        }

        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        TerrainSystemActor.EventTerrainCalcCenter({'SceneName': 'DeathMountainCrater_01', 'IsWaitEnd': True, 'Position': [16.479999542236328, 131.8300018310547, 59.29999923706055]})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    }
}

void EnterFromGoronCity() {
    GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [14.600000381469727, 130.5500030517578, 52.880001068115234], 'EndPos': [14.600000381469727, 130.5500030517578, 52.880001068115234]})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'SceneName': 'C01'})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 64.0000228881836, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [-55.29766082763672, 120.2844009399414, -19.666900634765625]})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'IsDisguisedPlayerPos': True, 'WorldPos': [-55.29766082763672, 120.2844009399414, -19.666900634765625], 'YAngle': 64.0000228881836, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Type': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/DeathMountainCrater.game__location__Location.gyml'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
    } {

        call Effects()

    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    TerrainSystemActor.EventTerrainCalcCenter({'Position': [-55.29999923706055, 120.30999755859375, -19.670000076293945], 'SceneName': 'DeathMountainCrater_01', 'IsWaitEnd': True})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void Effects() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 280})
    Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [18.0, 115.0, 28.0]})

    fork {
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtCrater_0000_Lava'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_DeathMt_Lava_00', 'IsIgnoreDucking': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-10.0, 107.0, -21.0], 'ClothWarpMode': -1})
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtCrater_0000_Lava'})
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'SE_Dm_DeathMt_Lava_01'})
    } {
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 6})
        GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 0.0})
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 200})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dohoon'})
    }

}
