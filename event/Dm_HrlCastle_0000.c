-------- EventFlow: Dm_HrlCastle_0000 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0000/Dm_HrlCastle_0000/workspace.pp__ModelProject.gyml'}

Actor: Npc_Kaepora
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventTriggerChangeEmotion', 'EventTriggerVoiceChangeSpVoiceMode']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'Position': [1.6510000228881836, 118.10399627685547, -25.472000122070312], 'IsWorld': True, 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0000_Npc_U_Kaepora.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0000/Dm_HrlCastle_0000_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'IsGrounding': True}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMove', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0000/Dm_HrlCastle_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0000_Dm_Locator.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventNaviRequestBallonMessage', 'EventNaviTrailRestart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Horse_Wagon
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventSystemActor[ESA3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[GSA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C04', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C05'})
    }

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void C01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'SceneName': 'C01-1'})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 174.97189331054688, 'ASCommand': 'EvtWait', 'Position': [12.579999923706055, 104.66000366210938, -6.329999923706055], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'DecSpeedDistance': 0.0, 'WorldPos': [12.960000038146973, 105.01000213623047, -11.579999923706055], 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'MoveSpeed': 0.20000000298023224})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'ActorName': '', 'WorldPos': [40.0, 140.0, -140.0]})
    } {
        EventSystemActor[ESA].EventWait({'IsWaitEnd': True, 'Frames': 150})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/HyruleCastle.game__location__Location.gyml'})
        EventSystemActor[ESA].EventWait({'IsWaitEnd': True, 'Frames': 500})
    } {
        Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1.6510000228881836, 118.10399627685547, -25.472000122070312], 'ClothWarpMode': -1})
    } {
        Npc_Kaepora.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor[GSA1].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Kaepora.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'TransOffset': [0.0, 0.0, 0.0], 'InstanceName': '0', 'RotOffset': [0.0, 25.0, 0.0]})
        Npc_Kaepora.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 178.84500122070312, 'ClothWarpMode': -1, 'Position': [12.09000015258789, 105.68000030517578, -6.389999866485596]})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsWaitEnd': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'MoveSpeed': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsHomePosition': False, 'offset': [0.5, 0.10000000149011612, 0.30000001192092896]})
        EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 400})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 150.8365020751953, 'Position': [12.520000457763672, 106.16000366210938, -11.789999961853027], 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 0.0, 'StartBluarLevel': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Animal_Horse_Wagon.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'Shake'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Env', 'IsIgnoreDucking': False})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [12.680000305175781, -11.890000343322754, 12.59000015258789], 'AtVector': [7.0, -13.149999618530273, 17.540000915527344], 'TargetFovy': 31.420000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'StartDistance': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Animal_Horse_Wagon.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Kaepora.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Kaepora.EventTriggerVoiceChangeSpVoiceMode({'CommandLife': 0, 'NoPosVoiceMode': 6})
    } {
        EventWorldManagerController.Event_SetWindForFlowchart({'Elevation': 60.0, 'IsWaitEnd': False, 'IsImmTrans': False, 'Azimuth': 200.0, 'Speed': 3.0})
    }


    fork {
        Npc_Kaepora.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Kaepora.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0010:Dm_HrlCastle_0010_0000', 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Talk'})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 3, 'ActorName': 'Npc_Kaepora', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'PosOffset': [10.0, -5.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtNotice', 'IsWaitEnd': True, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kaepora', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 2.0, 0.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Npc_Kaepora', 'PosVector': [2.930000066757202, -9.789999961853027, 15.680000305175781], 'AtVector': [2.009999990463257, -8.119999885559082, 10.859999656677246], 'TargetFovy': 36.720001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 200, 'Actor1InstanceName': '', 'Actor1ActorName': 'Npc_Kaepora', 'PosVector': [2.930000066757202, -9.789999961853027, 15.680000305175781], 'AtVector': [2.069999933242798, -7.329999923706055, 11.199999809265137], 'TargetFovy': 36.720001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kaepora.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0010:Dm_HrlCastle_0010_0001', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'Talk', 'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Kaepora', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.30000001192092896, 0.10000000149011612, -0.20000000298023224], 'IsNearOffset': False, 'IsHomePosition': True, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Npc_Kaepora', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'IsWaitEnd': False, 'PosOffset': [0.0, -7.0, 0.0]})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'StartDistance': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 1.0, 'IsLoop': True, 'IsWaitEnd': False, 'SceneName': 'C04-0', 'RootType': 1})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWaitQuarter', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Kaepora.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0010:Dm_HrlCastle_0010_0002', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
    } {
        Animal_Horse_Wagon.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'WaitFlat', 'IsAllSlot': False})
    }

    Npc_Kaepora.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 6})
    Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0010:Dm_HrlCastle_0010_0012', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
    Npc_Kaepora.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    Npc_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0010:Dm_HrlCastle_0010_0013', 'ASName': 'Talk', 'MaintainPerformanceState': 0})

    fork {
        Dm_Locator[0].EventPlayAS({'ASName': 'C06', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Kaepora.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 6})
        Npc_Kaepora.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C06', 'IsAnimeDriven': True})
    } {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'WorldPos': [9.859999656677246, 106.23300170898438, -16.697999954223633], 'IgnoreTargetPosMove': False, 'Target': 4, 'Direction': -80.0, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': True})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kaepora', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C04-0', 'RootType': 1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Npc_Kaepora.EventTriggerEmitXLink({'ELinkKey': 'Dm_HrlCastle_0000_Jump_01', 'SLinkKey': ''})
        Npc_Kaepora.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_HrlCastle_0000_Feather_01'})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.5499999523162842, 0.7400000095367432, -2.2799999713897705], 'AtVector': [-0.6499999761581421, 1.7200000286102295, 0.9399999976158142], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.5499999523162842, 0.7400000095367432, -2.2799999713897705], 'AtVector': [-0.8299999833106995, 1.6200000047683716, 1.0199999809265137], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'MoveTime': 420, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Npc_Kaepora.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C07', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
    } {
        Dm_Locator[0].EventPlayAS({'ASName': 'C07', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Npc_Kaepora', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'PosOffset': [0.0, -7.0, 0.0], 'IsWaitEnd': False})
    } {
        EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': False, 'IsImmTrans': False})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 5.0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 376})
}
