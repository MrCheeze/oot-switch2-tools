-------- EventFlow: Dm_LonLon_0040 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerWait', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EventMemberCreateMethod': 0, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': '使用しない'}

Actor: Npc_Hylia_Ingo_002_Adult
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTalk', 'EventTriggerChangeEmotion']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_LonLon_0040_Ingo.root.as', 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_LonLon_0040/Dm_LonLon_0040_Npc_Hylia_MU_Ingo_Adult/workspace.pp__ModelProject.gyml'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventNaviMoveAroundToPlayer', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_LonLon_Gate_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Obj_KickingStone
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_LonLon_0040/Dm_LonLon_0040_Obj_KickingStone/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LonLon_0040_KickingStone.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: GameSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventEditLocationalLight', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[ingo]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventPlayASWithClothWarp', 'EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_LonLon_0020/Dm_LonLon_0020_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LonLon_0020_horse.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

void EntryPoint0() {

    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C03', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text3': '', 'Text2': ''})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C04', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C05', 'BgAlignH': 0, 'BgAlignW': 0, 'IsWaitEnd': False, 'Text2': ''})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C06', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text2': ''})
    }

}

void Ready() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})

    fork {
        LastRiddenAnimal_ForEvent.EventTriggerParticipateEvent()
        LastRiddenAnimal_ForEvent.EventPlayASWithClothWarp({'IsWaitEnd': False, 'ASName': 'Dm_Horse_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-67.94000244140625, 150.6300048828125, 218.5800018310547], 'YAngle': 160.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'EnableInAir': False, 'ASCommand': 'EvtHorseWait', 'ClothWarpMode': -1})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'ingo', 'PosOffset': [0.0, -1.2000000476837158, 0.0]})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1, 'ASName': 'Dm_Horse_Wait', 'IsWaitEnd': False})
        Player_Event.EventPlayerWait({'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})
    } {
        Dm_Locator[ingo].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-66.63999938964844, 151.6300048828125, 212.16000366210938]})
    } {
        Npc_Hylia_Ingo_002_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -15.0, 'ClothWarpMode': -1, 'Position': [-66.63999938964844, 150.6300048828125, 212.16000366210938]})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'ASName': 'C01-0-Loop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-68.0999984741211, 152.66000366210938, 217.89999389648438], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Dm_Locator[pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-67.2300033569336, 150.57000732421875, 214.6199951171875], 'ClothWarpMode': -1})
    } {
        Obj_LonLon_Gate_A_01.EventTriggerParticipateEvent()
    } {
        Dm_Obj_KickingStone.EventTriggerParticipateEvent()
        Dm_Obj_KickingStone.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'stone-0'})
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
    }

}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-2.190000057220459, 2.8399999141693115, 5.28000020980835], 'AtVector': [-2.140000104904175, 2.809999942779541, 5.190000057220459], 'TargetFovy': 22.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndDistance': 8.0, 'EndFNumber': 6.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 8.0, 'StartFNumber': 6.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNear': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Ingo_002_Adult.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 2})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_LonLon_0040_C01', 'CurrDemoPaletteName': 'Dm_LonLon_0040_C01'})
    }

    SoundSystemActor.EventTriggerStartBgmSimple({'IsReleaseDucking': True, 'CommandLife': 2, 'BGMName': 'BGM_Dm_LonLon_0040'})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01-0-Loop', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-0.019999999552965164, 0.8799999952316284, 0.6899999976158142], 'AtVector': [1.4199999570846558, 1.3700000047683716, -7.400000095367432], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01-0-Loop', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0006', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01-0-Loop', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 45.0, 'EndFNumber': 45.0, 'IsEnableDofFarCancel': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNear': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_LonLon_0040_C02', 'CurrDemoPaletteName': 'Dm_LonLon_0040_C02'})
    }

}

