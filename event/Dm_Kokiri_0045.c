-------- EventFlow: Dm_Kokiri_0045 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerMove', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsDirToTarget']
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0045/Dm_Kokiri_0045_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0045_Link.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Kokiri_Door_A_01_demo
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayASWithRate']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [-41.29999923706055, 118.37999725341797, 13.09000015258789], 'Rotation': [-180.0, 65.9000015258789, -180.0], 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0045/Dm_Kokiri_0045_Obj_Kokiri_Door_A/workspace.pp__ModelProject.gyml'}

Actor: Npc_Kokiri_Fado_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_012_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

Actor: Npc_Kokiri_Mido_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

Actor: Npc_Kokiri_011_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

Actor: Npc_Kokiri_005_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

Actor: Dm_Locator[Door]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-40.98720169067383, 119.19999694824219, 13.866419792175293]}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_Saria_Child
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerSetHaveTalked', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventWarpToTargetActor', 'EventPlayAS', 'EventNaviWarpToPlayerHomePosition']
queries: ['EventQueryNaviHomePositionOffsetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[navi3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[navi2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[navi1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[DoorRot]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [18.0, 0.0, -8.0]}

Actor: Dm_Locator[CameraRF]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [-0.6499999761581421, 0.0, 0.8999999761581421]}

Actor: Dm_Locator[VFX]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsWorld': True}

Actor: Dm_Locator[CameraL]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [-0.4000000059604645, 0.0, -0.8999999761581421]}

Actor: Dm_Locator[CameraRN]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [-0.15000000596046448, 0.0, 0.8999999761581421]}

