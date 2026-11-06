-------- EventFlow: Npc_Kokiri_010_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerKokiriRequestComeCloserFairy', 'EventTriggerChangeEmotion', 'EventTriggerShopItemSetModelLodManual']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryCheckIsGet', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_010_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerSetHaveTalked', 'EventNPCTurnToTarget', 'EventTriggerKokiriRequestComeCloserFairy', 'EventTriggerBecomeSpeaker', 'EventAIScheduleEndTerror', 'EventTriggerForceSetRecentTalkFlag', 'EventTriggerSetModelLodManual']
queries: ['EventNPCQueryCheckFrontToTarget', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerMoveToAnchor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerTalk', 'EventGoOffstageForUser', 'EventPlayerWarpToTargetActor', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerTurnAndLookNow', 'EventTriggerPlayerForceLookIKVariationDefault']
queries: ['EventQueryPlayerIsEquipWeapon', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventNaviFollowPlayer', 'EventNaviLookAtObject', 'EventWarpToTargetActor', 'EventNaviWarpToPlayerHomePosition', 'EventTriggerSetModelAlpha']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsCompleted_Exp'}) {

        call GetZeldaLullaby()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {

        call AfterDekuClear()

    } else {

        call BeforeDekuClear()

    }
}

void Near() {
    Event0:
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Kokiri_010_Child:Near_01'})
    }
}

void DekuShield_TutorialTalk() {
    Npc_Kokiri_010_Child.EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_Kokiri_010_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'UseDemoWait': True, 'YAngle': 180.0, 'ASCommand': 'EvtWait', 'PositionOffset': [0.0, 0.0, 3.0], 'IsWaitEnd': True})
    Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'PositionOffset': [0.3499999940395355, 1.0, -0.3499999940395355], 'ClothWarpMode': -1})

    fork {
        Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_07', 'MaintainPerformanceState': 0})
    } {
        Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Salesperson'})
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kokiri_010_Child', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 3, 'ActorName': 'Npc_Kokiri_010_Child', 'InstanceName': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

            fork {
                Npc_EventStarter.EventTriggerShopItemSetModelLodManual({'LodLevel': -1})
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Kokiri_010_Child', 'PosVector': [-0.6499999761581421, 1.0199999809265137, 3.0999999046325684], 'AtVector': [-0.4699999988079071, 0.75, -0.2199999988079071], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 3, 'ActorName': 'Npc_Kokiri_010_Child', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
            }

        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    }

    Npc_Kokiri_010_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_06', 'MaintainPerformanceState': 0})

    call ActionGuide.OpenActionGuideSceen({'ActionGuideType': 46})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NaviHint_Field_ShieldGuide_Now', 'Value': True, 'Index': -1})

    call HintCameraMove()

    Npc_Kokiri_010_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_01', 'MaintainPerformanceState': 0})

    fork {
        Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'MoveSpeed': 0.800000011920929, 'DecSpeedDistance': 1.0, 'AnchorInstanceName': 'At_Scarecrow_Pos', 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
    } {
        Npc_Navi.EventNaviFollowPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsWaitEnd': False, 'Speed': 1.0, 'IsNearOffset': False, 'OffsetType': -1})
    }

    Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 3, 'InstanceName': '', 'ActorName': 'Obj_AttentionRock_A_03', 'IsWaitEnd': True, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
    Npc_Kokiri_010_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': True})
    Npc_Kokiri_010_Child.EventTriggerForceSetRecentTalkFlag({'value': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void HintCameraMove() {

    fork {
        Npc_Kokiri_010_Child.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Hint', 'WorldPos': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Hint', 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'TargetFovy': 55.0, 'Actor2ActorName': 'Obj_AttentionRock_A_03', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 1.0], 'MoveTotargetPosType': 1, 'PosVectorSetType': 4, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ShopKakashi_CameraCollisionCorrection', 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'PosVector': [0.0, 1.2000000476837158, 5.639999866485596], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Npc_Navi.EventNaviFollowPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsNearOffset': False, 'IsWaitEnd': False, 'Speed': 1.0, 'OffsetType': -1})
        }

    }

}

void BeforeDekuClear() {

    call InitTalk.InitTalk_KokiriOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True})

    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Weapon_Shield_Deku'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_FocusOnAttentionRock_ShieldDeku_Event94'}) {
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_16', 'MaintainPerformanceState': 0})
            }
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Kokiri_010_Child.EventTalk({'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_11', 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
            } else {
                Npc_Kokiri_010_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_09', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event66:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Talk_Event18'})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_010_Child_Teach'}) {
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_14', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_15', 'MaintainPerformanceState': 0})
                    }
                    Event55:
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_13', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_02', 'MaintainPerformanceState': 0})
                    }
                    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Weapon_Shield_Hylian'}) {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_107', 'MaintainPerformanceState': 0})
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Kokiri_010_Child_Teach'})
                    goto Event55
                }
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                Event19:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_03', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_12', 'MaintainPerformanceState': 0})
                }
            }
        } else
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Kokiri_010_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_06', 'MaintainPerformanceState': 0})
        }
        Npc_Kokiri_010_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_01', 'MaintainPerformanceState': 0})
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_08', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_04', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_00', 'MaintainPerformanceState': 0})
    }
}