void C03() {

    fork {

        fork {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0007', 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C03-0', 'EndDialogOption': 0, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
            Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0008', 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C03-0', 'EndDialogOption': 0, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
            Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0009', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'C03-0', 'EndDialogOption': 3, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 70.0, 'EndFNumber': 70.0, 'StartDistance': 1.0, 'EndDistance': 1.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C03-1', 'IsWaitEnd': True})
        } {
            Npc_Hylia_Ingo_002_Adult.EventPlayAS({'ASName': 'C03-1', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
            Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0010', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'IsPlayASAllSlot': True, 'EndDialogOption': 3, 'ASName': 'C03-2', 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        } {
            Dm_Obj_KickingStone.EventPlayAS({'ASName': 'stone', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 156})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doka'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 22})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
        } {
            Dm_Obj_KickingStone.EventTriggerEmitXLink({'ELinkKey': 'Dm_LonLon_0040_Trail', 'SLinkKey': ''})
            Dm_Obj_KickingStone.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LonLon_0040_Smoke_00'})
            Dm_Obj_KickingStone.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LonLon_0040_Smoke_01'})
            Dm_Obj_KickingStone.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LonLon_0040_Smoke_02'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 70.0, 'EndFNumber': 70.0, 'StartDistance': 1.0, 'EndDistance': 1.0, 'EndBluarLevel': 0.5, 'StartBluarLevel': 0.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 154})
            PostProcessingActor.EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'Color': [1.0, 1.0, 1.0], 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'Intensity': 0.0, 'LightHash': 'StoneLight'})
        }

    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_LonLon_0040_C03', 'CurrDemoPaletteName': 'Dm_LonLon_0040_C03', 'IsWaitEnd': True, 'Frames': 0})
    } {
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 0.20000000298023224, 'IsOverwriteShadowRatio': False, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'ShadowRatio': 0.0})
    }

}

void C04() {

    fork {
        Npc_Hylia_Ingo_002_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -15.0, 'Position': [-67.0, 150.6300048828125, 213.6699981689453], 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-0.5400000214576721, 1.9600000381469727, 1.190000057220459], 'AtVector': [0.10999999940395355, 2.7100000381469727, 8.949999809265137], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.7000000476837158, 'EndDistance': 1.7000000476837158, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': False, 'IsOverwriteShadowRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'BakeLightLuminanceRatio': 1.0, 'ShadowRatio': 0.30000001192092896})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0011', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Wait', 'MaintainPerformanceState': 0})
}

void C05() {

    fork {
        GameSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'PosOffset': [0.0, -0.800000011920929, 0.0]})
        } {
            Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'IsWaitEnd': False})
        }

    } {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-0.20000000298023224, 0.800000011920929, -3.259999990463257], 'AtVector': [-0.18000000715255737, 0.8100000023841858, -3.1600000858306885], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
        } {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0012', 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C05-0', 'IsPlayASAllSlot': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        }


        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-0.20000000298023224, 0.800000011920929, -3.259999990463257], 'AtVector': [-0.18000000715255737, 0.8199999928474426, -3.1600000858306885], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 50, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
        } {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0013', 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C05-1', 'IsPlayASAllSlot': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndDistance': 2.5, 'EndFNumber': 52.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.5, 'StartFNumber': 52.0, 'StartBluarLevel': 0.5, 'EndBluarLevel': 0.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': True, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C06() {

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-0.1899999976158142, 1.1799999475479126, 1.0099999904632568], 'AtVector': [2.759999990463257, 1.6799999475479126, -6.239999771118164], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-0.1899999976158142, 1.1799999475479126, 1.0099999904632568], 'AtVector': [1.3600000143051147, 2.0899999141693115, -6.619999885559082], 'MoveTotargetPosType': 1, 'MoveTime': 90, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Hylia_Ingo_002_Adult.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C06-0', 'IsAllSlot': False, 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0014', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'C06-1', 'IsAnimeDriven': True})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0015', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'ASName': 'C06-1', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.0999999046325684, 'EndDistance': 2.0999999046325684, 'StartFNumber': 70.0, 'EndFNumber': 70.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-67.44000244140625, 150.6300048828125, 218.5800018310547], 'YAngle': 160.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'UseDemoWait': True, 'EnableInAir': False, 'ASCommand': 'EvtHorseWait'})
    } {
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 0.3499999940395355, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.8999999761581421})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos', 'SceneName': 'C06-0'})
    } {
        Npc_Hylia_Ingo_002_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_LonLon_0040:Dm_LonLon_0040_0016', 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': True, 'ASName': 'C06-2', 'IsAnimeDriven': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Obj_LonLon_Gate_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Obj_LonLon_Gate_A_01_Demo_Anim'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 114})

            fork {
                EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Power': 0.05000000074505806, 'Pattern': 1, 'IsRumbleController': False})
            } {
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dohoon'})
            }

        }

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_Epona', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'AfterWonGambleRace'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsNearOffset': False, 'IsHomePosition': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 2.0999999046325684, 'EndDistance': 2.0999999046325684, 'StartFNumber': 70.0, 'EndFNumber': 70.0, 'IsEnableNear': False, 'RequiredFrame': 90, 'IsEnableDofFarCancel': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Hylia_Ingo_002_Adult.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos', 'SceneName': 'C06-1'})
    } {
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C06-3', 'IsAnimeDriven': True, 'IsAllSlot': False})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 2.0999999046325684, 'EndDistance': 2.0999999046325684, 'StartFNumber': 70.0, 'EndFNumber': 70.0, 'IsEnableNear': False, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 100})

    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 284})
}
