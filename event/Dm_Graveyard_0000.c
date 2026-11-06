-------- EventFlow: Dm_Graveyard_0000 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerMove', 'EventPlayerTurnAndLookNow']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[cam_position]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    UISystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsNoPlayAnime': True, 'IsWaitEnd': False})
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            Dm_Locator[cam_position].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [-26.809999465942383, 98.05999755859375, 11.670000076293945], 'IsWaitEnd': True, 'ClothWarpMode': -1})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'YAngle': 90.0, 'ASCommand': 'EvtWait', 'Position': [-41.599239349365234, 97.09951782226562, 7.575201988220215], 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'Position': [-41.75254821777344, 98.13236999511719, 8.0], 'ClothWarpMode': -1})
        }


        fork {
            Player_Event.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'IsWaitEnd': True, 'DecSpeedDistance': 3.0, 'MoveSpeed': 0.20000000298023224, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'WorldPos': [-36.34397888183594, 98.06999969482422, 7.575201988220215], 'IsContinueMoveAnimeAfterFinish': False})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-36.34397888183594, 98.06999969482422, 8.431520462036133], 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerTurnAndLookNow({'IsWaitEnd': True, 'WorldPos': [-21.81999969482422, 100.08000183105469, 8.539999961853027], 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsDoNavi': False})
        } {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'Speed': -1.0, 'IsNearOffset': False, 'IsHomePosition': False, 'offset': [-0.4000000059604645, 0.10000000149011612, 0.0], 'OffsetType': -1})
        } {
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 5})
            UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'cam_position', 'SceneName': 'C01-1'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/Graveyard.game__location__Location.gyml'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
        }

        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        Event14:
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'BakeLightLuminanceRatio': 1.0, 'ShadowRatio': 1.0})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    } else {

        fork {
            Dm_Locator[cam_position].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [-26.809999465942383, 98.05999755859375, 11.670000076293945], 'IsWaitEnd': True, 'ClothWarpMode': -1})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'YAngle': 90.0, 'ASCommand': 'EvtWait', 'Position': [-41.599239349365234, 97.09951782226562, 7.575201988220215], 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'Position': [-41.900001525878906, 98.5, 8.0], 'ClothWarpMode': -1})
        }


        fork {
            Player_Event.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'IsWaitEnd': True, 'DecSpeedDistance': 3.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'MoveSpeed': 0.10000000149011612, 'IsInertiaMove': False, 'ApplySlowMove': False, 'WorldPos': [-36.34397888183594, 98.93108367919922, 7.575201988220215], 'IsContinueMoveAnimeAfterFinish': False})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-36.34397888183594, 98.06999969482422, 8.431520462036133], 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerTurnAndLookNow({'IsWaitEnd': True, 'WorldPos': [-21.81999969482422, 100.08000183105469, 8.539999961853027], 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsDoNavi': False})
        } {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsNearOffset': False, 'IsHomePosition': False, 'offset': [-0.4000000059604645, 0.10000000149011612, 0.0], 'Speed': -0.5, 'OffsetType': -1})
        } {
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 5})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'cam_position', 'SceneName': 'C01-2'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/Graveyard.game__location__Location.gyml'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
        }

        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        goto Event14
    }
}
