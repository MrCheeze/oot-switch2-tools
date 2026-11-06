-------- EventFlow: Dm_HrlField_0050 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Kaepora
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventTriggerLookAtObject', 'EventTriggerVoiceChangeSpVoiceMode', 'EventLookAtObjectImmediate', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0050/Dm_HrlField_0050_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0050_Kaepora.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[all_pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0050/Dm_HrlField_0050_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0050_Dm_Locator.root.as'}

Actor: Dm_Locator[KP]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0050/Dm_HrlField_0050_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0050_Dm_Locator.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerSoundStartSceneBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[HanddleStartpos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[KaeporaOffset1]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[HanddleStartposL]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[KaeporaOffset2]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Bonooru
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})

    fork {
        Dm_Locator[all_pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-90.69000244140625, 144.83999633789062, 383.82000732421875], 'ClothWarpMode': -1})
    } {
        Dm_Locator[HanddleStartpos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-97.75, 140.8000030517578, 378.2900085449219], 'ClothWarpMode': -1})
    } {
        Dm_Locator[HanddleStartposL].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-54.91999816894531, 141.17999267578125, 400.0]})
    }


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()

}

void C01() {

    fork {
        Npc_Kaepora.EventTriggerLookAtObject({'OffsetBase': 1, 'ActorName': 'Player_Event', 'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0000', 'EndDialogOption': 3, 'ASName': 'C01', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtNotice', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 10.0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kaepora', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
    } {
        Dm_Locator[KP].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-90.69000244140625, 144.83999633789062, 383.82000732421875], 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        Npc_Kaepora.EventTriggerVoiceChangeSpVoiceMode({'NoPosVoiceMode': 6, 'CommandLife': 0})
    } {
        Npc_Bonooru.EventTriggerParticipateEvent()
        Npc_Pierre.EventTriggerParticipateEvent()
    }

    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Dm_Locator', 'InstanceNameB': 'HanddleStartpos', 'CheckDistance': 7.0}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'VectorSetType': 3, 'ActorName': 'Npc_Kaepora'}) {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'MoveTotargetPosType': 1, 'IsLinearMove': False, 'MoveTime': 70, 'Actor2ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 3, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'LatShiftRange': 30.0, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, 0.0], 'CameraCollisionMode': 2, 'LongShiftRange': 50.0, 'Actor1InstanceName': 'KaeporaOffset1', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kaepora', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsDoNavi': True, 'UseNormalTurn': True, 'SlowTurn': True})
            } {
                Dm_Locator[KaeporaOffset1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-93.30999755859375, 145.0, 378.5], 'ClothWarpMode': -1})
            }

        } else {
            Event68:

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Npc_Kaepora', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'MoveTotargetPosType': 1, 'IsLinearMove': False, 'LongShiftRange': 20.0, 'MoveTime': 70, 'Actor2ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 3, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 20.0, 'CameraCollisionLookAtActorOffset': [0.0, 2.5, 0.0], 'EnableCameraAlpha': True, 'CameraCollisionMode': 2, 'IsEnableRevertFast': False})
            } {
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kaepora', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsDoNavi': True, 'SlowTurn': True, 'UseNormalTurn': True})
            }

        }
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'VectorSetType': 3, 'ActorName': 'Npc_Kaepora'})
    && !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Dm_Locator', 'CheckDistance': 7.0, 'InstanceNameB': 'HanddleStartposL'}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'MoveTotargetPosType': 1, 'IsLinearMove': False, 'MoveTime': 70, 'Actor2ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 3, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'LatShiftRange': 30.0, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, 0.0], 'CameraCollisionMode': 2, 'LongShiftRange': 50.0, 'Actor1InstanceName': 'KaeporaOffset2', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kaepora', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsDoNavi': True, 'SlowTurn': True, 'UseNormalTurn': True})
        } {
            Dm_Locator[KaeporaOffset2].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-80.0, 144.0, 387.0]})
        }

    } else {
        goto Event68
    }
}

