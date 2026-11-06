-------- EventFlow: Dm_MelodyGet_Epona --------

Actor: Npc_Hylia_Malon_Child
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventPlayASWithClothWarp', 'EventExecuteRequestLookAtTheFront', 'EventTriggerWarpToTargetPosAndRot', 'EventTriggerSetModelLodManual']
queries: ['EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Npc_Hylia_WC_Malon_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_Malon.root.as'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventPlayerPlayOcarinaFree', 'EventTriggerEmitNpcOrPlayerVoice', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventWarpToTargetActor', 'EventNaviMoveOcarinaPlayPosition', 'EventGoOffstageForUser', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Animal_Epona_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetActor', 'EventWarpToTargetPosAndRotWithoutResetAS', 'EventGoOffstageForUser', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Animal_Horse_Epona_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_Epona.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'EventMemberCreateMethod': 0}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams', 'EventSetDynamicResolutionLoadThreshold']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventWait', 'EventTriggerCallHorseAround']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kaepora
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_Kaepora.root.as', 'IsWorld': True, 'Position': [-129.74000549316406, 187.3865966796875, 295.69110107421875], 'Rotation': [8.428000450134277, 159.98399353027344, -148.75599670410156]}

Actor: Dm_Locator[position_02]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Horse[LonLonRanch_Horse_A]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_General_Horse.root.as'}

Actor: Animal_Horse[LonLonRanch_Horse_B]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_General_Horse.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml'}

Actor: Animal_Horse[LonLonRanch_Horse_C]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_General_Horse.root.as'}

Actor: Animal_Horse[LonLonRanch_Horse_D]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetPosAndRotWithoutResetAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_General_Horse.root.as'}

Actor: Animal_Horse[LonLonRanch_Horse_E]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetPosAndRotWithoutResetAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_General_Horse.root.as'}

Actor: Dm_Locator[position_01]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Epona/Dm_MelodyGet_Epona_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Epona_Dm_Locator.root.as'}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Fairy
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Time
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: EventSystemActor[03]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[navi]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[Foliage]
entrypoint: None()
actions: ['Event_SetFoliageTurfParamForFlowchart', 'Event_ResetFoliageTurfParamForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text3': '', 'Text1': 'C01', 'IsWaitEnd': False, 'Text2': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text1': 'C02', 'IsWaitEnd': False})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text3': '', 'IsWaitEnd': False, 'Text1': 'C03'})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C04', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C05', 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C06', 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text1': 'C07', 'IsWaitEnd': False})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Hylia_Malon_Child', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.3100000023841858, 0.9100000262260437, 1.0], 'AtVector': [-0.10000000149011612, 0.8899999856948853, 0.46000000834465027], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsAutoFocalDist': False, 'StartDistance': 1.0, 'EndDistance': 1.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'C01-Loop', 'Position': [-90.6500015258789, 150.60000610351562, 246.35000610351562], 'ClothWarpMode': 0, 'YAngle': -128.83999633789062, 'EnableInAir': False})
    } {
        Npc_Hylia_Malon_Child.EventTriggerWarpToTargetPosAndRot({'Position': [-91.87999725341797, 150.60000610351562, 245.36000061035156], 'YAngle': 51.15999984741211, 'ClothWarpMode': -1})
        Npc_Hylia_Malon_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_09', 'ASName': 'Talk', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'IsUseAfterPlayerTurn': True, 'OffsetType': -1, 'IsHomePosition': False, 'IsNearOffset': True, 'offset': [0.44999998807907104, 0.0, 0.0]})
    } {
        Animal_Horse[LonLonRanch_Horse_A].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Relax_C'})
    } {
        Animal_Horse[LonLonRanch_Horse_B].EventPlayAS({'ForceFadeInFrame': 0.0, 'ASName': 'Relax_C', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})
    } {
        Animal_Horse[LonLonRanch_Horse_C].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Relax_C'})
    } {
        Animal_Horse[LonLonRanch_Horse_D].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Relax_C'})
    } {
        Animal_Horse[LonLonRanch_Horse_E].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Relax_C'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Epona_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Epona_C01'})
    } {
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Dm_Locator[position_02].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'TargetActorKind': 1, 'ActorName': 'Npc_Hylia_Malon_Child', 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'ClothWarpMode': -1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C02() {
    PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})
    Npc_Hylia_Malon_Child.EventTriggerSetOwnAsInstrumentPlayer()
    Npc_Hylia_Malon_Child.EventTriggerSetModelLodManual({'LodLevel': 1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Malon_Child', 'PosVector': [-1.2899999618530273, 0.9399999976158142, 2.509999990463257], 'AtVector': [1.399999976158142, 0.3100000023841858, -0.5600000023841858], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Malon_Child', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-1.809999942779541, 0.9900000095367432, 3.0899999141693115], 'AtVector': [1.1399999856948853, 0.3100000023841858, -0.4099999964237213], 'MoveTime': 660, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 1.7000000476837158, 'EndDistance': 1.7999999523162842, 'EndBluarLevel': 1.2999999523162842, 'RequiredFrame': 660, 'StartBluarLevel': 1.399999976158142, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {

        call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 1, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Epona:Dm_MelodyGet_Epona_0000'})

    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C01-St', 'ClothWarpMode': 2})
    } {
        Npc_Hylia_Malon_Child.EventPlayASWithClothWarp({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'C02-Lp', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'ClothWarpMode': -1})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Epona_C02', 'CurrDemoPaletteName': 'Dm_MelodyGet_Epona_C02'})
    } {
        Animal_Epona_Child.EventWarpToTargetPosAndRotWithoutResetAS({'YAngle': 45.53459930419922, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [-76.56999969482422, 150.60499572753906, 269.1333923339844]})
        Animal_Epona_Child.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C03'})
        Animal_Epona_Child.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventWorldManagerController[Foliage].Event_SetFoliageTurfParamForFlowchart({'Index': 3, 'IsWaitEnd': False})
    }

    EventWorldManagerController[Foliage].Event_ResetFoliageTurfParamForFlowchart({'IsWaitEnd': False})
}

