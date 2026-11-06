-------- EventFlow: Obj_Kokiri_Signboard_GuideAction_A_02 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsActorInFront']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveToAnchor', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventSendEventTalkSignMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventNaviCheckMoveEnd', 'EventWaitTalkCameraInterpolationEnd']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void RollAttack() {
    if !SignBoard_EventStarter.EventQueryIsActorInFront({'ActorName': 'Player_Event', 'Angle': 90.0, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
            Event20:

            call SignboardWood.Demo_LookSignboard()


            call SignboardWood.Talk_NoLookReadableOnlyFront()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Obj_Kokiri_Signboard_GuideAction_A_02_RollAttack_Event21', 'Index': -1}) {
            goto Event20
        } else {

            fork {
                Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
            } {
                SignBoard_EventStarter.EventTriggerBecomeSpeaker()

                call NaviEventCommon.NaviMove_Attention({'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'IsUseDisguiseSpeakerPos': True, 'TargetOffset': [0.0, 0.6700000166893005, 0.0]})

            } {
                EventCamera.EventSendEventTalkSignMessageToPlayerCamera({'IsWaitEnd': False})
                GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
            }

            SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Success_RollAttack_Tree'}) {
                EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Npc_Navi', 'TargetFovy': 35.0, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'PosVectorSetType': 1, 'IsAtVectorReferenceActorPosOnce': True, 'Actor2InstanceName': '', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                GameSystemActor.EventNaviCheckMoveEnd({'IsWaitEnd': True, 'TimeOutFrame': 600.0})
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'MessageId': 'EventFlowMsg/Get_StoneOfForest:NaviTalk_01', 'MaintainPerformanceState': 0, 'ASName': ''})
                Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

                fork {
                    Npc_Navi.EventNaviMoveToAnchor({'IsWaitEnd': True, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'ASCommand': '', 'IsTurnLooking': False, 'InstanceName': 'RoolAttack_CameraPos', 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'LookAtTarget': 5, 'LookAtInstanceName': 'RoolAttack_CameraPos', 'LookAtActorName': 'DestinationAnchor'})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                    fork {
                        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 5, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'ActorName': 'DestinationAnchor', 'InstanceName': 'RoolAttack_CameraPos', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'AtVectorSetType': 3, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'RoolAttack_CameraPos', 'AtVector': [0.0, 1.0, 0.0], 'LatShiftRange': 1.0, 'LongShiftRange': 1.0, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'PosVectorSetType': 4, 'Actor2ActorName': 'Player_Event', 'PosVector': [0.0, 1.75, -3.5], 'MoveTotargetPosType': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    }

                }

                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'MessageId': 'EventFlowMsg/Get_StoneOfForest:NaviTalk_02', 'MaintainPerformanceState': 0, 'ASName': ''})
                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})

                call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 20})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Obj_Kokiri_Signboard_GuideAction_A_02_RollAttack_Event21', 'Value': True, 'Index': -1})
            }
        }
    } else {

        call SignboardWood.ReadBackSide()

    }
}
