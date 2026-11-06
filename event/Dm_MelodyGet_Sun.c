-------- EventFlow: Dm_MelodyGet_Sun --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsChild']
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EventMemberCreateMethod': 0, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Sun/Dm_MelodyGet_Sun/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Sun_Player.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[cam_P]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventNaviMoveAtPos', 'EventGoOffstageForUser', 'EventTalk', 'EventNaviLookAtObject', 'EventNaviTrailRestart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[stone1]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[stone2]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[stone3]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor[03]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor[cutnumber]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSetPerformerSystem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_Navi
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {
    if !Player_Event.EventQueryPlayerIsChild() {
        Dm_Locator[cam_P].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [152.6999969482422, 98.12000274658203, 2.6700000762939453], 'ClothWarpMode': -1})

        call C1()


        call C2_1()


        call C2_2()


        call C3()


        call C4()


        call C5()

    } else {
        Dm_Locator[cam_P].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [152.6999969482422, 98.0999984741211, 2.7300000190734863], 'ClothWarpMode': -1})

        call C1_A()


        call C2_1A()


        call C2_2A()


        call C3_A()


        call C4_A()


        call C5_A()

    }
}

void C1() {

    fork {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'InstanceName': 'cam_P', 'OffsetBase': 1, 'PositionOffset': [-0.5, 1.0, 0.5], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C01'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.8999999761581421, 1.25, -1.840000033378601], 'AtVector': [0.5799999833106995, 0.6299999952316284, -0.7099999785423279], 'TargetFovy': 46.970001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Navi_MV_05', 'IsIgnoreDucking': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 9.0, 'EndFNumber': 9.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Npc_Navi.EventNaviMoveAtPos({'LookAtTarget': 0, 'MoveSpeed': 2.0, 'MinimumSpeed': 2.0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsWaitEnd': True, 'ASCommand': '', 'LookAtWorldPos': [164.0, 97.0, 0.0], 'WorldPos': [153.3699951171875, 99.16000366210938, 2.059999942779541], 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True})
        Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0000', 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Dm_Locator[stone1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [153.4499969482422, 98.58999633789062, 2.622999906539917], 'ClothWarpMode': -1})
        Dm_Locator[stone2].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [153.8800048828125, 98.80000305175781, 3.240000009536743], 'ClothWarpMode': -1})
    }

}

void C2_1() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-1.6299999952316284, 1.059999942779541, -1.4700000286102295], 'AtVector': [-0.5199999809265137, 0.7400000095367432, -0.699999988079071], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0001', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C02'})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'OffsetBase': 1, 'IsWaitEnd': True, 'TargetActorKind': 1, 'PositionOffset': [-0.6000000238418579, 0.0, 0.0], 'YAngle': 90.0, 'ASCommand': 'EvtWait'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'EndFNumber': 12.0, 'StartFNumber': 12.0, 'EndDistance': 2.0999999046325684, 'StartDistance': 2.0999999046325684, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0002', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
}

void C3() {

    fork {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C04'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.5600000023841858, 0.6899999976158142, -0.8299999833106995], 'AtVector': [0.4699999988079071, 1.2400000095367432, 0.20000000298023224], 'TargetFovy': 64.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Dm_Locator', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': 'stone3', 'WorldPos': [153.5, 98.80000305175781, 2.0999999046325684]})
    } {
        Dm_Locator[stone3].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [153.5399932861328, 98.8499984741211, 2.1500000953674316], 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 1.2999999523162842, 'EndDistance': 1.2999999523162842, 'StartFNumber': 13.0, 'EndFNumber': 13.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0006', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0007', 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})

    fork {
        Npc_Navi.EventNaviMoveAtPos({'LookAtTarget': 0, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtWorldPos': [156.99000549316406, 98.5, -7.210000038146973], 'ASCommand': '', 'WorldPos': [153.10000610351562, 98.6500015258789, 2.2699999809265137], 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'MoveSpeed': 1.2000000476837158, 'DecSpeedDistance': 0.05000000074505806, 'IncSpeedDistance': 0.0, 'IsWaitEnd': False, 'OverwriteRotNearDist': -1.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 85, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.8899999856948853, 0.6299999952316284, -1.0299999713897705], 'AtVector': [0.2199999988079071, 0.28999999165534973, -0.6899999976158142], 'TargetFovy': 56.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Dm_Npc_Navi.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Navi_MV_08'})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0008', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0009', 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
}