void C03() {
    Npc_Hylia_Malon_Child.EventTriggerSetModelLodManual({'LodLevel': -1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Malon_Child', 'PosVector': [-0.5400000214576721, 0.8700000047683716, 0.41999998688697815], 'AtVector': [1.409999966621399, 0.4699999988079071, 4.320000171661377], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 1.2999999523162842, 'EndBluarLevel': 1.2999999523162842, 'StartDistance': 1.100000023841858, 'EndDistance': 1.100000023841858, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C01-Ed', 'IsAllSlot': True, 'ClothWarpMode': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        }


        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 1})

    } {
        Npc_Navi.EventNaviMoveOcarinaPlayPosition({'IsWaitEnd': True, 'ArrivedASCommand': ''})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Epona_C03', 'CurrDemoPaletteName': 'Dm_MelodyGet_Epona_C03'})
    } {
        EventWorldManagerController[Foliage].Event_SetFoliageTurfParamForFlowchart({'IsWaitEnd': False, 'Index': 4})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Malon_Child', 'PosVector': [-0.6600000262260437, 0.8700000047683716, 0.18000000715255737], 'AtVector': [1.2899999618530273, 0.4699999988079071, 4.079999923706055], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 360, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Malon_Child', 'PosVector': [-0.6600000262260437, 0.8700000047683716, 0.18000000715255737], 'AtVector': [1.2899999618530273, 0.4699999988079071, 4.079999923706055], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 280, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'StartDistance': 1.0, 'RequiredFrame': 300, 'EndDistance': 1.2999999523162842, 'StartBluarLevel': 1.2999999523162842, 'EndBluarLevel': 1.2999999523162842, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {

        call Dm_SY_Ocarina.LearningOcarinaPlayAuto()

        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'C03', 'ClothWarpMode': 0})
    } {
        EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 540})
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_Ocarina_Time', 'Num': 1}) {
            Item_Ocarina_Time.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Epona_Shine', 'SLinkKey': ''})
        } else {
            Item_Ocarina_Fairy.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Epona_Shine', 'SLinkKey': ''})
        }
    } {
        EventWorldManagerController[Foliage].Event_SetFoliageTurfParamForFlowchart({'IsWaitEnd': False, 'Index': 4})
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventWorldManagerController[Foliage].Event_ResetFoliageTurfParamForFlowchart({'IsWaitEnd': False})
}

