-------- EventFlow: GimmickFlow_Common --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventPlayerWaitOnGround', 'EventTriggerAddPreComputedCullingBasePosByAnker', 'EventRemoveProjectiles']
queries: ['EventQueryIsDistanceBetweenActorsClose', 'EventQueryIsRecommendedMelody']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMoveToAnchor', 'EventPlayerWait', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerEventStartWithoutStopRidingTarget', 'EventTriggerParticipateEvent', 'EventPlayerJumpOut', 'EventPlayerStopInAir', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventPlayerPutAway', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: ['EventQueryCheckPlayerState', 'EventQueryIsHorseEponaNear', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Plant_MagicBeanLeaf_A_02
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviMoveAtActor', 'EventNaviFollowPlayer', 'EventNaviWarpToPlayerHomePosition']
queries: ['EventQueryNaviAttentionType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBoolEX1', 'EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Epona_Adult[Animal_Epona_Adult_Owned]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

void HidingHole_Entry_01() {
    if !Player_Event.EventQueryIsHorseEponaNear({'Distance': 8.5}) {
        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerParticipateEvent()
    }
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'HidingHole_HoleEntrance'})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'FadeType': 2, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': True, 'IsForceFadeTime': True, 'WaitingResumeInGameBgm': False})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'ReviseMode': 2, 'CollisionInterpolateSkip': False, 'IsRestoreDoF': False})
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()
    switch Npc_Navi.EventQueryNaviAttentionType() {
      case 0:
        Event187:
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'HidingHole_FieldEntranceGo', 'TargetOffset': [0.0, 0.0, 0.0], 'ToleranceXZAngle': 360.0, 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYDownwardAngle': 45.0, 'IsWaitEnd': False, 'ToleranceYUpwardAngle': 45.0, 'MoveTime': 90})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 0, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'HidingHole_IsInPlayer', 'Index': -1})
        if !Player_Event.EventQueryIsHorseEponaNear({'Distance': 8.5}) {
            Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventWarpToTargetActor({'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'TargetActorKind': 0, 'InstanceName': '', 'ActorName': '', 'OffsetBase': 1, 'YAngle': 0.0})
        }
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HidingHole_HoleEntrance', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WellAreaEvent_M1194', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HidingHole_EnteredFairySpring'})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 3, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'HidingHole_HoleEntrance', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'IsWaitEnd': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.0, -0.8500000238418579, -3.799999952316284], 'AtVector': [0.0, -1.2000000476837158, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Player_Event.EventPlayerPutAway({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Fall', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            GameSystemActor.EventPlayerWaitOnGround({'IsWaitEnd': True, 'TimeOutFrame': 600.0})

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'Land', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            } {
                Obj_Plant_MagicBeanLeaf_A_02.EventPlayAS({'ASName': 'Landing', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            }

        } {
            UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 0, 'IsWaitEnd': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 3, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'HidingHole_HoleEntrance', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, -1.7000000476837158, 0.0], 'PosVector': [0.0, -1.350000023841858, -3.799999952316284], 'MoveTime': 30, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        GameSystemActor.EventTriggerRequestAutoSave()
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 25})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'LostWood_ForestStage_LowestRating', 'Value': False})
      case [1, 2, 3]:
        Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'IsWaitEnd': False})
        goto Event187
    }
}

