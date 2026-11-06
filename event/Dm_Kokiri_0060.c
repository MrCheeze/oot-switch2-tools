-------- EventFlow: Dm_Kokiri_0060 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Kokiri_Saria_Child
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventLookAtObjectImmediate', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0060/Dm_Kokiri_0060_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0060_Npc_Kokiri_WC_Saria.root.as'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveAroundToPlayer', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0060/Dm_Kokiri_0060_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0060_Navi.root.as', 'ExceptionalBindType': 3}

Actor: Npc_Fairy_Saria
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0060/Dm_Kokiri_0060_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0060_Navi.root.as'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[1]
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0060/Dm_Kokiri_0060_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0060_Navi.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Dm_Npc_Fairy_HighModel
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerSetFairyColor', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0060/Dm_Kokiri_0060_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0060_Navi.root.as'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_Mido_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_005_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C01()


    call C02()


    call C03()


    call C04()

}

void C01() {
    Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -80.0, 'Position': [-25.02182960510254, 112.40740203857422, 8.841047286987305], 'ClothWarpMode': -1})

    fork {
        Npc_Fairy_Saria.EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'InstanceName': '', 'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Npc_Kokiri_Saria_Child', 'ClothWarpMode': -1, 'PositionOffset': [-0.30000001192092896, 11.0, 0.0]})
        Npc_Fairy_Saria.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'C01-Npc_Navi-B-0-1FrameFix'})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'YAngle': 80.0, 'Position': [-25.056060791015625, 121.53260040283203, 8.415900230407715], 'IsWaitEnd': True})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C01-Npc_Navi-A-0-1FrameFix'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-25.850000381469727, 113.47000122070312, 7.869999885559082], 'AtVector': [-24.799999237060547, 112.01000213623047, 9.210000038146973], 'TargetFovy': 18.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 130, 'PosVector': [-25.84000015258789, 113.47000122070312, 7.880000114440918], 'AtVector': [-24.739999771118164, 112.0199966430664, 9.1899995803833], 'TargetFovy': 18.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 240, 'PosVector': [-25.979999542236328, 113.41999816894531, 8.359999656677246], 'AtVector': [-24.440000534057617, 111.77999877929688, 8.859999656677246], 'TargetFovy': 19.360000610351562, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'EndBluarLevel': 1.2999999523162842, 'StartBluarLevel': 1.2999999523162842, 'IsWaitEnd': True, 'IsEnableNear': True, 'StartDistance': 1.5499999523162842, 'StartFNumber': 160.0, 'EndFNumber': 160.0, 'EndDistance': 1.5499999523162842, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 70.0, 'Position': [-25.06999969482422, 110.5999984741211, 8.930000305175781], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-25.02182960510254, 112.50740051269531, 8.741046905517578], 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': ''})
    } {
        Npc_Kokiri_Saria_Child.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False, 'ASName': 'Demo_Wait', 'IsWaitEnd': False})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Kokiri_Saria_Child.EventLookAtObjectImmediate({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'ActorName': '', 'IsWaitEnd': True, 'WorldPos': [-25.02182960510254, 112.50740051269531, 8.741046905517578], 'PosOffset': [0.0, 0.10000000149011612, 0.0]})
        Npc_Kokiri_Saria_Child.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-23.77899932861328, 110.49700164794922, 8.668000221252441], 'YAngle': 270.0, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 340})
        Npc_Kokiri_Saria_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0000', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0001', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
    } {

        fork {
            Dm_Npc_Navi.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Navi_MV_00'})
            Dm_Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'YAngle': 180.0, 'InstanceName': '', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [0.0, 0.0, 0.6000000238418579], 'ClothWarpMode': -1})
            Dm_Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01-Npc_Navi-A-0'})
        } {
            Dm_Npc_Fairy_HighModel.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Navi_MV_01'})
            Dm_Npc_Fairy_HighModel.EventTriggerSetFairyColor({'Color': 3})
            Dm_Npc_Fairy_HighModel.EventWarpToTargetActor({'YAngle': 0.0, 'InstanceName': '', 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [0.0, 0.0, -0.6000000238418579], 'ClothWarpMode': -1})
            Dm_Npc_Fairy_HighModel.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01-Npc_Navi-B-0'})
        }

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C01', 'IsWaitEnd': True})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0060_C01', 'CurrDemoPaletteName': 'Dm_Kokiri_0060_C01'})
    } {
        Npc_Kokiri_005_Child.EventTriggerParticipateEvent()
        Npc_Kokiri_Mido_Child.EventTriggerParticipateEvent()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C03() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C03'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-23.899999618530273, 111.62999725341797, 8.420000076293945], 'AtVector': [-25.100000381469727, 111.55999755859375, 8.649999618530273], 'TargetFovy': 32.5, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-23.899999618530273, 111.62999725341797, 8.420000076293945], 'AtVector': [-25.079999923706055, 111.54000091552734, 8.739999771118164], 'TargetFovy': 32.5, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.0499999523162842, 'EndDistance': 1.0499999523162842, 'StartFNumber': 92.30000305175781, 'EndFNumber': 92.30000305175781, 'StartBluarLevel': 2.7200000286102295, 'EndBluarLevel': 2.7200000286102295, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.5, 1.100000023841858, -0.20000000298023224], 'ClothWarpMode': -1})
        Npc_Navi.EventTriggerEmitXLink({'SLinkKey': 'Navi_MV_02', 'ELinkKey': ''})
        Npc_Navi.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Navi_MV_03'})
        Npc_Navi.EventNaviMoveAroundToPlayer({'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'IsNearOffset': False, 'IsHomePosition': False, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.30000001192092896, 'MinimumSpeed': 0.30000001192092896, 'IsTurnLooking': False, 'IsLookAtObject': True, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.699999988079071, 'IsWaitEnd': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Kokiri_Saria_Child', 'offset': [0.4000000059604645, 0.07000000029802322, 0.20000000298023224], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0011', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': False, 'ASName': '', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_Navi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [-0.699999988079071, 1.5, -10.0]})
    } {
        Npc_Fairy_Saria.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C04-Npc_Navi-B-0-FlyLoop', 'IsWaitEnd': False})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0060_C03', 'CurrDemoPaletteName': 'Dm_Kokiri_0060_C03'})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_Kokiri_Saria_Child.EventTriggerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Navi', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'PosOffset': [0.20000000298023224, -0.2800000011920929, 0.0]})
}

