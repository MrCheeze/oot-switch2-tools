-------- EventFlow: Npc_GuidePoe_Adult --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_GuidePoe_Adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventWarpToTargetActor', 'EventAIScheduleMoveToAnchor']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerConversate', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_EventStarter[InitTalk_OnEvent_NoCamera_Guidepoe(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoCamera_Guidepoe(Arg_Actor)
actions: ['EventAIScheduleEndTerror', 'EventTriggerBecomeSpeaker', 'EventTriggerBalloonMessage', 'EventTalk']
queries: []
params: None

void Appearance() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_GuidePoe_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': ''})

    call InitTalk_OnEvent_NoCamera_Guidepoe({'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_14', 'Arg_Actor': ActorIdentifier(name="Npc_GuidePoe_Adult"), 'Arg_Turn': 0})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GuidePoe_HaveSeen'})
    Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_01', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DesertColossus_PlayerPosCheck', 'Index': -1}) {
        Event47:

        call GuidePoe_GuideStart_First()

        CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': '', 'IsKill': False})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': '', 'ActorInstanceName': '', 'VectorSetType': 0, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 60, 'PosVector': [0.0, 1.6907520294189453, -2.9885001182556152], 'AtVector': [0.0, 1.4301550388336182, 0.0], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 60, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [0.0, 1.9064199924468994, -3.9794158935546875], 'IsEnableRevertFast': False})
        }
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    } else {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
        Npc_GuidePoe_Adult.EventWarpToTargetActor({'ActorName': 'Npc_GuidePoe_Adult', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.6399999856948853, 1.350000023841858, -1.7599999904632568], 'AtVector': [-0.2800000011920929, 1.3700000047683716, -0.05999999865889549], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        goto Event47
    }
}

void GuidePoe_IsGuiding_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PlayerStatus.IsActiveGlassTruth', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_GuidePoe_Adult:Balloon_00'})
    }
}

void IsMissing_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PlayerStatus.IsActiveGlassTruth', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HountedWasteland_GuidePoe_Adult_IsMissing', 'Index': -1}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_GuidePoe_Adult:Balloon_01'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_GuidePoe_Adult:Balloon_02'})
        }
    }
}

void IsMissing_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    Event57:
    CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': ''})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step03_Exp'}) {
        Event37:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_GuidePoe_Adult_GuidePoe_GuideStart_First_Event7'}) {
            Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_09', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_15', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_03', 'MaintainPerformanceState': 0})
                    CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': '', 'IsKill': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GuidePoe_IsGuiding', 'Index': -1, 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_GuidePoe_Adult_IsMissing', 'Index': -1, 'Value': False})
                } else {
                    Event98:

                    call Guidepoe_GuideStart_Check()

                }
            } else {
                goto Event98
            }
        } else {

            call GuidePoe_GuideStart_First()

            CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': '', 'IsKill': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HountedWasteland_GuidePoe_Adult_IsMissing', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsComplete'}) {
            if Npc_GuidePoe_Adult.EventQueryIsOnRecentTalkFlag() {
                Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_08', 'MaintainPerformanceState': 0})
            }
            Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_09', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_10', 'MaintainPerformanceState': 0})
                CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': '', 'IsKill': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GuidePoe_IsComplete', 'Index': -1, 'Value': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GuidePoe_IsGuiding', 'Index': -1, 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_GuidePoe_Adult_IsMissing', 'Index': -1, 'Value': False})
            } else {

                call Guidepoe_GuideStart_Check()

            }
        } else
        if Npc_GuidePoe_Adult.EventQueryIsOnRecentTalkFlag() {
            Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_02', 'MaintainPerformanceState': 0})
        }
        Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_09', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_15', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_13', 'MaintainPerformanceState': 0})
                CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': '', 'IsKill': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GuidePoe_IsGuiding', 'Index': -1, 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_GuidePoe_Adult_IsMissing', 'Index': -1, 'Value': False})
            } else {
                Event43:

                call Guidepoe_GuideStart_Check()

            }
        } else {
            goto Event43
        }
    } else
    goto Event37
}