void HidingHole_Exit_01() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'HidingHole_HoleExit'})

    fork {

        call HidingHole_Exit_PlayerAction()

        Obj_Plant_MagicBeanLeaf_A_02.EventPlayAS({'ASName': 'JumpUp', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'HidingHole_FieldExitGo', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 360.0, 'LookAtVectorY': 1, 'MoveTime': 60, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'IdealDistance': 4.300000190734863, 'TargetOffset': [0.0, 0.6000000238418579, 0.0], 'IsWaitEnd': False})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EndRecelerateRate': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'MoveTime': 30, 'Actor1ActorName': '', 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'HidingHole_FieldExitGo', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'AtVector': [0.0, 3.0, 0.0], 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Navi.EventNaviMoveAtActor({'IsWaitEnd': False, 'TargetActorName': 'Obj_Plant_MagicBeanLeaf_A_02', 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'TargetInstanceName': '', 'IsTargetNaviAttentionPos': False, 'ASCommand': '', 'TargetOffset': [0.0, 5.0, 0.0], 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})

        fork {
            UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})
        } {
            SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'FadeType': 2, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': True, 'IsForceFadeTime': True, 'WaitingResumeInGameBgm': False})
        }

    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'WaitUnsteady', 'ClothWarpMode': 0, 'IsWaitEnd': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HidingHole_IsInPlayer', 'Value': False, 'Index': -1})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'HidingHole_HoleExit', 'ASCommand': 'EvtWait'})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': False, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'IsHomePosition': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'OffsetType': -1, 'Speed': -1.0})
    Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EndRecelerateRate': 0.0, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'Actor1InstanceName': 'HidingHole_HoleExit', 'Actor2ActorName': '', 'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 1, 'PosVector': [0.0, 2.490000009536743, -2.259999990463257], 'AtVector': [0.0, 1.7699999809265137, -1.1100000143051147], 'IsLinearMove': False, 'IsEnableRevertFast': False})
    Obj_Plant_MagicBeanLeaf_A_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})

    fork {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 0, 'IsWaitEnd': False})
    } {
        Player_Event.EventPlayerJumpOut({'Height': 1.0, 'Speed': 3.25, 'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HidingHole_EnteredFairySpring'})
    GameSystemActor.EventTriggerRequestAutoSave()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LostWood_ForestStage_LowestRating'}) {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 248})
    }
}

void HidingHole_Exit_PlayerAction() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 2})
    && !Player_Event.EventQueryCheckPlayerState({'State': 1})
    && !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventTriggerParticipateEvent()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                Player_Event.EventPlayerWait({'IsWaitEnd': True})
            } else {
                Event190:
                Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'HidingHole_FieldExitGo', 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'DecSpeedDistance': 0.0, 'IsWaitEnd': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'MoveSpeed': 0.10000000149011612, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            }
        } else {
            Player_Event.EventTriggerParticipateEvent()
        }
    } else {
        goto Event190
    }
}

