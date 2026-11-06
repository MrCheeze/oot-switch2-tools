-------- EventFlow: WaterTemple_Gimick --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void WaterTempleRoom14StepSwitch() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'DestinationAnchor', 'TargetActorInstanceName': 'StepSwitchCameraPos2', 'IdealDistance': 0.10000000149011612, 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 6.0, 'ToleranceYDownwardAngle': 6.0, 'ToleranceXZAngle': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'LookAtVectorY': 0}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'LookAtVectorY': 1, 'ToleranceXZAngle': 0.0, 'TargetActorInstanceName': 'StepSwitchCameraPos2', 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 0.10000000149011612, 'ToleranceYUpwardAngle': 6.0, 'ToleranceYDownwardAngle': 6.0, 'MoveTime': 0})
        Event2:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WaterTemple_Room14_SwitchPushedHeavyBoots', 'Index': -1}) {

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
            } {
                Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 105})
            Event30:

            fork {
                EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'LookAtVectorY': 1, 'ToleranceXZAngle': 0.0, 'IdealDistance': 0.5, 'TargetActorInstanceName': 'StepSwitchCameraPos2', 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [0.0, 3.0, 0.0], 'MoveTime': 150})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            } {
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'StepSwitchCameraFocusPoint', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            }

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room14_SwitchPushedByBlock'}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_Room14_DemoClearSound', 'Index': -1, 'Value': True})
                SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
                Event38:
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0, 'CameraResetPolicy': 0})
            } else {
                goto Event38
            }
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
            } {
                Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'SwimWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

            fork {
                Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
            } {
                Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
            }

            goto Event30
        }
    } else {
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'LookAtVectorY': 1, 'ToleranceXZAngle': 0.0, 'TargetActorInstanceName': 'StepSwitchCameraPos2', 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 0.10000000149011612, 'MoveTime': 90, 'ToleranceYUpwardAngle': 6.0, 'ToleranceYDownwardAngle': 6.0})
        goto Event2
    }
}

void WaterTempleRoom08HitSwitch() {

    call Common.AirStartUp()

    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call FocusOnGimmick.NewBasicFocus({'CloseDistance': 0.0, 'AnchorName_01': 'point1', 'CameraDistanceFromAnchor': 5.0, 'CameraPosOffset': [0.0, 1.0, 6.0], 'CameraPosOffset_IfClose': [0.0, 0.25, -1.0], 'OriginActor_IfClose': 'Player_Event', 'FocusOffset_IfClose': [0.0, 0.0, 0.0], 'WaitBeforeSE': 75})

    SoundSystemActor.EventTriggerSoundReadRiddle({'BgmReadRiddleType': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}
