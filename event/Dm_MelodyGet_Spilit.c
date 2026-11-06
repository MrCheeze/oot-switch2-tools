-------- EventFlow: Dm_MelodyGet_Spilit --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventTriggerControllerRumble', 'EventTriggerAutoPlacementMgrRequestDisappearAll']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Sheik_Adult
entrypoint: None()
actions: ['EventTalk', 'EventGoOffstageForUser', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventTriggerEmitXLink', 'EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Spilit/Dm_MelodyGet_Spilit_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Spilit_Sheik.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveAtActor', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventNaviMoveAtPos', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerNaviChangeWaitStateToDefault', 'EventNaviRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventSetDoFForFlowchart', 'EventSetDynamicResolutionLoadThreshold', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerMove', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerEmitNpcOrPlayerVoice', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerPutAway', 'EventPlayerUnequip', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Spilit/Dm_MelodyGet_Spilit_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Spilit_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kaepora
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Spilit/Dm_MelodyGet_Spilit_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Spilit_Kaepora.root.as', 'IsWorld': True, 'Position': [-96.36599731445312, 122.87750244140625, 34.102088928222656]}

Actor: Dm_Locator[Kaepora]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Spilit/Dm_MelodyGet_Spilit_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Spilit_Dm_Locator.root.as', 'IsWorld': True, 'Position': [-156.03500366210938, 117.4823989868164, -9.172639846801758]}

Actor: Dm_Item_Sheik_Harp
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerModelBind']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Spilit/Dm_MelodyGet_Spilit_Item_Harp_Sheik/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Spilit_Harp.root.as', 'Position': [-151.16000366210938, 95.36000061035156, 10.319999694824219], 'Rotation': [0.0, -90.0, 0.0]}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart', 'EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Time
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller_Rumble_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Navi]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 2, 'WaitingResumeInGameBgm': False})

    call Ready()


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

        call C03-05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C03-05'})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C04', 'Text2': ''})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C05', 'Text2': ''})
    }


    call Learn_melody()


    fork {

        call C11()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C11'})
    }


    call AllSage.MeetSheik_And_Gone()

}

void Learn_melody() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 159})
    Npc_Hylia_Sheik_Adult.EventTriggerSetOwnAsInstrumentPlayer()

    call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 9, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0005'})


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'UseAnmDriven': True, 'ASCommand': 'C06-Ocarina-Hold', 'IsWaitEnd': True, 'ClothWarpMode': 2})

        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 9})

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [0.05999999865889549, 1.309999942779541, 1.4900000095367432], 'AtVector': [-0.019999999552965164, 1.2799999713897705, -0.8399999737739563], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndBluarLevel': 2.5, 'RequiredFrame': 0, 'StartBluarLevel': 2.5, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'IsAutoFocalDist': False, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C06'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'BakeLightLuminanceRatio': 1.0, 'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 1.7999999523162842})
    }


    fork {

        call Dm_SY_Ocarina.LearningOcarinaPlayAutoForSeek()

    } {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [0.07000000029802322, 0.10999999940395355, 23.209999084472656], 'AtVector': [0.05999999865889549, 5.170000076293945, 9.079999923706055], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 420, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.029999999329447746, 0.6399999856948853, 16.8700008392334], 'AtVector': [0.019999999552965164, 7.46999979019165, 10.09000015258789], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'session_Sheik', 'IsAllSlot': True, 'ClothWarpMode': 2})
        } {
            Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'session_Harp'})
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 300})
            Npc_Navi.EventNaviMoveAtActor({'IsLookAtObject': True, 'TargetActorName': 'Player_Event', 'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'TargetInstanceName': '', 'ASCommand': '', 'IsTurnLooking': False, 'TargetOffset': [-0.5, 0.12999999523162842, 0.0], 'IsUseDisguiseSpeakerPos': False, 'OverwriteRotNearDist': -1.0, 'IsTargetNaviAttentionPos': False, 'LookAtWorldPos': [-155.1999969482422, 96.5, 10.3100004196167], 'LookAtTarget': 0, 'LookAtActorName': '', 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C07'})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 1.0})
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }


        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [4.389999866485596, 8.930000305175781, 2.0999999046325684], 'AtVector': [3.809999942779541, 7.769999980926514, 2.130000114440918], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [4.010000228881836, 8.899999618530273, 0.75], 'AtVector': [3.4600000381469727, 7.75, 0.9700000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 375, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C07-Ocarina_PlayWait-Loop', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C08'})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Spilit_C08', 'CurrDemoPaletteName': 'Dm_MelodyGet_Spilit_C08'})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C09-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            Npc_Kaepora.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C09'})
        } {
            Dm_Locator[Kaepora].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C09-Kaepora-0'})
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 350})
            Npc_Navi.EventNaviMoveAtActor({'IsLookAtObject': True, 'TargetActorName': 'Player_Event', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'TargetInstanceName': '', 'ASCommand': '', 'IsTurnLooking': False, 'TargetOffset': [-0.5, 0.0, 0.0], 'IsWaitEnd': True, 'IsUseDisguiseSpeakerPos': False, 'OverwriteRotNearDist': -1.0, 'IsTargetNaviAttentionPos': False, 'LookAtTarget': 0, 'LookAtWorldPos': [-155.1999969482422, 96.5, 10.3100004196167], 'LookAtActorName': '', 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C09', 'Text2': ''})
        } {
            Npc_Kaepora.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Spilit_Feather', 'SLinkKey': ''})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Spilit_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Spilit_C01'})
        }

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [0.05999999865889549, 1.309999942779541, 1.4900000095367432], 'AtVector': [-0.019999999552965164, 1.2799999713897705, -0.8399999737739563], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C10-Ocarina_Wait-Loop', 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 2})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C05-01-Ed'})
    } {
        Dm_Item_Sheik_Harp.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C10', 'Text2': ''})
    } {
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': -1.0})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'BakeLightLuminanceRatio': 1.0, 'InnerRatio': 0.0, 'ShadowRatio': 1.7999999523162842, 'IsOverwriteBakeLightLuminanceRatio': True})
    } {
        Npc_Kaepora.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_MelodyGet_Spilit_Feather', 'SLinkKey': '', 'IsKill': False})
        Item_Ocarina_Time.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Spilit_Shine', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'Frames': 160, 'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_SpiritRequiem'})

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
}

