-------- EventFlow: Dm_LonLon_0030 --------

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Ingo_002_Adult
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 0, 'UseEventAS': 'Work/AS/Root/Event/Dm_LonLon_0030_Ingo.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_LonLon_0030/Dm_LonLon_0030_Npc_Hylia_MU_Ingo_Adult/workspace.pp__ModelProject.gyml'}

Actor: Animal_Epona_Adult
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerRequestRideMe']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_LonLon_0030/Dm_LonLon_0030_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LonLon_0030_Epona.root.as'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject', 'EventPlayerHorseGetOff', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Obj_KickingStone
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'Position': [0.0, 0.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_LonLon_0030/Dm_LonLon_0030_Obj_KickingStone/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LonLon_0030_KickingStone.root.as'}

Actor: Animal_Horse[LonLonRanch_Horse_A]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Animal_Horse[LonLonRanch_Horse_B]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Animal_Horse[LonLonRanch_Horse_C]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Animal_Horse[LonLonRanch_Horse_D]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Animal_Horse[LonLonRanch_Horse_E]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {

    call Ready()


    call C01()


    call C02()


    call C03()


    call C04()

}

void Ready() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'Length': 0, 'IsWaitEnd': False})

    fork {
        Npc_Hylia_Ingo_002_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'Position': [-77.28379821777344, 150.625, 224.59979248046875], 'ClothWarpMode': -1})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01-Loop'})
    } {
        Animal_Epona_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -60.0, 'Position': [-72.3302001953125, 150.625, 221.41819763183594], 'ClothWarpMode': -1})
        Animal_Epona_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Dm_Horse_wait'})
    } {
        Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -70.0, 'Position': [-72.16439819335938, 150.625, 222.6656951904297], 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -58.44900131225586, 'ClothWarpMode': -1, 'Position': [-72.21189880371094, 152.20579528808594, 222.36099243164062]})
        Npc_Navi.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Obj_KickingStone.EventTriggerParticipateEvent()
        Dm_Obj_KickingStone.EventPlayAS({'ASName': 'C01-C03-Obj_KickingStone-A-0', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Animal_Horse[LonLonRanch_Horse_A].EventTriggerParticipateEvent()
    } {
        Animal_Horse[LonLonRanch_Horse_B].EventTriggerParticipateEvent()
    } {
        Animal_Horse[LonLonRanch_Horse_C].EventTriggerParticipateEvent()
    } {
        Animal_Horse[LonLonRanch_Horse_D].EventTriggerParticipateEvent()
    } {
        Animal_Horse[LonLonRanch_Horse_E].EventTriggerParticipateEvent()
    } {
        Dm_Locator[01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-83.93000030517578, 150.6199951171875, 233.1300048828125], 'ClothWarpMode': -1})
    } {
        TerrainSystemActor.EventTerrainCalcCenter({'SceneName': 'HyruleField_02', 'Position': [-79.25599670410156, 150.5959930419922, 228.41700744628906], 'IsWaitEnd': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})

    fork {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartFNumber': 25.0, 'EndFNumber': 25.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [2.490000009536743, 3.3299999237060547, -4.590000152587891], 'AtVector': [-0.07000000029802322, 1.1799999475479126, 1.4299999475479126], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Ingo_002_Adult.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 2})
    }

    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_LonLon_0030', 'IsReleaseDucking': True, 'CommandLife': 2})
    UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': False})
    Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0030:Dm_LonLon_0030_0001', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01-Loop', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    PouchSystemActor.EventTriggerIncreaseRupee({'Value': 20})
    Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0030:Dm_LonLon_0030_0002', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01-Loop', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'IsWaitEnd': True, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text4': '', 'Text3': '', 'Text2': ''})

    fork {
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02-0', 'IsWaitEnd': True, 'IsAllSlot': True, 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02-1', 'IsAllSlot': True, 'IsWaitEnd': False, 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0030:Dm_LonLon_0030_0003', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-1', 'IsWaitEnd': True, 'EndDialogOption': 1, 'IsPlayASAllSlot': True, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0030:Dm_LonLon_0030_0004', 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-LP', 'IsPlayASAllSlot': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'TargetActorName': 'Player_Event', 'SceneName': 'C02', 'RootType': 1, 'IsIgnoreRootRot': False})
    } {
        Dm_Obj_KickingStone.EventTriggerEmitXLink({'ELinkKey': 'Dm_LonLon_0030_Smoke_00', 'SLinkKey': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.9000000953674316, 'EndDistance': 2.9000000953674316, 'StartFNumber': 27.0, 'EndFNumber': 27.0, 'StartBluarLevel': 0.5, 'EndBluarLevel': 0.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': True, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'Frames': 260, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Doon', 'Length': 0.0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -58.44900131225586, 'ClothWarpMode': -1, 'Position': [-72.0, 152.20579528808594, 222.06100463867188]})
        Npc_Navi.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'IsWaitEnd': True, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text3': '', 'Text4': ''})

    fork {
        Npc_Hylia_Ingo_002_Adult.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': False})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 30.0, 'IsWaitEnd': True, 'ASName': 'C02-3', 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_LonLon_0030:Dm_LonLon_0030_0008', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'C02-3LP', 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 30.0, 'ASName': 'C02-5', 'IsWaitEnd': True, 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0030:Dm_LonLon_0030_0005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'ASName': 'C02-5Lp', 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0030:Dm_LonLon_0030_0006', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'ASName': 'C02-5Lp', 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C02-4', 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0, 'IsAnimeDriven': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03', 'TargetActorName': 'Player_Event', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartFNumber': 29.100000381469727, 'EndFNumber': 29.100000381469727, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C04() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C04', 'Text4': '', 'IsWaitEnd': True, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text3': ''})

    fork {
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0030:Dm_LonLon_0030_0007', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ASName': 'C02-4', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C04', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.4500000476837158, 'EndDistance': 1.4500000476837158, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': True, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Animal_Epona_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Dm_Horse_LookBack'})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Animal_Epona_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_LonLon_0030', 'IsUseSuspendFade': False})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    Animal_Epona_Adult.EventTriggerRequestRideMe({'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'RidingMode': 1, 'SeatIndex': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'HorseWait', 'IsAllSlot': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
}