void C04() {
    PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': -1.0})

    fork {
        Dm_Locator[position_01].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Hylia_Malon_Child', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 1.580299973487854], 'ClothWarpMode': -1})
    } {
        Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-143.40890502929688, 179.0251007080078, 284.6134033203125]})
        Npc_Kaepora.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'InstanceName': 'position', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, 0.0, 0.0]})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': False, 'SceneName': 'C04-3', 'IsIgnoreRootRot': False, 'RootType': 1, 'TargetActorInstanceName': '', 'TargetActorName': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'StartDistance': 15.0, 'EndDistance': 15.0, 'StartFNumber': 6.760000228881836, 'EndFNumber': 6.760000228881836, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_FinaleJingle', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 540})

        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_EponaSong'})

        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        Dm_Locator[position].EventPlayAS({'ASName': 'C04-Dm_Locator-A-0', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': False})
    } {
        Npc_Kaepora.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C04', 'IsAnimeDriven': False, 'IsAllSlot': False})
    } {
        Animal_Epona_Child.EventWarpToTargetPosAndRotWithoutResetAS({'YAngle': 45.53459930419922, 'ClothWarpMode': -1, 'Position': [-96.56999969482422, 150.60499572753906, 249.13340759277344], 'IsWaitEnd': True})
        Animal_Epona_Child.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASName': 'C04', 'IsAnimeDriven': False})
    } {
        EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Kaepora.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Epona_Feather', 'SLinkKey': ''})
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Epona_Leaf', 'SLinkKey': ''})
    } {
        Npc_Hylia_Malon_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C04', 'ForceFadeInFrame': 0.0})
    } {
        Animal_Horse[LonLonRanch_Horse_A].EventTriggerWarpToTargetPosAndRot({'YAngle': 101.69709777832031, 'ClothWarpMode': -1, 'Position': [-107.08999633789062, 150.58999633789062, 249.72999572753906]})
        Animal_Horse[LonLonRanch_Horse_A].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Wait', 'IsAllSlot': False})
    } {
        Animal_Horse[LonLonRanch_Horse_B].EventTriggerWarpToTargetPosAndRot({'YAngle': -165.4188995361328, 'ClothWarpMode': -1, 'Position': [-72.59583282470703, 150.60000610351562, 266.22198486328125]})
        Animal_Horse[LonLonRanch_Horse_B].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0, 'IsAllSlot': False})
    } {
        Animal_Horse[LonLonRanch_Horse_C].EventTriggerWarpToTargetPosAndRot({'YAngle': -71.4610595703125, 'ClothWarpMode': -1, 'Position': [-74.13522338867188, 150.60000610351562, 251.40289306640625]})
        Animal_Horse[LonLonRanch_Horse_C].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0, 'IsAllSlot': False})
    } {
        Animal_Horse[LonLonRanch_Horse_D].EventWarpToTargetPosAndRotWithoutResetAS({'IsWaitEnd': True, 'YAngle': 75.52454376220703, 'ClothWarpMode': -1, 'Position': [-100.01000213623047, 150.58999633789062, 239.61000061035156]})
    } {
        Animal_Horse[LonLonRanch_Horse_E].EventWarpToTargetPosAndRotWithoutResetAS({'IsWaitEnd': True, 'YAngle': -27.210060119628906, 'ClothWarpMode': -1, 'Position': [-105.05999755859375, 150.58999633789062, 256.0299987792969]})
    } {
        EventSystemActor[03].EventWait({'Frames': 420, 'IsWaitEnd': True})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:環境系SE下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_MelodyGet_Epona_C04', 'CurrDemoPaletteName': 'Dm_MelodyGet_Epona_C04', 'Frames': 0, 'IsWaitEnd': False})
    } {
        EventWorldManagerController[Foliage].Event_SetFoliageTurfParamForFlowchart({'IsWaitEnd': False, 'Index': 0})
    }

    EventWorldManagerController[Foliage].Event_ResetFoliageTurfParamForFlowchart({'IsWaitEnd': False})
}

void C05() {
    Player_Event.EventTriggerSetModelLodManual({'LodLevel': 1})
    Animal_Epona_Child.EventTriggerSetModelLodManual({'LodLevel': 1})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'position_02', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'IsWaitEnd': True, 'SceneName': 'C05-1'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'StartDistance': 1.7000000476837158, 'EndDistance': 1.7000000476837158, 'StartBluarLevel': 1.7000000476837158, 'EndBluarLevel': 1.7000000476837158, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False})
    } {
        Animal_Epona_Child.EventWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'position_02', 'YAngle': 80.33200073242188, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [-4.527679920196533, 0.0, 3.7905800342559814]})
        Animal_Epona_Child.EventPlayAS({'Partial': '', 'IsWaitEnd': False, 'ASName': 'C05', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'position_02', 'ASCommand': 'C05-06', 'YAngle': 160.0, 'PositionOffset': [0.9414600133895874, 0.0, 1.5309100151062012]})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'C05-06', 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.25, 2.0, 0.0], 'ClothWarpMode': -1})
        EventSystemActor[navi].EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Navi.EventNaviMoveAroundToPlayer({'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IncSpeedDistance': 0.0, 'IsWaitEnd': False, 'IsHomePosition': False, 'IsLookAtObject': True, 'LookAtTarget': 2, 'LookAtActorName': '', 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsTurnLooking': True, 'offset': [0.5, 0.4000000059604645, 0.0], 'MoveSpeed': 0.6000000238418579, 'MinimumSpeed': 0.5, 'DecSpeedDistance': 0.30000001192092896})
    } {
        Npc_Kaepora.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Hylia_Malon_Child.EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C05', 'IsAllSlot': True})
    } {
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 169})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_MelodyGet_Epona_0006'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Epona_C05', 'CurrDemoPaletteName': 'Dm_MelodyGet_Epona_C05'})
    } {
        Npc_Kaepora.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_MelodyGet_Epona_Feather', 'SLinkKey': '', 'IsKill': False})
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_MelodyGet_Epona_Leaf', 'IsKill': True, 'SLinkKey': ''})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.011718999594449997, 'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 0.9213780164718628, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0})
    }

}

