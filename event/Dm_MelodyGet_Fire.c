-------- EventFlow: Dm_MelodyGet_Fire --------

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventSetDynamicResolutionLoadThreshold']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Hylia_Sheik_Adult
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventTriggerEmitXLink', 'EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'Position': [0.0, 0.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Fire/Dm_MelodyGet_Fire_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Fire_Hylia_WU_Sheik.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviLookAtObject', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviRequestLookAtTheFront', 'EventNaviMoveAtPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerUnequip', 'EventPlayerPutAway', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Fire/Dm_MelodyGet_Fire_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Fire_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Item_Sheik_Harp
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventDoNothing', 'EventGoOffstageForUser', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Fire/Dm_MelodyGet_Fire_Item_Harp_Sheik/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Fire_Item_Harp_Sheik.root.as', 'IsWorld': True, 'Position': [0.0, 0.0, 0.0], 'Rotation': [0.0, 0.0, 0.0]}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [1.0, -6.0, -6.0]}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Time
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Effect]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Time_Holder
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

        call Dm_SY_Ocarina.LearningOcarinaPlayAutoForSeek()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 750})
    } {

        call C07()


        call C08()


        call C09()


        call C10()


        call C11()


        call C12()


        call C13()


        call C14()


        call C15()


        call C16()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_FireBolero'})

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call C16-02()


    call C17()


    call Navi_Reaction()


    call AllSage.MeetSheik_And_Gone()

}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'IsWaitEnd': False, 'Text2': ''})

    fork {
        Npc_Hylia_Sheik_Adult.EventWarpToTargetPosAndRot({'YAngle': -85.0, 'IsWaitEnd': True, 'Position': [-7.790999889373779, 118.41500091552734, -10.920000076293945], 'ClothWarpMode': -1})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C01', 'IsAnimeDriven': True, 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [-16.049999237060547, 113.33999633789062, -10.25], 'YAngle': 95.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
        Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'offset': [-0.5, -0.20000000298023224, 0.0], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-13.800000190734863, 113.5999984741211, -11.289999961853027], 'AtVector': [-8.729999542236328, 112.37999725341797, -10.529999732971191], 'TargetFovy': 29.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Item_Sheik_Harp.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Fire_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Fire_C01'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Fire_Land', 'SLinkKey': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 5.0, 'EndDistance': 5.0, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C02', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-19.420000076293945, 115.19999694824219, -11.680000305175781], 'AtVector': [-15.569999694824219, 114.05000305175781, -10.819999694824219], 'TargetFovy': 36.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C02', 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 2})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'Partial': '', 'ASName': 'C02', 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsAllSlot': False, 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'StartDistance': 7.0, 'EndDistance': 7.0, 'StartFNumber': 11.0, 'EndFNumber': 11.0, 'StartBluarLevel': 0.800000011920929, 'EndBluarLevel': 0.800000011920929, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C03', 'IsWaitEnd': False, 'DispTime': 5})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-9.520000457763672, 123.69999694824219, -26.40999984741211], 'AtVector': [-9.579999923706055, 122.9000015258789, -25.219999313354492], 'TargetFovy': 33.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 540, 'IsWaitEnd': True, 'PosVector': [-12.880000114440918, 123.72000122070312, -25.75], 'AtVector': [-12.90999984741211, 123.30000305175781, -25.1200008392334], 'TargetFovy': 34.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C03', 'ForceFadeInFrame': 0.0, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

        fork {
            Npc_Hylia_Sheik_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0001', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C03', 'IsAnimeDriven': True, 'IsCloseDialog': False, 'IsWaitEnd': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_MelodyGet_Sheik', 'CommandLife': 2, 'IsReleaseDucking': False})
        }

    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'C03', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 2})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartDistance': 6.5, 'EndDistance': 6.5, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C04() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C04', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'TargetFovy': 25.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-1.0, 1.1699999570846558, 1.1100000143051147], 'AtVector': [3.509999990463257, 2.190000057220459, -3.4100000858306885], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ForceFadeInFrame': 20.0, 'ASName': 'C04-0', 'ClothWarpMode': -1})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0003', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C04-Loop', 'MaintainPerformanceState': 0})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_MelodyGet_Sheik', 'IsUseSuspendFade': False})

        fork {
            Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C04', 'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 30.0, 'IsAllSlot': True})
        } {
            Dm_Item_Sheik_Harp.EventDoNothing({'IsWaitEnd': True})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'IsPrimaryApply': False, 'StartFNumber': 42.0, 'EndFNumber': 42.0, 'IsEnableNear': False, 'StartDistance': 1.4500000476837158, 'EndDistance': 1.4500000476837158, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C05() {
    Npc_Hylia_Sheik_Adult.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C05', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Npc_Hylia_Sheik_Adult'})

        call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 7, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0004'})

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C05', 'IsWaitEnd': False, 'DispTime': 8, 'Text2': ''})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'ASName': 'C05', 'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        Dm_Item_Sheik_Harp.EventTriggerModelBind({'TransOffset': [0.0, 0.0, 0.0], 'InstanceName': '', 'ActorName': 'Npc_Hylia_Sheik_Adult', 'BoneName': 'Weapon_L', 'RotOffset': [0.0, 0.0, 180.0]})
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C05', 'IsWaitEnd': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Item_Ocarina_Time'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C05', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartDistance': 1.2999999523162842, 'EndDistance': 1.2999999523162842, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})
    }

}