void C11() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [-0.20999999344348907, 1.3600000143051147, 1.9700000286102295], 'AtVector': [0.6100000143051147, 1.4199999570846558, -4.360000133514404], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C05-Npc_Hylia_WU_Sheik-A-0-Ed', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsAllSlot': True})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'IsOverwriteShadowRatio': False, 'BakeLightLuminanceRatio': 1.100000023841858})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0006', 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'C05-Loop', 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    call Navi_Reaction()


    call C18()

}

void Navi_Reaction() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 0}) {
      case [0, 1]:

        call C12()


        call C13()


        call C14()


        call C15()


        call C16()


        call C17()

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0023'})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0007', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0008', 'MaintainPerformanceState': 0, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True})
        Event63:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_MeetSheikCount', 'Value': 1, 'Index': -1})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 1}) {
          case [0, 1]:

            call C12()


            call C13()


            call C14()


            call C15()


            call C16()


            call C17()

            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0024'})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0007', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0008', 'MaintainPerformanceState': 0, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True})
            goto Event63
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 2}) {
              case [0, 1]:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0025'})
                Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0026', 'ASName': 'C05-Loop'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                call C12()


                call C13()


                call C14()


                call C15()


                call C16()


                call C17()

                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0027'})
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0007', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0008', 'MaintainPerformanceState': 0, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True})
                goto Event63
              case 2:

                call C12()


                call C13()


                call C14()


                call C15()


                call C16()


                call C17()

                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0007', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0008', 'MaintainPerformanceState': 0, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True})
                goto Event63
            }
        }
    }
}

void C17() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C17'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVector': [-157.11000061035156, 96.58000183105469, 9.039999961853027], 'AtVector': [-153.6199951171875, 96.16999816894531, 10.220000267028809], 'TargetFovy': 50.0, 'AtVectorSetType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-157.44000244140625, 96.91000366210938, 9.130000114440918], 'AtVector': [-153.5800018310547, 96.30000305175781, 10.119999885559082], 'TargetFovy': 50.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 305, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 155})

        fork {
            Npc_Navi.EventTriggerEmitXLink({'SLinkKey': 'Dm_MelodyGet_Spilit_00', 'ELinkKey': ''})
            Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsLookAtObject': True, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'LookAtTarget': 2, 'LookAtActorName': 'Player_Event', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'ASCommand': '', 'IncSpeedDistance': 2.0, 'DecSpeedDistance': 3.0, 'WorldPos': [-154.3800048828125, 97.01000213623047, 9.149999618530273], 'MoveSpeed': 6.0, 'OverwriteRotNearDist': -1.0})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'C17_Loop', 'IsAllSlot': True, 'UseAnmDriven': False, 'ClothWarpMode': 0})
        }

    }

}