void C4() {

    fork {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-2.0, 1.2599999904632568, -1.4500000476837158], 'AtVector': [0.11999999731779099, 0.36000001430511475, -0.7699999809265137], 'TargetFovy': 20.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C05', 'Text2': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 2.700000047683716, 'EndDistance': 2.700000047683716, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    GameSystemActor.EventTriggerSetPerformerSystem()

    call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 3, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0014'})

}

void C5() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C06-Child', 'IsAllSlot': True, 'ClothWarpMode': 3, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0})

        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 3})

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [0.25999999046325684, 0.6800000071525574, 0.4699999988079071], 'AtVector': [0.17000000178813934, 0.6899999976158142, 0.41999998688697815], 'TargetFovy': 47.970001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartFNumber': 12.0, 'EndFNumber': 12.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C06'})
    } {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'PositionOffset': [-0.20000000298023224, -100.0, -0.550000011920929], 'ClothWarpMode': -1})
    }


    fork {

        call Dm_SY_Ocarina.LearningOcarinaPlayAuto()

    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 230, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [0.4399999976158142, 0.6200000047683716, 0.5699999928474426], 'AtVector': [0.17000000178813934, 0.6499999761581421, 0.41999998688697815], 'TargetFovy': 47.970001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 45, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [0.4399999976158142, 1.2899999618530273, 0.5699999928474426], 'AtVector': [0.20999999344348907, 1.440000057220459, 0.4399999976158142], 'TargetFovy': 47.970001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    }

    DevelopEventSystemActor[03].EventDemoProductSupportComment({'BgAlignW': 2, 'BgAlignH': 2, 'Text1': '', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3})
}

void C2_2() {

    fork {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C03'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.9100000262260437, 2.049999952316284, -0.14000000059604645], 'AtVector': [-0.4399999976158142, 1.690000057220459, -0.14000000059604645], 'TargetFovy': 58.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 1.2999999523162842, 'EndDistance': 1.2999999523162842, 'StartFNumber': 13.0, 'EndFNumber': 13.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Npc_Navi.EventTalk({'IsCloseDialog': False, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0003', 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        Dm_Npc_Navi.EventTriggerEmitXLink({'SLinkKey': 'Navi_MV_06', 'ELinkKey': ''})
        Npc_Navi.EventNaviMoveAtPos({'IsLookAtObject': False, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'ASCommand': '', 'LookAtOffsetBase': 0, 'LookAtDirection': 90.0, 'LookAtTarget': 3, 'LookAtActorName': 'Dm_Locator', 'LookAtInstanceName': 'stone1', 'MinimumSpeed': 0.0, 'MoveSpeed': 1.2000000476837158, 'IncSpeedDistance': 0.0, 'WorldPos': [153.3000030517578, 98.80000305175781, 2.619999885559082], 'LookAtWorldPos': [153.60000610351562, 98.69999694824219, 2.5], 'OverwriteRotNearDist': 0.30000001192092896, 'IsTurnLooking': True, 'DecSpeedDistance': 0.20000000298023224})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Dm_Locator', 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': 'stone1', 'WorldPos': [153.3000030517578, 98.80000305175781, 2.5], 'Direction': 90.0, 'PosOffset': [0.0, 0.20000000298023224, -0.10000000149011612]})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0004', 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        Dm_Npc_Navi.EventTriggerEmitXLink({'SLinkKey': 'Navi_MV_07', 'ELinkKey': ''})
        Npc_Navi.EventNaviMoveAtPos({'IsLookAtObject': False, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'ASCommand': '', 'WorldPos': [153.1699981689453, 99.41999816894531, 3.3399999141693115], 'LookAtWorldPos': [154.42999267578125, 98.83000183105469, 3.190999984741211], 'LookAtOffsetBase': 0, 'LookAtDirection': 90.0, 'LookAtTarget': 3, 'LookAtActorName': 'Dm_Locator', 'LookAtInstanceName': 'stone2', 'MinimumSpeed': 0.0, 'MoveSpeed': 1.2000000476837158, 'IncSpeedDistance': 0.0, 'IsTurnLooking': True, 'DecSpeedDistance': 0.20000000298023224, 'OverwriteRotNearDist': 0.30000001192092896})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [153.0, 98.80000305175781, 2.700000047683716], 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'stone2', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0005', 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 700, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.9100000262260437, 2.049999952316284, 0.009999999776482582], 'AtVector': [-0.4399999976158142, 1.690000057220459, 0.009999999776482582], 'TargetFovy': 58.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    }

}

