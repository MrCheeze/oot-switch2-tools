-------- EventFlow: Dm_InsideGanonCastle_0005 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMove', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsWorld': True}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_Core_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_Core_B_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_Core_C_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_Core_D_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_Core_E_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_Core_F_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint_Forest() {
    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [52.66999816894531, 106.94999694824219, 71.2300033569336], 'ClothWarpMode': -1})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 9.0, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'WorldPos': [47.47999954223633, 102.9000015258789, 62.369998931884766], 'DecSpeedDistance': 0.800000011920929, 'MoveSpeed': 0.30000001192092896, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'IsWaitEnd': True, 'SlowTurn': False, 'UseNormalTurn': True, 'OffsetBase': 1, 'PosOffset': [-0.10000000149011612, 0.0, 0.0], 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveTime': 250, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-4.760000228881836, -1.7100000381469727, -8.210000038146973], 'AtVector': [-2.8399999141693115, -1.440000057220459, -4.889999866485596], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Obj_InsideGanonCastle_Core_B_01.EventTriggerParticipateEvent()
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0005:Dm_InsideGanonCastle_0005_0000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'EvtWait', 'NotPlayLipSyncAnim': True, 'IsNotBecomeSpeaker': False})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    Event66:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideGanonCastle_Dungeon_SeeBarrierGuide', 'Index': -1, 'Value': True})
}

void EntryPoint_Fire() {
    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-57.06999969482422, 107.80000305175781, -111.75], 'ClothWarpMode': -1})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 9.0, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'WorldPos': [-51.90999984741211, 103.9800033569336, -102.79000091552734], 'DecSpeedDistance': 0.800000011920929, 'MoveSpeed': 0.30000001192092896, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'IsWaitEnd': True, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'AtVector': [-2.8399999141693115, -1.440000057220459, -4.889999866485596], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-4.619999885559082, -1.690000057220459, -7.96999979019165], 'CameraCollisionMode': 1, 'MoveTime': 250, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Obj_InsideGanonCastle_Core_C_01.EventTriggerParticipateEvent()
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0005:Dm_InsideGanonCastle_0005_0000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'EvtWait'})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    goto Event66
}

void EntryPoint_Water() {
    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 60.0, 'Position': [108.4800033569336, 103.44999694824219, -20.950000762939453], 'ClothWarpMode': -1})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 9.0, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'WorldPos': [98.30000305175781, 99.73999786376953, -21.030000686645508], 'DecSpeedDistance': 0.800000011920929, 'MoveSpeed': 0.30000001192092896, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'IsWaitEnd': True, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveTime': 250, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-4.590000152587891, -1.5299999713897705, -7.920000076293945], 'AtVector': [-2.8399999141693115, -1.2899999618530273, -4.889999866485596], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Obj_InsideGanonCastle_Core_D_01.EventTriggerParticipateEvent()
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0005:Dm_InsideGanonCastle_0005_0000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'EvtWait', 'NotPlayLipSyncAnim': True})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    goto Event66
}

void EntryPoint_Shadow() {
    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 120.0, 'Position': [69.87000274658203, 108.95999908447266, -142.9499969482422], 'ClothWarpMode': -1})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 9.0, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'WorldPos': [64.76000213623047, 105.4000015258789, -134.10000610351562], 'DecSpeedDistance': 0.800000011920929, 'MoveSpeed': 0.30000001192092896, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'IsWaitEnd': True, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-4.619999885559082, -1.3300000429153442, -7.96999979019165], 'AtVector': [-2.8399999141693115, -1.0800000429153442, -4.889999866485596], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'MoveTime': 250, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Obj_InsideGanonCastle_Core_E_01.EventTriggerParticipateEvent()
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0005:Dm_InsideGanonCastle_0005_0000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'EvtWait'})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    goto Event66
}

void EntryPoint_Spirit() {
    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -60.0, 'Position': [-42.22999954223633, 108.41000366210938, 58.61000061035156], 'ClothWarpMode': -1})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 9.0, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        Player_Event.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'WorldPos': [-37.13999938964844, 105.01000213623047, 49.709999084472656], 'IsWaitEnd': True, 'DecSpeedDistance': 0.800000011920929, 'MoveSpeed': 0.30000001192092896, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'IsWaitEnd': True, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-4.510000228881836, -1.2599999904632568, -7.78000020980835], 'AtVector': [-3.069999933242798, -1.059999942779541, -5.28000020980835], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 250, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Obj_InsideGanonCastle_Core_F_01.EventTriggerParticipateEvent()
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0005:Dm_InsideGanonCastle_0005_0000', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'ASName': 'EvtWait', 'NotPlayLipSyncAnim': True})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    goto Event66
}

void EntryPoint_Shine() {
    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -120.0, 'Position': [-115.33000183105469, 103.9800033569336, -21.0], 'ClothWarpMode': -1})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 9.0, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'WorldPos': [-104.68000030517578, 100.5, -21.0], 'DecSpeedDistance': 0.800000011920929, 'MoveSpeed': 0.699999988079071, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'IsWaitEnd': True, 'SlowTurn': False, 'UseNormalTurn': True, 'PosOffset': [0.0, 0.0, -0.10000000149011612], 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-4.630000114440918, -1.2899999618530273, -7.980000019073486], 'AtVector': [-3.0399999618530273, -1.0700000524520874, -5.239999771118164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'MoveTime': 250, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Obj_InsideGanonCastle_Core_A_01.EventTriggerParticipateEvent()
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0005:Dm_InsideGanonCastle_0005_0000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'EvtWait'})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    goto Event66
}
