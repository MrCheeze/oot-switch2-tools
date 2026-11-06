-------- EventFlow: Dm_Kakariko_0010 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'IsWorld': True, 'IsBindNearestActor': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 0, 'Position': [0.0, 0.0, 0.0], 'Rotation': [0.0, 0.0, 0.0], 'IsGrounding': True}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Hylia_Soldier_003
entrypoint: None()
actions: ['EventTalk', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kakariko_0010_Npc_Hylia_Soldier_003.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kakariko_0010/Dm_Kakariko_0010_Npc_Hylia_MS_001/workspace.pp__ModelProject.gyml'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera[cam]
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera[cam2]
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'EventMemberCreateMethod': 0, 'IsWorld': False, 'Position': [0.0, 0.0, 0.0], 'Rotation': [0.0, 0.0, 0.0]}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Item_ZeldaLetter
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerModelBind', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kakariko_0010/Dm_Kakariko_0010_Item_ZeldaLetter/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kakariko_0010_Item_ZeldaLetter.root.as', 'IsWorld': True, 'Position': [0.0, 0.0, 0.0]}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void C01() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-47.720001220703125, 109.62000274658203, -9.8100004196167], 'UseDemoWait': True, 'YAngle': 166.70480346679688, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 169.4311065673828, 'Position': [-48.099998474121094, 110.69999694824219, -9.699999809265137], 'ClothWarpMode': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Soldier_003', 'PosVector': [0.15000000596046448, 1.2000000476837158, 1.7799999713897705], 'AtVector': [0.09000000357627869, 1.4600000381469727, 0.6200000047683716], 'TargetFovy': 43.470001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Soldier_003.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_Hylia_Soldier_003.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kakariko_0010:Dm_Kakariko_0010_0000', 'EndDialogOption': 3, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': True, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'ASName': 'C01-0'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Item_ZeldaLetter.EventTriggerModelBind({'ActorName': 'Npc_Hylia_Soldier_003', 'BoneName': 'Weapon_L', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, -0.10999999940395355, 0.0]})
        Item_ZeldaLetter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01', 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    }

    Npc_Hylia_Soldier_003.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kakariko_0010:Dm_Kakariko_0010_0001', 'IsCloseDialog': False, 'IsWaitEnd': True, 'EndDialogOption': 3, 'IsAnimeDriven': True, 'ASName': 'C01-1', 'MaintainPerformanceState': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        Npc_Hylia_Soldier_003.EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kakariko_0010:Dm_Kakariko_0010_0002', 'IsPlayASAllSlot': False, 'IsOverrideStyle': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'C02-0', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Soldier_003', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        Item_ZeldaLetter.EventPlayAS({'ASName': 'C02-0', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C05() {

    fork {
        Npc_Hylia_Soldier_003.EventPlayAS({'ASName': 'Act_GateOpen', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-43.7400016784668, 109.79000091552734, -0.8500000238418579], 'AtVector': [-43.77000045776367, 109.98999786376953, -1.7000000476837158], 'TargetFovy': 55.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

        fork {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Soldier_003_GateOpen'})
        } {
            GameSystemActor[vibration].EventWait({'Frames': 6, 'IsWaitEnd': True})
            GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GataGata', 'Length': 3.5})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 260})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'ActorName': '', 'WorldPos': [-42.58000183105469, 112.0, -11.720000267028809]})
        } {
            Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'WorldPos': [-42.58000183105469, 112.0, -11.720000267028809], 'Target': 0, 'ActorName': '', 'IsWaitEnd': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Soldier_003', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        } {
            Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Soldier_003', 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True})
        }

    } {
        Dm_Locator[pos].EventWarpToTargetPosAndRot({'Position': [-39.000999450683594, 110.11299896240234, -11.729999542236328], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Dm_Locator[pos].EventTriggerEmitXLink({'ELinkKey': 'Dm_Kakariko_0010_Smoke_00', 'SLinkKey': ''})
    }

}

void C02() {

    fork {
        EventCamera[cam].EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'Npc_Hylia_Soldier_003', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        Npc_Hylia_Soldier_003.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kakariko_0010:Dm_Kakariko_0010_0004', 'IsWaitEnd': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'C02', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'StartDistance': 4.0, 'EndDistance': 4.0, 'StartFNumber': 70.0, 'EndFNumber': 70.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'NearDepthBlurAdd': 1.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0})
    }

    Npc_Hylia_Soldier_003.EventPlayAS({'ASName': 'C02-1', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
}

void C03() {
    Item_ZeldaLetter.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

    fork {
        EventCamera[cam2].EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': 'Npc_Hylia_Soldier_003', 'RootType': 3, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Hylia_Soldier_003.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kakariko_0010:Dm_Kakariko_0010_0005', 'IsCloseDialog': True, 'ASName': 'C03', 'EndDialogOption': 0, 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.799999952316284, 'EndDistance': 2.799999952316284, 'StartFNumber': 58.599998474121094, 'EndFNumber': 58.599998474121094, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C04() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Hylia_Soldier_003.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Player_Event', 'Target': 2})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-46.45000076293945, 110.23999786376953, -8.65999984741211], 'AtVector': [-47.45000076293945, 110.72000122070312, -10.350000381469727], 'TargetFovy': 45.18000030517578, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Soldier_003.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_Hylia_Soldier_003.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kakariko_0010:Dm_Kakariko_0010_0006', 'IsWaitEnd': True, 'EndDialogOption': 3, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'ASName': 'Act_Laugh', 'MaintainPerformanceState': 0})
        Npc_Hylia_Soldier_003.EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Kakariko_0010:Dm_Kakariko_0010_0007', 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

}

void EntryPoint0() {

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C02'})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C03'})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C04'})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C05'})
    }

}