void C17() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignH': 0, 'BgAlignW': 0, 'IsWaitEnd': False, 'DispTime': 6, 'Text1': 'C17', 'Text2': ''})

    fork {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'ASName': 'C17', 'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': -1})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0005', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C04-Loop', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'TargetFovy': 30.040000915527344, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.18000000715255737, 1.2999999523162842, 1.190000057220459], 'AtVector': [-0.019999999552965164, 1.4199999570846558, 0.09000000357627869], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndBluarLevel': 2.5, 'RequiredFrame': 0, 'StartBluarLevel': 2.5, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartDistance': 1.2999999523162842, 'EndDistance': 1.2999999523162842, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C17', 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Dm_Item_Sheik_Harp.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C18() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C18', 'Text2': '', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C18-0'})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'WorldPos': [-14.649999618530273, 112.75700378417969, -10.451000213623047], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Navi.EventNaviMoveAtPos({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsWaitEnd': True, 'WorldPos': [-15.130900382995605, 114.32140350341797, -9.66349983215332], 'ASCommand': '', 'MoveSpeed': 1.2000000476837158, 'MinimumSpeed': 1.2000000476837158})
        Npc_Navi.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C18', 'IsWaitEnd': True, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 2})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 55})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoGoGo', 'Length': 2.0})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Explosion', 'IsIgnoreDucking': False})
    }

}

void C19() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C19', 'DispTime': 6, 'Text2': ''})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C19', 'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 2})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C19-0'})
    } {
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'IsWaitEnd': True, 'offset': [-0.699999988079071, -0.550000011920929, 0.8999999761581421], 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
    } {
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Fire_Lava_Large'})
    } {
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'IsEnableNear': False, 'StartDistance': 2.950000047683716, 'EndDistance': 2.950000047683716, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C20() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignH': 0, 'BgAlignW': 0, 'DispTime': 6, 'Text1': 'C20', 'IsWaitEnd': False, 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C20-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Hylia_Sheik_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 1.7000000476837158, 'EndDistance': 1.7000000476837158, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'C20', 'IsAllSlot': True, 'ClothWarpMode': 2})
    }

}

void C21() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignH': 0, 'BgAlignW': 0, 'Text2': '', 'IsWaitEnd': False, 'DispTime': 6, 'Text1': 'C21'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C21'})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C21', 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'IsWaitEnd': True, 'ClothWarpMode': 2})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWaitHalf', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Navi.EventNaviMoveAtPos({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsWaitEnd': True, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'WorldPos': [-15.17609977722168, 114.44049835205078, -9.578399658203125], 'ASCommand': '', 'MoveSpeed': 1.2000000476837158, 'MinimumSpeed': 1.2000000476837158})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsGet.Item_Melody_FireBolero', 'Index': -1, 'Value': True})
}

