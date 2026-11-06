-------- EventFlow: Npc_Hylia_ImperialSoldier_001_Child --------

Actor: Npc_Hylia_ImperialSoldier_001_Child
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventShootToPlayer', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventTriggerLookAtObject', 'EventNPCSwitchTemporarilyLookIKVariationStart', 'EventNPCSwitchTemporarilyLookIKVariationEnd', 'EventShootToAnchor']
queries: ['EventQueryAvoidDuplicationRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_ImperialSoldier_Bomb
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void Retaliation() {

    call Common.AirStartUp()

    EventCamera.EventTriggerCameraSavePoint()
    Npc_Hylia_ImperialSoldier_001_Child.EventNPCSwitchTemporarilyLookIKVariationStart({'IsWaitEnd': True})

    call InitTalk_OnEvent_FixCamera_Npc_ImperialSoldier_001_Only()

    Npc_Hylia_ImperialSoldier_001_Child.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'InstanceName': 'EventStartPos', 'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Npc_Hylia_ImperialSoldier_001_Child.EventNPCTurnToTarget({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'InstanceName': 'Start', 'Target': 5, 'FaceControlType': 0})
    Npc_Hylia_ImperialSoldier_001_Child.EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [-0.800000011920929, 131.0, -244.64999389648438]})
    Npc_Hylia_ImperialSoldier_001_Child.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Swing_St', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    switch Npc_Hylia_ImperialSoldier_001_Child.EventQueryAvoidDuplicationRandomChoice4() {
      case 0:
        Npc_Hylia_ImperialSoldier_001_Child.EventTalk({'ASName': 'Swing_Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_ImperialSoldier_001_Child:Talk00', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        Event29:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastle_NearZelda_01'}) {
            Npc_Hylia_ImperialSoldier_001_Child.EventTalk({'ASName': 'Swing_Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_ImperialSoldier_001_Child:Talk04', 'IsNotBecomeSpeaker': True})
            EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 30, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})

            fork {
                Npc_Hylia_ImperialSoldier_001_Child.EventPlayAS({'ASName': 'Swing_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            }

            Event28:
            Npc_Hylia_ImperialSoldier_001_Child.EventAIScheduleMoveToAnchor({'AnchorType': 0, 'InstanceName': '', 'ASName': '', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False})
            Npc_Hylia_ImperialSoldier_001_Child.EventNPCSwitchTemporarilyLookIKVariationEnd({'IsWaitEnd': True})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastle_NearImpa_01'}) {
            Npc_Hylia_ImperialSoldier_001_Child.EventTalk({'ASName': 'Swing_Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_ImperialSoldier_001_Child:Talk05'})
            EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 30, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})

            fork {
                Npc_Hylia_ImperialSoldier_001_Child.EventPlayAS({'ASName': 'Swing_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            }

            goto Event28
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastle_IsBombExist'}) {
            EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 30, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})

            fork {
                Npc_Hylia_ImperialSoldier_001_Child.EventPlayAS({'ASName': 'Swing_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            }

            goto Event28
        } else {
            Npc_Hylia_ImperialSoldier_Bomb.EventTriggerParticipateEvent()
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastle_ImperialSoldier_EnableRetaliation_TargetPlayer'}) {
                EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 30, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})

                fork {
                    Npc_Hylia_ImperialSoldier_001_Child.EventPlayAS({'ASName': 'ThrowBomb', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                    Npc_Hylia_ImperialSoldier_001_Child.EventShootToPlayer({'IsWaitEnd': True, 'ShootableKey': 'Bomb', 'TrackBoneName': 'Weapon_L', 'TrackBoneOffset': [0.0, -0.10000000149011612, 0.0], 'LaunchAngleRad': 60.0})
                    Npc_Hylia_ImperialSoldier_001_Child.EventPlayAS({'ASName': 'Swing_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtSurprise'})
                }

                goto Event28
            } else {
                EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 30, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})

                fork {
                    Npc_Hylia_ImperialSoldier_001_Child.EventPlayAS({'ASName': 'ThrowBomb', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                    Npc_Hylia_ImperialSoldier_001_Child.EventShootToAnchor({'TrackBoneOffset': [0.0, -0.10000000149011612, 0.0], 'LaunchAngleRad': 60.0, 'InstanceName': 'Retaliation_DefaultTargetPos', 'IsWaitEnd': True, 'ShootableKey': 'Bomb', 'TrackBoneName': 'Weapon_L'})
                    Npc_Hylia_ImperialSoldier_001_Child.EventPlayAS({'ASName': 'Swing_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtSurprise'})
                }

                goto Event28
            }
        }
      case 1:
        Npc_Hylia_ImperialSoldier_001_Child.EventTalk({'ASName': 'Swing_Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_ImperialSoldier_001_Child:Talk01', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        goto Event29
      case 2:
        Npc_Hylia_ImperialSoldier_001_Child.EventTalk({'ASName': 'Swing_Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_ImperialSoldier_001_Child:Talk02', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        goto Event29
      case 3:
        Npc_Hylia_ImperialSoldier_001_Child.EventTalk({'ASName': 'Swing_Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_ImperialSoldier_001_Child:Talk03', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        goto Event29
    }
}

void InitTalk_OnEvent_FixCamera_Npc_ImperialSoldier_001_Only() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            if Player_Event.EventQueryIsDirToTarget({'Target': 3, 'ActorName': 'Npc_Hylia_ImperialSoldier_001_Child', 'AngleThreshold': 135.0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0]}) {
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_ImperialSoldier_001_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
            }
        } {

            call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Turn': 1, 'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_ImperialSoldier_001_Child")})

        }

    } {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'Retaliation_LookPos', 'IdealDistance': 4.5, 'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceDistance': 1.0, 'ToleranceXZAngle': 4.0, 'MoveTime': 0})
    }

}