void C06() {
    Npc_Hylia_Malon_Child.EventTriggerSetModelLodManual({'LodLevel': 1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_Malon_Child', 'PosVector': [4.590000152587891, 0.9900000095367432, 1.5399999618530273], 'AtVector': [-5.570000171661377, 0.4099999964237213, -1.809999942779541], 'TargetFovy': 28.299999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 320})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartBluarLevel': 1.2000000476837158, 'EndBluarLevel': 1.2000000476837158, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Malon_Child.EventPlayAS({'Partial': '', 'ASName': 'C06', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 69})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_MelodyGet_Epona_0007'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 103})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_MelodyGet_Epona_0008'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Epona_C06', 'CurrDemoPaletteName': 'Dm_MelodyGet_Epona_C06'})
    }

}

void C07() {
    Npc_Hylia_Malon_Child.EventTriggerSetModelLodManual({'LodLevel': -1})

    fork {
        Npc_Hylia_Malon_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Epona:Dm_MelodyGet_Epona_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': True, 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': True, 'ASName': 'C07-1'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Epona:Dm_MelodyGet_Epona_0005', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True, 'ASName': 'C07-2'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position_02', 'PosVector': [0.9300000071525574, 0.9200000166893005, -0.6100000143051147], 'AtVector': [-2.990000009536743, 0.7099999785423279, 1.309999942779541], 'TargetFovy': 37.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.0, 'EndDistance': 1.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 1.7000000476837158, 'EndBluarLevel': 1.7000000476837158, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'position_02', 'ASCommand': 'EvtWait', 'YAngle': 160.0, 'PositionOffset': [2.299999952316284, 0.0, -3.0]})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Animal_Epona_Child.EventWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 1, 'IsWaitEnd': True, 'YAngle': 160.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'position_02', 'PositionOffset': [2.0, 0.0, -1.7000000476837158], 'ClothWarpMode': -1})
        GameSystemActor.EventTriggerCallHorseAround({'CallerInstanceName': '', 'CallerActorName': 'Player_Event'})
        Animal_Epona_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'WaitFlat'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Epona_C07', 'CurrDemoPaletteName': 'Dm_MelodyGet_Epona_C07'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Forbid_MelodyGet_Epona', 'Value': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_Epona', 'StepName': 'AfterGetEponaSong'})

    call NaviChat.NaviEmotionChange({'EmotionType': 1})


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-2.630000114440918, 1.690000057220459, 2.7300000190734863], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Malon_Child.EventTriggerWarpToTargetPosAndRot({'Position': [-91.87999725341797, 150.60000610351562, 245.36000061035156], 'ClothWarpMode': -1, 'YAngle': 180.0})
        Npc_Hylia_Malon_Child.EventPlayASWithClothWarp({'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ClothWarpMode': -1, 'ASName': 'Act_Song_Wait'})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 0.9488800168037415, 'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.023437999188899994, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0})
    }

}

void Ready() {

    fork {
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
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
        Animal_Epona_Child.EventTriggerParticipateEvent()
    } {
        Npc_Kaepora.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:環境系SE下げ', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
    }

    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 1, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})

    fork {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 2, 'IsWaitEnd': False})
    } {
        if !Npc_Hylia_Malon_Child.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 30.0}) {
            Npc_Hylia_Malon_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } else {
            Npc_Hylia_Malon_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_27', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
            Npc_Hylia_Malon_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    }

    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_26', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Hylia_Malon_Child.EventExecuteRequestLookAtTheFront({'IsWaitEnd': True, 'DeactivationMode': 1})
}