void Navi_Reaction() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 0}) {
      case [0, 1]:
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0006', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C04-Loop', 'MaintainPerformanceState': 0})

        call C18()


        call C19()


        call C20()


        call C21()

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0023'})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 100, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.840000033378601, 3.0199999809265137, -3.5799999237060547], 'AtVector': [0.0, 1.7300000190734863, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'MoveSpeed': 1.100000023841858, 'MinimumSpeed': 1.100000023841858})
        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        Event152:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_MeetSheikCount', 'Value': 1, 'Index': -1})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 1}) {
          case [0, 1]:
            Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0006', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C04-Loop', 'MaintainPerformanceState': 0})

            call C18()


            call C19()


            call C20()


            call C21()

            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0024'})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 100, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.840000033378601, 3.0199999809265137, -3.5799999237060547], 'AtVector': [0.0, 1.7300000190734863, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'MoveSpeed': 1.100000023841858, 'MinimumSpeed': 1.100000023841858})
            }

            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
            goto Event152
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 2}) {
              case [0, 1]:
                Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0015', 'ASName': 'C04-Loop', 'MaintainPerformanceState': 0})
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0007'})
                Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0016', 'ASName': 'C04-Loop'})

                call C18()


                call C19()


                call C20()


                call C21()

                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0027'})

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 100, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.840000033378601, 3.0199999809265137, -3.5799999237060547], 'AtVector': [0.0, 1.7300000190734863, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                } {
                    Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'MoveSpeed': 1.100000023841858, 'MinimumSpeed': 1.100000023841858})
                }

                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
                goto Event152
              case 2:
                Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Fire:Dm_MelodyGet_Fire_0006', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C04-Loop', 'MaintainPerformanceState': 0})

                call C18()


                call C19()


                call C20()


                call C21()


                fork {
                    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 100, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.840000033378601, 3.0199999809265137, -3.5799999237060547], 'AtVector': [0.0, 1.7300000190734863, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                } {
                    Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'MoveSpeed': 1.100000023841858, 'MinimumSpeed': 1.100000023841858})
                }

                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
            }
        }
    }
}

void C06() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C06', 'DispTime': 9})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C06', 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ClothWarpMode': 2})

        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 7})

        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1InstanceName': '', 'MoveTime': 0, 'PosVector': [0.18000000715255737, 1.2799999713897705, 1.3899999856948853], 'AtVector': [0.009999999776482582, 1.2200000286102295, 0.25], 'TargetFovy': 45.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 1.25, 'EndDistance': 1.25, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableNear': False, 'StartFNumber': 21.0, 'EndFNumber': 21.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C06', 'IsAllSlot': True})
    }

}

void C07() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C07', 'DispTime': 8})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Npc_Hylia_Sheik_Adult', 'SceneName': 'C07'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'RequiredFrame': 0, 'StartDistance': 1.399999976158142, 'EndDistance': 1.399999976158142, 'StartFNumber': 48.0, 'EndFNumber': 48.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'RequiredFrame': 60, 'StartDistance': 1.399999976158142, 'EndDistance': 1.399999976158142, 'StartFNumber': 48.0, 'EndFNumber': 48.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 100, 'IsEnableNear': False, 'StartDistance': 1.399999976158142, 'StartFNumber': 48.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'EndDistance': 1.100000023841858, 'EndFNumber': 48.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C07', 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C07'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ASCommand': 'C07', 'ClothWarpMode': 0})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Fire_Spark_C07', 'SLinkKey': ''})
    }

}

void C08() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 6, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C08', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'SceneName': 'C08', 'TargetActorName': 'Player_Event'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C08', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 2})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Fire_Spark_C08', 'SLinkKey': ''})
    }

}

void C09() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 5, 'IsWaitEnd': False, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C09', 'Text2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 52.040000915527344, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [10.34000015258789, -6.099999904632568, 4.809999942779541], 'AtVector': [9.819999694824219, -5.909999847412109, 4.619999885559082], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 178, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 52.040000915527344, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [9.600000381469727, -5.909999847412109, 5.269999980926514], 'PosVector': [10.119999885559082, -6.099999904632568, 5.460000038146973], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'StartDistance': 2.799999952316284, 'EndDistance': 2.799999952316284, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C09', 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C09'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C09', 'ClothWarpMode': 2})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Fire_Spark_C09', 'SLinkKey': ''})
        EventSystemActor[Effect].EventWait({'Frames': 70, 'IsWaitEnd': True})
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Fire_Lava_Small_00'})
        EventSystemActor[Effect].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Fire_Lava_Small_01'})
    }

}

void C10() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C10', 'Text2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'TargetFovy': 26.010000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.8799999952316284, 1.25, 1.0700000524520874], 'AtVector': [0.07000000029802322, 1.159999966621399, -0.03999999910593033], 'EnableCameraAlpha': True, 'IsLinearMove': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 122, 'IsLinearMove': True, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'TargetFovy': 26.010000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.7599999904632568, 1.2400000095367432, 0.8999999761581421], 'AtVector': [0.07000000029802322, 1.159999966621399, -0.03999999910593033], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'RequiredFrame': 10, 'StartDistance': 1.4500000476837158, 'EndDistance': 1.4500000476837158, 'StartFNumber': 48.0, 'EndFNumber': 48.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'RequiredFrame': 80, 'StartDistance': 1.4500000476837158, 'EndDistance': 1.2000000476837158, 'StartFNumber': 48.0, 'EndFNumber': 48.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C10', 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C10'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ASCommand': 'C10', 'ClothWarpMode': 0})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Fire_Spark_C10', 'SLinkKey': ''})
    }

}