void C02() {

    fork {
        Npc_Kaepora.EventLookAtObjectImmediate({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'IsWaitEnd': False})
        Npc_Kaepora.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Talk'})
        Npc_Kaepora.EventWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'InstanceName': 'KP', 'YAngle': 122.43350219726562, 'ClothWarpMode': -1})
        Npc_Kaepora.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': '', 'InstanceName': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsCompleted_Exp'}) {
            Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0001', 'MaintainPerformanceState': 0})
            Event56:
            Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0002', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } else {
            Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0013', 'MaintainPerformanceState': 0})
            Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0014', 'MaintainPerformanceState': 0})
            Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0015', 'MaintainPerformanceState': 0})
            goto Event56
        }
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -30.0, 'InstanceName': 'all_pos', 'ASCommand': 'EvtWait', 'PositionOffset': [8.291500091552734, -4.449999809265137, -5.145100116729736]})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kaepora', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'Actor2ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 3, 'LatShiftRange': 20.0, 'LongShiftRange': 20.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'all_pos', 'PosVector': [3.3299999237060547, -0.6100000143051147, -1.9800000190734863], 'AtVector': [2.4700000286102295, -0.7699999809265137, -1.4800000190734863], 'TargetFovy': 46.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.5, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'all_pos', 'PosVector': [3.3499999046325684, -0.029999999329447746, -1.9900000095367432], 'AtVector': [2.440000057220459, 0.25, -1.4600000381469727], 'TargetFovy': 46.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 3, 'LatShiftRange': 20.0, 'LongShiftRange': 20.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 320, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'Position': [-81.97000122070312, 142.3699951171875, 378.8299865722656], 'YAngle': -27.127479553222656, 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C02'})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_HrlField_0050'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 3.0, 'StartDistance': 3.0, 'IsEnableNear': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartFNumber': 21.200000762939453, 'EndFNumber': 21.200000762939453, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C03() {

    fork {
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0003', 'MaintainPerformanceState': 0})
        Npc_Kaepora.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0004', 'EndDialogOption': 3, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'all_pos', 'PosVector': [9.109999656677246, -1.3200000524520874, -7.309999942779541], 'AtVector': [6.329999923706055, -1.0700000524520874, -3.6500000953674316], 'TargetFovy': 36.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'all_pos', 'PosVector': [9.109999656677246, -3.1600000858306885, -7.320000171661377], 'AtVector': [6.820000171661377, -3.5199999809265137, -3.3399999141693115], 'TargetFovy': 36.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 320, 'StartAccelerateRate': 0.30000001192092896, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'Frames': 40, 'IsWaitEnd': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C03'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 9.0, 'EndDistance': 9.0, 'StartFNumber': 12.100000381469727, 'EndFNumber': 12.100000381469727, 'IsEnableNear': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C04() {

    fork {
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0005', 'MaintainPerformanceState': 0})
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0006', 'MaintainPerformanceState': 0, 'EndDialogOption': 3})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'all_pos', 'PosVector': [3.809999942779541, -0.2199999988079071, -2.380000114440918], 'AtVector': [3.259999990463257, -0.029999999329447746, -2.0299999713897705], 'TargetFovy': 35.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 12.100000381469727, 'EndFNumber': 12.100000381469727, 'StartDistance': 7.0, 'EndDistance': 7.0, 'IsEnableNear': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Kaepora.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'KP', 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 140.0, 0.0]})
}

void C05() {

    fork {
        Npc_Kaepora.EventPlayASWithClothWarp({'ClothWarpMode': 2, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Talk'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsCompleted_Exp'}) {
            Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0012', 'IsAnimeDriven': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } else {
            Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_HrlField_0050:Dm_HrlField_0050_0016', 'IsCloseDialog': True})
        }
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C04-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'OverwriteStartFrame': 0.0, 'IsLoop': True, 'OverwriteEndFrame': 1.0, 'IsWaitEnd': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C05'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_HrlField_0050'})

    fork {
        Npc_Kaepora.EventPlayAS({'ASName': 'C04', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        Dm_Locator[KP].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C04', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C04-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Kaepora.EventTriggerEmitXLink({'ELinkKey': 'Dm_HrlField_0050_Jump_01', 'SLinkKey': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'all_pos', 'PosVector': [8.8100004196167, -3.4600000381469727, -6.980000019073486], 'AtVector': [7.190000057220459, -3.2300000190734863, -3.7899999618530273], 'TargetFovy': 39.959999084472656, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'all_pos', 'PosVector': [8.8100004196167, -2.440000057220459, -6.980000019073486], 'AtVector': [6.78000020980835, -2.059999942779541, -4.039999961853027], 'TargetFovy': 40.65999984741211, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.4000000059604645, 'MoveTime': 550, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C06', 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'BgmName': 'BGM_HyruleField', 'StartType': 2})
}