void HidingHole_Exit_02() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'HidingHole_HoleExit'})

    fork {

        call HidingHole_Exit_PlayerAction()

        Obj_Plant_MagicBeanLeaf_A_02.EventPlayAS({'ASName': 'JumpUp', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'HidingHole_FieldExitGo', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 360.0, 'LookAtVectorY': 1, 'MoveTime': 60, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'IdealDistance': 4.300000190734863, 'TargetOffset': [0.0, 0.6000000238418579, 0.0], 'IsWaitEnd': False})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EndRecelerateRate': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'MoveTime': 30, 'Actor1ActorName': '', 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'HidingHole_FieldExitGo', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'AtVector': [0.0, 3.0, 0.0], 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Navi.EventNaviMoveAtActor({'IsWaitEnd': False, 'TargetActorName': 'Obj_Plant_MagicBeanLeaf_A_02', 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'TargetInstanceName': '', 'IsTargetNaviAttentionPos': False, 'ASCommand': '', 'TargetOffset': [0.0, 5.0, 0.0], 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})

        fork {
            UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})
        } {
            SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'FadeType': 2, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': True, 'IsForceFadeTime': True, 'WaitingResumeInGameBgm': False})
        }

    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'WaitUnsteady', 'ClothWarpMode': 0, 'IsWaitEnd': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HidingHole_IsInPlayer', 'Value': False, 'Index': -1})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'HidingHole_HoleExit', 'ASCommand': 'EvtWait'})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': False, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'IsHomePosition': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'OffsetType': -1, 'Speed': -1.0})
    Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 1, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EndRecelerateRate': 0.0, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'IsWaitEnd': False, 'Actor1InstanceName': 'HidingHole_HoleExit', 'MoveTime': 0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [2.7799999713897705, 1.3700000047683716, -1.0], 'PosVector': [2.950000047683716, 1.440000057220459, -1.1299999952316284], 'IsLinearMove': False, 'IsEnableRevertFast': False})
    Obj_Plant_MagicBeanLeaf_A_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})

    fork {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 0, 'IsWaitEnd': False})
    } {
        Player_Event.EventPlayerJumpOut({'Height': 1.0, 'Speed': 3.25, 'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HidingHole_EnteredFairySpring'})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void HidingHoleCoverDisappearStrom_Disappear() {

    call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 5})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
        EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'CheckDistance': 1.2999999523162842, 'InstanceNameB': 'HidingHole_HoleExit'}) {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVectorSetType': 2, 'PosVectorSetType': 3, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'HidingHole_HoleExitGo', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 4.0, 1.0], 'AtVector': [0.0, 0.20000000298023224, 0.0], 'IsEnableRevertFast': False})
            } {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'HidingHoleCoverDisappearStrom_SafePosition', 'UseDemoWait': True, 'ASCommand': 'DemoOcarinaCorrect'})

                call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

            }

        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVectorSetType': 2, 'PosVectorSetType': 3, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'HidingHole_HoleExitGo', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 0.20000000298023224, 0.0], 'PosVector': [0.0, 4.0, 1.0], 'IsEnableRevertFast': False})
            } {
                Player_Event.EventTriggerParticipateEvent()
            }

        }
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventProxyRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
        } {
            if !Player_Event.EventQueryIsDirToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Land_Kokiri_HidingHoleCover_A_01', 'AngleThreshold': 15.0}) {
                Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ClothWarpMode': 0, 'UseAnmDriven': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 30.0})
            } else {
                Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'Target': 3, 'ActorName': 'Land_Kokiri_HidingHoleCover_A_01', 'UseNormalTurn': False, 'IsDoNavi': True, 'KeepTalkWait': False, 'SlowTurn': True, 'UpperASCommand': 'EvtWait'})
            }
        }

        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
        Event195:
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 26})
    }
}

void HidingHoleCoverDisappearStrom_Disappear_02() {

    call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 5})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
        EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'CheckDistance': 1.2999999523162842, 'InstanceNameB': 'HidingHole_HoleExit'}) {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVectorSetType': 2, 'PosVectorSetType': 3, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'HidingHole_HoleExitGo', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 4.0, 1.0], 'AtVector': [0.0, 0.20000000298023224, 0.0], 'IsEnableRevertFast': False})
            } {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'HidingHoleCoverDisappearStrom_SafePosition', 'UseDemoWait': True, 'ASCommand': 'DemoOcarinaCorrect'})

                call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

            }

        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVectorSetType': 2, 'PosVectorSetType': 3, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'HidingHole_HoleExitGo', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 4.0, 1.0], 'AtVector': [0.0, 0.20000000298023224, 0.0], 'IsEnableRevertFast': False})
            } {
                Player_Event.EventTriggerParticipateEvent()
            }

        }
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventProxyRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
        } {
            if !Player_Event.EventQueryIsDirToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'AngleThreshold': 15.0, 'ActorName': 'Land_Gerudo_HidingHoleCover_A_02'}) {
                Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ClothWarpMode': 0, 'UseAnmDriven': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 30.0})
            } else {
                Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'Target': 3, 'UseNormalTurn': False, 'IsDoNavi': True, 'KeepTalkWait': False, 'SlowTurn': True, 'UpperASCommand': 'EvtWait', 'ActorName': 'Land_Gerudo_HidingHoleCover_A_02'})
            }
        }

        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
        goto Event195
    }
}