void AfterDekuClear() {

    call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True, 'Arg_Turn': 2})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Talk_Event23', 'Index': -1}) {
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_10', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_102', 'MaintainPerformanceState': 0})
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_101', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_103_2'})
        }
        Event67:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Talk_Event18', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_202', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_104', 'MaintainPerformanceState': 0, 'ChoiceLabel2': 3})
        }
        Event73:
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event66
        } else
        goto Event19
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Talk_Event23', 'Value': True, 'Index': -1})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_100', 'MaintainPerformanceState': 0})

        call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingS', 'Player_IsWaitEnd': True, 'Npc_ActorName': ActorIdentifier(name="Npc_Kokiri_010_Child")})

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_105', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_103', 'MaintainPerformanceState': 0})
    }
}

void GetZeldaLullaby() {

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Talk_Event14', 'Index': -1}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call Shield_Hylian_ReactionTalk()

            goto Event67
        } else {

            call Shield_Hylian_ReactionTalk()

            Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_205', 'MaintainPerformanceState': 0})
            Event143:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Talk_Event18', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_202_2'})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_104_2', 'ChoiceLabel2': 3})
            }
            goto Event73
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Talk_Event14', 'Value': True, 'Index': -1})

        call Shield_Hylian_ReactionTalk()

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_200', 'MaintainPerformanceState': 0})
        goto Event143
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 4, 'NpcFairy_MovingFlag': True})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_010_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_010_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic_KokiryOnly({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_010_Child:Mask_103', 'ASName': 'Act_Shopper'}) {
      case 1183930306:
        return 4151362380
      case 1530789637:
        return 2799305849
    }
}

void Get_StoneOfForest_IsAfter_DefeatBoss_Exp_Near() {
    goto Event0
}

void FocusOnAttentionRock_ShieldDeku() {
    Player_Event.EventTriggerPlayerForceLookIKVariationDefault()
    Npc_Kokiri_010_Child.EventTriggerSetModelLodManual({'LodLevel': 0})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_Kokiri_010_Child.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})

    fork {
        Npc_Kokiri_010_Child.EventTriggerBecomeSpeaker()
        Npc_Kokiri_010_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_17', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kokiri_010_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    }


    fork {
        if !Npc_Kokiri_010_Child.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 15.0}) {

            call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_010_Child"), 'Arg_Turn': 2})

        } else {

            call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_010_Child"), 'Arg_Turn': 3})

        }
        Npc_Kokiri_010_Child.EventTriggerKokiriRequestComeCloserFairy()
    } {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    }


    fork {
        EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'TargetActorName': 'Npc_Kokiri_010_Child', 'TargetActorInstanceName': '', 'Latitude': 0.0, 'Longitude': 0.0, 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896], 'Radius': 1.2000000476837158})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_18', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_FocusOnAttentionRock_ShieldDeku_Event94', 'Value': True, 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Shield_Hylian_ReactionTalk() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Shield_Hylian_ReactionTalk_Event65', 'Index': -1})
    && !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Weapon_Shield_Hylian'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_106', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Child_Shield_Hylian_ReactionTalk_Event65', 'Value': True, 'Index': -1})
    }
}

void FocusOnAttentionRock_ShieldDeku_Short() {
    Player_Event.EventTriggerPlayerForceLookIKVariationDefault()
    Npc_Kokiri_010_Child.EventTriggerSetModelLodManual({'LodLevel': 0})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_Kokiri_010_Child.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})

    fork {
        Npc_Kokiri_010_Child.EventTriggerBecomeSpeaker()
        Npc_Kokiri_010_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        switch Npc_Kokiri_010_Child.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_19'})
          case 1:
            Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_21'})
          case 2:
            Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_22'})
        }
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kokiri_010_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    }


    fork {
        if !Npc_Kokiri_010_Child.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 15.0}) {

            call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_010_Child"), 'Arg_Turn': 2})

        } else {

            call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_010_Child"), 'Arg_Turn': 3})

        }
        Npc_Kokiri_010_Child.EventTriggerKokiriRequestComeCloserFairy()
    } {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    }


    fork {
        EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'TargetActorName': 'Npc_Kokiri_010_Child', 'TargetActorInstanceName': '', 'Latitude': 0.0, 'Longitude': 0.0, 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896], 'Radius': 1.2000000476837158})
    } {
        Player_Event.EventPlayerTurnAndLookNow({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Obj_AttentionRock_A_03', 'OffsetBase': 0, 'IsDoNavi': False, 'IsWaitEnd': False})
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Kokiri_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Child:Talk_20'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Obj_AttentionRock_A_03', 'PosVector': [0.0, 1.2000000476837158, 5.639999866485596], 'AtVector': [0.0, 0.0, 1.0], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'At_Scarecrow_Pos', 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'NotChangeRot': False})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
}