void GuidePoe_Disappear_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PlayerStatus.IsActiveGlassTruth', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsComplete'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsGoalandRestart'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_GuidePoe_Adult:Balloon_01'})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_GuidePoe_Adult:Balloon_03'})
            }
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_GuidePoe_Adult:Balloon_04'})
        }
    }
}

void GuidePoe_Disappear_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': ''})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsComplete'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsGoalandRestart'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GuidePoe_IsGoalandRestart'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_08', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_12', 'MaintainPerformanceState': 0})
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_07', 'MaintainPerformanceState': 0})
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': '', 'IsKill': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_11', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_20', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'GuidePoeComplete', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': False, 'IsConfront': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventPlayerTurnAndLook({'InstanceName': 'GuidePoeComplete', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'ActorName': 'DestinationAnchor', 'Target': 5, 'PosOffset': [-5.0, -2.0, 0.0], 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'GuidePoeComplete', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, -1.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 90, 'PosVector': [0.0, -0.5, 11.0], 'IsEnableRevertFast': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_06', 'MaintainPerformanceState': 0})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
        Npc_EventStarter.EventNPCTurnToTarget({'ActorName': 'DestinationAnchor', 'InstanceName': 'GuidePoeComplete', 'Target': 2, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'ActorName': 'Npc_GuidePoe_Adult', 'InstanceName': '', 'Target': 3, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_12', 'MaintainPerformanceState': 0})
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': '', 'IsKill': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GuidePoe_IsComplete', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsGuiding', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_GuidePoe_Adult_IsMissing', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GuidePoe_IsGoalandRestart'})
    }
}

void GuidePoe_GuideStart_First() {

    fork {
        Npc_GuidePoe_Adult.EventNPCTurnToTarget({'IsReleaseThreaten': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 4, 'FaceControlType': 0, 'ActorName': '', 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 225.0, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_00', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtWait'})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    }

    Npc_GuidePoe_Adult.EventNPCTurnToTarget({'IsReleaseThreaten': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': False, 'FaceControlType': 1, 'ActorName': 'Player_Event', 'Target': 2, 'OffsetBase': 1, 'Direction': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_19', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveTalked_Special.Npc_GuidePoe_Adult_GuidePoe_GuideStart_First_Event7'})
    Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_05', 'MaintainPerformanceState': 0, 'ChoiceLabel1': 4})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_15', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_03', 'MaintainPerformanceState': 0})
            Npc_GuidePoe_Adult.EventAIScheduleMoveToAnchor({'ASName': '', 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'GuideStartPos', 'IsAlignAnchorPos': True, 'IsTurnToAnchorRot': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GuidePoe_IsGuiding', 'Index': -1, 'Value': True})
        } else {
            Event104:

            call Guidepoe_GuideStart_Check()

            Npc_GuidePoe_Adult.EventAIScheduleMoveToAnchor({'AnchorType': 4, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'InstanceName': '', 'ASName': '', 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False})
        }
    } else {
        goto Event104
    }
}

void InitTalk_OnEvent_NoCamera_Guidepoe() {
    Npc_GuidePoe_Adult.EventTriggerParticipateEvent()
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_Guidepoe(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})

    fork {
        Npc_EventStarter[InitTalk_OnEvent_NoCamera_Guidepoe(Arg_Actor)].EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    }

    Npc_EventStarter[InitTalk_OnEvent_NoCamera_Guidepoe(Arg_Actor)].EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_GuidePoe_Adult:Balloon_02', 'DisplayFrame': 120})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'Target': 3, 'ActorName': 'Npc_GuidePoe_Adult', 'KeepTalkWait': False, 'UseNormalTurn': True, 'UpperASCommand': '', 'IsDoNavi': True})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'IsUseAfterPlayerTurn': False, 'ArrivedASCommand': 'EvtCaution', 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'OffsetType': 1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Sequence_IsChildhood'}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'Vector': [-1.159999966621399, 0.6700000166893005, -2.5], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3}) {
            Event124:
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 90, 'EnableCameraAlpha': True, 'TargetFovy': 45.0, 'PosVector': [1.159999966621399, 0.6700000166893005, -2.5], 'AtVector': [-0.5899999737739563, 1.4500000476837158, 3.2300000190734863], 'IsEnableRevertFast': False})
            Event132:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Npc_EventStarter[InitTalk_OnEvent_NoCamera_Guidepoe(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})

            call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})

        } else
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'Vector2': [0.0, 0.0, 0.0], 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'IsConsiderWater': False, 'ActorName2': 'Npc_GuidePoe_Adult', 'Vector1': [-1.159999966621399, 0.6700000166893005, -2.5]}) {
            goto Event124
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'AtVector': [0.5899999737739563, 1.4500000476837158, 3.2300000190734863], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 90, 'EnableCameraAlpha': True, 'TargetFovy': 45.0, 'PosVector': [-1.159999966621399, 0.6700000166893005, -2.5], 'IsEnableRevertFast': False})
        }
        goto Event132
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'Vector': [-0.8500000238418579, 1.1799999475479126, -1.7599999904632568], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3}) {
        Event125:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 90, 'EnableCameraAlpha': True, 'TargetFovy': 45.0, 'PosVector': [0.8500000238418579, 1.1799999475479126, -1.7599999904632568], 'AtVector': [0.2800000011920929, 1.274999976158142, -0.05999999865889549], 'IsEnableRevertFast': False})
        goto Event132
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'Vector1': [-0.8500000238418579, 1.1799999475479126, -1.7599999904632568], 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'Vector2': [0.0, 0.0, 0.0], 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'IsConsiderWater': False, 'ActorName2': 'Npc_GuidePoe_Adult'}) {
        goto Event125
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 90, 'EnableCameraAlpha': True, 'TargetFovy': 45.0, 'AtVector': [-0.2800000011920929, 1.274999976158142, -0.05999999865889549], 'PosVector': [-0.8500000238418579, 1.1799999475479126, -1.7599999904632568], 'IsEnableRevertFast': False})
    }
    goto Event132
}