void EntryPoint0() {
    Player_Event.EventTriggerParticipateEvent()
    Dm_Locator[Door].EventTriggerParticipateEvent()
    Dm_Locator[DoorRot].EventTriggerParticipateEvent()
    Dm_Locator[CameraRF].EventTriggerParticipateEvent()
    Dm_Locator[CameraRN].EventTriggerParticipateEvent()
    Dm_Locator[CameraL].EventTriggerParticipateEvent()

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Dm_Locator', 'ActorNameB': 'EventCamera', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.2999999523162842, 'InstanceNameA': 'Door'}) {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [-43.68000030517578, 120.0, 15.069999694824219], 'AtVector': [-41.4900016784668, 119.30999755859375, 14.069999694824219], 'TargetFovy': 55.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Player_Event', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Dm_Locator', 'InstanceNameA': 'CameraRF', 'CheckDistance': 0.20000000298023224}) {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'TargetActorName': 'Dm_Locator', 'RootType': 1, 'SceneName': 'C01-3', 'InterpolateFrame': 220.0})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Player_Event', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Dm_Locator', 'InstanceNameA': 'CameraRN', 'CheckDistance': 0.30000001192092896}) {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'TargetActorName': 'Dm_Locator', 'RootType': 1, 'SceneName': 'C01-3', 'InterpolateFrame': 220.0})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Player_Event', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Dm_Locator', 'InstanceNameA': 'CameraL', 'CheckDistance': 0.25}) {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'TargetActorName': 'Dm_Locator', 'RootType': 1, 'SceneName': 'C01-2', 'InterpolateFrame': 260.0})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'TargetActorName': 'Dm_Locator', 'RootType': 1, 'SceneName': 'C01-0', 'InterpolateFrame': 180.0})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndDistance': 1.7999999523162842, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.7999999523162842, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.799999952316284, 'EndBluarLevel': 2.799999952316284, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 1.7999999523162842, 'EndDistance': 1.7999999523162842, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 0.0, 'IsEnableNear': True, 'RequiredFrame': 120, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'ApplySlowMove': False, 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
        if Player_Event.EventQueryIsDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'Target': 3, 'AngleThreshold': 9.0, 'InstanceName': 'DoorRot'}) {
            Player_Event.EventPlayerTurnAndLook({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0, 'Target': 0, 'Direction': 0.0, 'IsWaitEnd': True, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False, 'TurnFaceControlType': 0, 'SlowTurn': False})
        }
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_LinkHouseDoor_Open', 'Index': -1, 'Value': True})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C01', 'ClothWarpMode': 0, 'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': False, 'ForceFadeFrame': 20.0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01_Loop', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {

        fork {
            SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': True, 'SLinkKey': 'Env'})
        }

        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'WaitingResumeInGameBgm': False})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 500})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/KokiriForest.game__location__Location.gyml'})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    } {
        Event80:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_LinkHouseDoor_Open', 'Index': -1}) {
            Obj_Kokiri_Door_A_01_demo.EventTriggerParticipateEvent()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
            Obj_Kokiri_Door_A_01_demo.EventPlayASWithRate({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'ASName': 'C01-Obj_Kokiri_Door_A-A-0', 'Rate': 1.0})
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            goto Event80
        }
    } {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Obj_Kokiri_Door_A_01_demo', 'ActorNameB': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 0.800000011920929}) {
            switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
              case [0, 1, 3]:
                GameSystemActor[navi1].EventWait({'IsWaitEnd': True, 'Frames': 60})
                Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'OffsetType': -1, 'IsNearOffset': False, 'Speed': 0.6800000071525574, 'IsHomePosition': False, 'offset': [-0.44999998807907104, -0.05999999865889549, -0.33000001311302185]})
              case 2:
                Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'OffsetType': -1, 'IsNearOffset': False, 'Speed': 0.6800000071525574, 'offset': [0.5, 0.05999999865889549, -0.33000001311302185], 'IsHomePosition': True})
            }
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Obj_Kokiri_Door_A_01_demo', 'ActorNameB': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.2000000476837158}) {
            switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
              case [0, 1, 3]:
                Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'OffsetType': -1, 'IsNearOffset': False, 'Speed': 0.6800000071525574, 'offset': [0.5, 0.05999999865889549, -0.33000001311302185], 'IsHomePosition': True})
              case 2:
                GameSystemActor[navi3].EventWait({'IsWaitEnd': True, 'Frames': 60})
                Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'OffsetType': -1, 'IsNearOffset': False, 'Speed': 0.6800000071525574, 'IsHomePosition': False, 'offset': [0.5, 0.05999999865889549, -0.33000001311302185]})
            }
        } else
        switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
          case [0, 1, 3]:
            Event54:
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'OffsetType': -1, 'IsNearOffset': False, 'offset': [0.5, 0.05999999865889549, -0.33000001311302185], 'IsHomePosition': False, 'Speed': 0.6800000071525574})
          case 2:
            GameSystemActor[navi2].EventWait({'Frames': 30, 'IsWaitEnd': True})
            goto Event54
        }
    } {
        Npc_Kokiri_Fado_Child.EventTriggerParticipateEvent()
    } {
        Npc_Kokiri_012_Child.EventTriggerParticipateEvent()
    } {
        Npc_Kokiri_Mido_Child.EventTriggerParticipateEvent()
    } {
        Npc_Kokiri_011_Child.EventTriggerParticipateEvent()
    } {
        Npc_Kokiri_005_Child.EventTriggerParticipateEvent()
    } {
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Dm_Locator[VFX].EventTriggerEmitXLink({'ELinkKey': 'Dm_Kokiri_0045_LightShaft', 'SLinkKey': ''})
    } {
        Npc_Kokiri_Saria_Child.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Kokiri_0050'})
    Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Kokiri_Saria_Child.EventPlayAS({'ASName': 'Act_Call_Hello', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Kokiri_Saria_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'KokiriForest_Meet_DekuTree_MeetSaria_PlayerWarpPosition', 'NotChangeRot': False, 'UseDemoWait': True, 'IsWaitEnd': False, 'ASCommand': 'EvtWait'})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'TargetFovy': 40.0, 'IsWaitEnd': True, 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Npc_Kokiri_Saria_Child', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'AtVectorSetType': 4, 'AtVector': [0.0, 1.5, 0.0], 'MoveTotargetPosType': 1, 'IsLinearMove': True, 'MoveTime': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'LongShiftRange': 10.0, 'LatShiftRange': 10.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.75, 2.5, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-37.93000030517578, 121.18000030517578, 13.989999771118164], 'AtVector': [-36.119998931884766, 119.43000030517578, 13.180000305175781], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 180, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [-0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': False, 'Type': 2, 'IsNearOffset': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Dm_Kokiri_0050_After_Near_End', 'Index': -1, 'Value': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}