void C1_A() {

    fork {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'InstanceName': 'cam_P', 'OffsetBase': 1, 'PositionOffset': [-0.5, 1.0, 0.5], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C01'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.8999999761581421, 1.25, -1.840000033378601], 'AtVector': [0.5799999833106995, 0.6299999952316284, -0.7099999785423279], 'TargetFovy': 46.970001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Navi_MV_05', 'IsIgnoreDucking': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 9.0, 'EndFNumber': 9.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Npc_Navi.EventNaviMoveAtPos({'LookAtTarget': 0, 'MoveSpeed': 2.0, 'MinimumSpeed': 2.0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsWaitEnd': True, 'ASCommand': '', 'LookAtWorldPos': [164.0, 97.0, 0.0], 'WorldPos': [153.3699951171875, 99.16000366210938, 2.059999942779541], 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True})
        Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0000', 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Dm_Locator[stone1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [153.4499969482422, 98.11000061035156, 2.622999906539917], 'ClothWarpMode': -1})
        Dm_Locator[stone2].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [153.8800048828125, 98.80000305175781, 3.240000009536743], 'ClothWarpMode': -1})
    }

}

void C2_1A() {

    fork {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0001', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-1.9900000095367432, 1.5399999618530273, -1.5800000429153442], 'AtVector': [-0.20999999344348907, 0.8600000143051147, -0.47999998927116394], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'OffsetBase': 1, 'IsWaitEnd': True, 'TargetActorKind': 1, 'PositionOffset': [-0.6000000238418579, 0.0, 0.0], 'YAngle': 90.0, 'ASCommand': 'EvtWait'})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C02'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'EndFNumber': 12.0, 'StartFNumber': 12.0, 'EndDistance': 2.0999999046325684, 'StartDistance': 2.0999999046325684, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0002', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
}

void C3_A() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.5600000023841858, 0.6899999976158142, -0.8299999833106995], 'AtVector': [0.4699999988079071, 1.2400000095367432, 0.20000000298023224], 'TargetFovy': 64.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C04'})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Dm_Locator', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': 'stone3', 'WorldPos': [153.5, 98.80000305175781, 2.0999999046325684]})
    } {
        Dm_Locator[stone3].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [153.5399932861328, 98.8499984741211, 2.1500000953674316], 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 1.2999999523162842, 'EndDistance': 1.2999999523162842, 'StartFNumber': 13.0, 'EndFNumber': 13.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0006', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0007', 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})

    fork {
        Npc_Navi.EventNaviMoveAtPos({'LookAtTarget': 0, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'LookAtWorldPos': [156.99000549316406, 98.5, -7.210000038146973], 'ASCommand': '', 'WorldPos': [153.10000610351562, 98.6500015258789, 2.2699999809265137], 'IsTurnLooking': False, 'MoveSpeed': 1.2000000476837158, 'MinimumSpeed': 0.0, 'IsWaitEnd': False, 'OverwriteRotNearDist': -1.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 85, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.8899999856948853, 0.6299999952316284, -1.0299999713897705], 'AtVector': [0.2199999988079071, 0.28999999165534973, -0.6899999976158142], 'TargetFovy': 56.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Dm_Npc_Navi.EventTriggerEmitXLink({'SLinkKey': 'Navi_MV_08', 'ELinkKey': ''})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0008', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0009', 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
}

void C4_A() {

    fork {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-2.0, 1.2599999904632568, -1.4500000476837158], 'AtVector': [0.11999999731779099, 0.36000001430511475, -0.7699999809265137], 'TargetFovy': 20.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C05', 'Text2': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 2.700000047683716, 'EndDistance': 2.700000047683716, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    GameSystemActor.EventTriggerSetPerformerSystem()

    call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 3, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0014'})

}

void C5_A() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 3, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C06-Adult'})

        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 3})

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [0.3799999952316284, 1.1399999856948853, 0.5], 'AtVector': [0.1899999976158142, 1.1399999856948853, 0.38999998569488525], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartFNumber': 13.800000190734863, 'EndFNumber': 13.800000190734863, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C06'})
    } {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'PositionOffset': [-0.20000000298023224, -100.0, -0.550000011920929], 'ClothWarpMode': -1})
    }


    fork {

        call Dm_SY_Ocarina.LearningOcarinaPlayAuto()

    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 230, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [0.5600000023841858, 1.1299999952316284, 0.6100000143051147], 'AtVector': [0.1899999976158142, 1.1399999856948853, 0.38999998569488525], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 45, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [0.5600000023841858, 2.819999933242798, 0.6100000143051147], 'AtVector': [0.25999999046325684, 3.069999933242798, 0.4300000071525574], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    }

}