void SageOfSpirit_Check_Gerudo_StoneTablet() {
    Npc_GuidePoe_Adult.EventTriggerParticipateEvent()

    call SignboardWood.Talk()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_HaveSeen'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsGuiding'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_Disappear'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.IsActiveGlassTruth'}) {

            call InitTalk.InitTalk_OnEvent_NoCamera({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_18', 'Arg_Turn': 0, 'Arg_Actor': ActorIdentifier(name="Npc_GuidePoe_Adult"), 'ActorName': 'Npc_GuidePoe_Adult', 'InstanceName': ''})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Sequence_IsChildhood'}) {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'PosVector': [1.159999966621399, 0.6700000166893005, -2.5], 'AtVector': [-0.5899999737739563, 1.149999976158142, 3.2300000190734863], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'PosVector': [0.8600000143051147, 1.1299999952316284, -1.8700000047683716], 'AtVector': [-0.5699999928474426, 1.5299999713897705, 3.950000047683716], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }

            call CheckStoneTable_Talk()

        } else {

            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
            } {
                Npc_GuidePoe_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_17', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            }

        }
    }
}

void CheckStoneTable_Talk() {
    goto Event57
}

void Guidepoe_GuideStart_Check() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GuidePoe_Adult.EventTalk({'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_04', 'MaintainPerformanceState': 0, 'IsWaitEnd': True})
    } else {
        Npc_GuidePoe_Adult.EventTalk({'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_GuidePoe_Adult:Talk_16', 'MaintainPerformanceState': 0, 'IsWaitEnd': True})
    }
    CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Flt_GlassTruthTrue', 'SLinkKey': '', 'IsKill': False})
}