void C03() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_MelodyGet_Sheik', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.009999999776482582, 1.0299999713897705, 3.690000057220459], 'AtVector': [0.009999999776482582, 0.9399999976158142, 2.009999990463257], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 200, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.019999999552965164, 1.1399999856948853, 2.25], 'AtVector': [0.019999999552965164, 1.159999966621399, 2.009999990463257], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'ASName': 'C01-2', 'IsAnimeDriven': True})

        call AllSage.MelodyOfSpirit_01()

    } {
        Npc_Navi.EventNaviMoveAtActor({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Hylia_Sheik_Adult', 'TargetActorName': 'Player_Event', 'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'TargetInstanceName': '', 'ASCommand': '', 'IsTurnLooking': False, 'TargetOffset': [-0.5, 0.12999999523162842, 0.0], 'IsUseDisguiseSpeakerPos': False, 'OverwriteRotNearDist': -1.0, 'IsTargetNaviAttentionPos': False, 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'BakeLightLuminanceRatio': 1.0, 'ShadowRatio': 0.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.1699999570846558, 1.2699999809265137, -2.2300000190734863], 'AtVector': [0.4399999976158142, 1.2100000381469727, -0.27000001072883606], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0003', 'IsNotBecomeSpeaker': True, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0004', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_MelodyGet_Sheik', 'IsUseSuspendFade': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 1.0})
    }

    Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0, 'ASName': 'C05-01', 'IsAllSlot': True})
}

void C12() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C12'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [6.71999979019165, 0.7900000214576721, 1.8799999952316284], 'AtVector': [1.4500000476837158, 0.8999999761581421, 2.1600000858306885], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 180, 'Actor1ActorName': 'Player_Event', 'PosVector': [7.949999809265137, 0.7699999809265137, 1.8200000524520874], 'AtVector': [1.4500000476837158, 0.8999999761581421, 2.1600000858306885], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C12', 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'EndDistance': 10.0, 'StartDistance': 10.0, 'StartFNumber': 12.0, 'EndFNumber': 12.0, 'StartBluarLevel': 1.7999999523162842, 'EndBluarLevel': 1.7999999523162842, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C13() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C13', 'Text2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-146.75, 95.7300033569336, -0.10000000149011612], 'AtVector': [-140.0800018310547, 98.4800033569336, 6.860000133514404], 'TargetFovy': 46.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 150, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-146.75, 95.7300033569336, -0.10000000149011612], 'AtVector': [-140.25999450683594, 98.56999969482422, 7.0], 'TargetFovy': 46.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'MoveSpeed': 0.20000000298023224, 'WorldPos': [-155.0, 95.36000061035156, 10.319999694824219], 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-155.0800018310547, 96.83999633789062, 10.819999694824219], 'YAngle': 90.0, 'ClothWarpMode': -1})
    } {
        EventWorldManagerController.Event_SetWindForFlowchart({'IsWaitEnd': False, 'Elevation': 0.0, 'Azimuth': 340.0, 'IsImmTrans': False, 'Speed': 20.0})
    } {
        Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Spilit_Smoke', 'SLinkKey': ''})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'EndDistance': 10.0, 'EndFNumber': 12.0, 'EndBluarLevel': 1.7999999523162842})
    } {
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.2000000476837158, 'RumbleCall': 'Demo_Large_GataGata'})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 70})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_BuBuBu', 'Length': 1.5})
    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'SAND'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': True, 'BakeLightLuminanceRatio': 1.0, 'ShadowRatio': 0.6000000238418579})
    }

}

void C14() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C14', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C14-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C14', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C14'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_MelodyGet_Spilit_02'})
    } {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerControllerRumble({'Length': 2.0, 'RumbleCall': 'Demo_Middle_BuBuBu'})
    }

}

void C15() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C15', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C15-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C15', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'IsAllSlot': True})
    } {
        GameSystemActor.EventTriggerControllerRumble({'Length': 4.0, 'RumbleCall': 'Demo_Middle_BuBuBu'})
    }

}

void C16() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C16', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C16-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C16', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': False, 'IsImmTrans': False})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_BuBuBu', 'Length': 0.699999988079071})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 45})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.5, 'RumbleCall': 'Demo_Middle_GataGata'})
    } {
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'IsOverwriteShadowRatio': False, 'BakeLightLuminanceRatio': 2.0})
    }

}