void C11() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C11', 'Text2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.30000001192092896, 1.4800000190734863, 0.8399999737739563], 'AtVector': [0.17000000178813934, 1.190000057220459, 0.05999999865889549], 'TargetFovy': 22.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsLinearMove': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 115, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.25, 1.4500000476837158, 0.7599999904632568], 'AtVector': [0.17000000178813934, 1.190000057220459, 0.05999999865889549], 'TargetFovy': 22.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 2.0, 'IsEnableNear': False, 'EndBluarLevel': 2.0, 'StartDistance': 0.800000011920929, 'EndDistance': 0.800000011920929, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C11', 'IsWaitEnd': True, 'IsAllSlot': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C11', 'ClothWarpMode': 2})
    }

}

void C12() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 2, 'IsWaitEnd': False, 'Text1': 'C12', 'BgAlignH': 0, 'BgAlignW': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.5699999928474426, 0.25, 4.940000057220459], 'AtVector': [0.5799999833106995, 1.309999942779541, -0.5600000023841858], 'TargetFovy': 14.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsLinearMove': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'IsLinearMove': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.6600000262260437, 0.25, 4.920000076293945], 'AtVector': [0.47999998927116394, 1.309999942779541, -0.5799999833106995], 'TargetFovy': 14.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'IsEnableNear': True, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C12', 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C12'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C12', 'ClothWarpMode': 2})
    }

}

void C13() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 4, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C13', 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [-0.029999999329447746, 1.2999999523162842, 0.5899999737739563], 'PosVector': [-0.05999999865889549, 1.2999999523162842, 0.9200000166893005], 'EnableCameraAlpha': True, 'IsLinearMove': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 44, 'IsLinearMove': True, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-0.05999999865889549, 1.2999999523162842, 0.9800000190734863], 'AtVector': [-0.029999999329447746, 1.2999999523162842, 0.5899999737739563], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 40, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'StartDistance': 1.0, 'EndDistance': 1.0, 'StartFNumber': 48.0, 'EndFNumber': 48.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C13', 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C13'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ASCommand': 'C13', 'ClothWarpMode': 0})
    }

}

void C14() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 4, 'BgAlignH': 0, 'BgAlignW': 0, 'IsWaitEnd': False, 'Text1': 'C14', 'Text2': '', 'Text3': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.3300000429153442, 1.2599999904632568], 'AtVector': [0.0, 1.3300000429153442, 0.6499999761581421], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsLinearMove': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 33, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.3300000429153442, 1.149999976158142], 'AtVector': [0.0, 1.3300000429153442, 0.6499999761581421], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'IsEnableNear': False, 'StartDistance': 1.100000023841858, 'EndDistance': 1.100000023841858, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C14', 'KeepOneTimeAnm': True, 'ClothWarpMode': 2})
    }

}

void C15() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 2, 'IsWaitEnd': False, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C15'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-10.170000076293945, 117.12000274658203, -8.399999618530273], 'AtVector': [-10.609999656677246, 116.37999725341797, -9.180000305175781], 'TargetFovy': 49.31999969482422, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-10.420000076293945, 120.6500015258789, -6.010000228881836], 'AtVector': [-10.920000076293945, 119.91000366210938, -6.75], 'TargetFovy': 49.31999969482422, 'MoveTime': 200, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-10.420000076293945, 120.6500015258789, -6.010000228881836], 'AtVector': [-10.920000076293945, 119.91000366210938, -6.75], 'TargetFovy': 49.31999969482422, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C15', 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C15'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C15', 'IsWaitEnd': True, 'ClothWarpMode': 2})
    } {
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_MelodyGet_Fire_Spark_C10', 'SLinkKey': '', 'IsKill': False})
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Fire_Spark_C15', 'SLinkKey': ''})
    }

}

void C16() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C16', 'DispTime': 10})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.05000000074505806, 1.4199999570846558, 1.409999966621399], 'AtVector': [0.0, 1.2699999809265137, 0.27000001072883606], 'TargetFovy': 45.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'StartDistance': 1.25, 'EndDistance': 1.25, 'StartFNumber': 24.0, 'EndFNumber': 24.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': -1.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C16', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 2})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C16', 'IsAllSlot': True})
    } {
        Item_Ocarina_Time.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Fire_Shine', 'SLinkKey': ''})
    } {
        Item_Ocarina_Time_Holder.EventPlayAS({'ASName': 'Carry', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

}

void C16-02() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}