void C04() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C04'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-25.81599998474121, 111.65979766845703, 7.8128509521484375], 'AtVector': [-24.80769920349121, 111.37999725341797, 8.62406063079834], 'TargetFovy': 44.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.75, 'EndDistance': 1.75, 'StartFNumber': 71.0, 'EndFNumber': 71.0, 'StartBluarLevel': 1.5299999713897705, 'EndBluarLevel': 1.5299999713897705, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'ASName': 'Act_Surprise_Wait', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child.EventTriggerRequestLookAtTheFront()
        Npc_Kokiri_Saria_Child.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'WorldPos': [-25.191999435424805, 111.37899780273438, 8.821499824523926]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0006', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0007', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'ASName': 'Act_Think_Wait', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0008', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ASName': 'Act_Joy_Wait', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0009', 'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0060_C01', 'CurrDemoPaletteName': 'Dm_Kokiri_0060_C01'})
    }


    fork {
        Npc_Kokiri_Saria_Child.EventTriggerRequestLookAtTheFront()
        Npc_Kokiri_Saria_Child.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C05', 'IsAnimeDriven': True, 'IsAllSlot': True, 'IsWaitEnd': True})
        Npc_Kokiri_Saria_Child.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0010', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'IsAnimeDriven': False, 'ASName': 'C05_Turn-Npc_Kokiri_WC_Saria-A-0-Loop', 'IsWaitEnd': True})
        Npc_Kokiri_Saria_Child.EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'ResetArriveTransformFixed': False, 'WorldPos': [15.878000259399414, 120.0, 0.0]})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [15.878000259399414, 130.0, 13.10099983215332]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Player_Event.EventPlayerTurnAndLook({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'OffsetBase': 0, 'Direction': 0.0, 'KeepTalkWait': False, 'WorldPos': [15.878000259399414, 130.0, 13.10099983215332], 'UpperASCommand': 'DemoWaitQuarter', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0060_C05', 'CurrDemoPaletteName': 'Dm_Kokiri_0060_C05'})

        fork {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.7450000047683716, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'SceneName': 'C07-3'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.75, 'EndDistance': 1.75, 'StartFNumber': 71.0, 'EndFNumber': 71.0, 'StartBluarLevel': 1.5299999713897705, 'EndBluarLevel': 1.5299999713897705, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }

    } {
        Npc_Fairy_Saria.EventPlayAS({'ASName': 'C04-Npc_Navi-B-0', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C05', 'IsWaitEnd': False})
    } {
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    }

    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    Npc_Kokiri_Saria_Child.EventNPCTurnToTarget({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 0, 'ActorName': '', 'WorldPos': [15.878000259399414, 130.0, 0.0], 'FaceControlType': 0, 'IsWaitEnd': False})
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-25.81599998474121, 111.65979766845703, 7.8128509521484375], 'AtVector': [-24.80769920349121, 111.37999725341797, 8.62406063079834], 'TargetFovy': 44.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.0299999713897705, 'EndDistance': 2.0299999713897705, 'StartFNumber': 92.30000305175781, 'EndFNumber': 92.30000305175781, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Npc_Kokiri_Saria_Child', 'TurnFaceControlType': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        Npc_Kokiri_Saria_Child.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'WorldPos': [-25.191999435424805, 111.37899780273438, 8.821499824523926]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0002', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'ASName': 'Act_Joy_Wait', 'MaintainPerformanceState': 0})
    } {
        Npc_Fairy_Saria.EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'InstanceName': '', 'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Npc_Kokiri_Saria_Child', 'PositionOffset': [-0.30000001192092896, 1.0, 0.0], 'ClothWarpMode': -1})
        GameSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
        Npc_Fairy_Saria.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02-Npc_Navi-B-0', 'IsWaitEnd': False, 'IsAnimeDriven': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'Position': [-25.056060791015625, 111.53260040283203, 8.415900230407715], 'YAngle': 80.0, 'IsWaitEnd': True})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'C02-Npc_Navi-A-0', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C02'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Dm_Kokiri_0060_C02_Navi_MV', 'IsIgnoreDucking': False})
    } {
        Dm_Npc_Fairy_HighModel.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-25.051000595092773, 111.5, 8.991999626159668], 'Target': 3, 'ActorName': 'Npc_Kokiri_Saria_Child'})
    } {
        Npc_Kokiri_Saria_Child.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Navi', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': False, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosOffset': [0.20000000298023224, -0.2800000011920929, 0.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Kokiri_Saria_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0060:Dm_Kokiri_0060_0003', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
    }

}