void Ready() {

    fork {
        Dm_Item_Sheik_Harp.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Hylia_Sheik_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Locator[Kaepora].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-156.03500366210938, 117.4823989868164, -9.172639846801758], 'ClothWarpMode': -1})
        Npc_Kaepora.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'Kaepora', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})

        fork {
            Npc_Kaepora.EventPlayASWithClothWarp({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C07-Loop', 'IsAllSlot': False, 'ClothWarpMode': 2})
        } {
            Dm_Locator[Kaepora].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C07-Kaepora-Loop'})
        }

    } {
        GameSystemActor.EventTriggerAutoPlacementMgrRequestDisappearAll()
    } {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerPlayerEventStartWithCarry()
        Player_Event.EventTriggerPlayerEventStartWithRolling()
    } {
        Npc_Navi.EventTriggerNaviChangeWaitStateToDefault()
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-155.75, 96.8499984741211, 11.270000457763672], 'ClothWarpMode': -1, 'YAngle': -90.0})
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-154.67999267578125, 96.37999725341797, 10.369999885559082], 'AtVector': [-148.3699951171875, 95.9000015258789, 10.3100004196167], 'TargetFovy': 30.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Locator[Navi].EventWarpToTargetPosAndRot({'Position': [-154.8800048828125, 97.05000305175781, 9.90999984741211], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 1.0})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-154.67999267578125, 96.37999725341797, 10.369999885559082], 'AtVector': [-148.3699951171875, 95.9000015258789, 10.3100004196167], 'TargetFovy': 30.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 76})
    } {
        Player_Event.EventTriggerSoundDisableSpMode({'FadeTime': 0.0, 'ActorSoundSpMode': 0})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'YAngle': 90.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [-155.8300018310547, 95.36000061035156, 10.319999694824219]})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
        Player_Event.EventTriggerSoundEnableSpMode({'FadeTime': 0.0, 'ActorSoundSpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -90.0, 'Position': [-151.16000366210938, 101.96959686279297, 10.319999694824219], 'ClothWarpMode': -1})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True, 'ASName': 'C01-0', 'IsAnimeDriven': True})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'ASName': 'C01-1', 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Spilit_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Spilit_C01'})
    } {
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Spilit_Land', 'SLinkKey': ''})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        }

    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [1.2000000476837158, 1.1799999475479126, 2.119999885559082], 'AtVector': [-2.380000114440918, 1.3200000524520874, -3.3299999237060547], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 3})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Npc_Navi.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'EvtTalk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_MelodyGet_Spilit_01'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'BakeLightLuminanceRatio': 1.0, 'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.800000011920929})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [0.3400000035762787, 1.090000033378601, 1.25], 'AtVector': [0.25, 1.1299999952316284, 1.9299999475479126], 'TargetFovy': 15.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 180, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.3199999928474426, 1.100000023841858, 1.399999976158142], 'AtVector': [0.25, 1.1299999952316284, 1.9299999475479126], 'TargetFovy': 15.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C05-02', 'IsAllSlot': True})
    } {
        Dm_Item_Sheik_Harp.EventTriggerModelBind({'ActorName': 'Npc_Hylia_Sheik_Adult', 'BoneName': 'Weapon_L', 'InstanceName': '', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, 0.0, 180.0]})
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C05-Loop', 'IsWaitEnd': False})
    } {
        Npc_Navi.EventNaviMoveAtActor({'IsLookAtObject': True, 'TargetActorName': 'Player_Event', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'TargetInstanceName': '', 'ASCommand': '', 'IsTurnLooking': False, 'TargetOffset': [-0.5, 0.0, 0.0], 'IsUseDisguiseSpeakerPos': False, 'OverwriteRotNearDist': -1.0, 'IsTargetNaviAttentionPos': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtWorldPos': [-155.1999969482422, 96.5, 10.3100004196167], 'IsWaitEnd': False, 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C05-Ocarina-Loop', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'StartDistance': 3.4000000953674316, 'EndDistance': 3.4000000953674316, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C18() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C18'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [-150.83999633789062, 96.11000061035156, 10.34000015258789], 'AtVector': [-156.14999389648438, 97.55999755859375, 10.210000038146973], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [-150.5500030517578, 96.02999877929688, 10.350000381469727], 'AtVector': [-156.14999389648438, 97.55999755859375, 10.210000038146973], 'TargetFovy': 50.0, 'MoveTime': 180, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 30.0, 'IsWaitEnd': True, 'UseAnmDriven': True, 'ASCommand': 'C17_Ed', 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
    } {
        Npc_Navi.EventNaviMoveAtActor({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'LookAtWorldPos': [-158.25999450683594, 96.05999755859375, 10.319999694824219], 'MinimumSpeed': 0.0, 'IsLookAtObject': True, 'OverwriteRotNearDist': -1.0, 'IncSpeedDistance': 0.800000011920929, 'TargetActorName': 'Dm_Locator', 'TargetInstanceName': 'Navi', 'TargetOffset': [0.0, 0.0, 0.0], 'IsTargetNaviAttentionPos': False, 'IsTurnLooking': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'ASCommand': 'EvtWait', 'LookAtTarget': 0})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 1.0, 'InnerRatio': 0.0, 'ShadowRatio': 0.800000011920929})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void C03-05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-05', 'RootType': 3, 'TargetActorName': 'Player_Event', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False})
    } {

        call AllSage.MelodyOfSpirit_02()

        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0002', 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}