void C2_2A() {

    fork {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C03'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.9100000262260437, 2.049999952316284, -0.14000000059604645], 'AtVector': [-0.4399999976158142, 1.690000057220459, -0.14000000059604645], 'TargetFovy': 58.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 1.2999999523162842, 'EndDistance': 1.2999999523162842, 'StartFNumber': 13.0, 'EndFNumber': 13.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Npc_Navi.EventTalk({'IsCloseDialog': False, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0003', 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        Dm_Npc_Navi.EventTriggerEmitXLink({'SLinkKey': 'Navi_MV_06', 'ELinkKey': ''})
        Npc_Navi.EventNaviMoveAtPos({'IsLookAtObject': False, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'ASCommand': '', 'LookAtOffsetBase': 0, 'LookAtDirection': 90.0, 'LookAtTarget': 3, 'LookAtActorName': 'Dm_Locator', 'LookAtInstanceName': 'stone1', 'MinimumSpeed': 0.0, 'MoveSpeed': 1.2000000476837158, 'IncSpeedDistance': 0.0, 'WorldPos': [153.3000030517578, 98.80000305175781, 2.619999885559082], 'LookAtWorldPos': [153.60000610351562, 98.69999694824219, 2.5], 'OverwriteRotNearDist': 0.30000001192092896, 'IsTurnLooking': True, 'DecSpeedDistance': 0.20000000298023224})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Dm_Locator', 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': 'stone1', 'WorldPos': [153.3000030517578, 98.80000305175781, 2.5], 'Direction': 90.0, 'PosOffset': [0.0, 0.20000000298023224, -0.10000000149011612]})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0004', 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        Dm_Npc_Navi.EventTriggerEmitXLink({'SLinkKey': 'Navi_MV_07', 'ELinkKey': ''})
        Npc_Navi.EventNaviMoveAtPos({'IsLookAtObject': False, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'ASCommand': '', 'WorldPos': [153.1699981689453, 99.41999816894531, 3.3399999141693115], 'LookAtWorldPos': [154.42999267578125, 98.83000183105469, 3.190999984741211], 'LookAtOffsetBase': 0, 'LookAtDirection': 90.0, 'LookAtTarget': 3, 'LookAtActorName': 'Dm_Locator', 'LookAtInstanceName': 'stone2', 'MinimumSpeed': 0.0, 'MoveSpeed': 1.2000000476837158, 'IncSpeedDistance': 0.0, 'IsTurnLooking': True, 'DecSpeedDistance': 0.20000000298023224, 'OverwriteRotNearDist': 0.30000001192092896})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [153.0, 98.80000305175781, 2.700000047683716], 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'stone2', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0005', 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 700, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-0.9100000262260437, 2.049999952316284, 0.009999999776482582], 'AtVector': [-0.4399999976158142, 1.690000057220459, 0.009999999776482582], 'TargetFovy': 58.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    }

}
