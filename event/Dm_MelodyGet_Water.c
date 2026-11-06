-------- EventFlow: Dm_MelodyGet_Water --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventSetDynamicResolutionLoadThreshold']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Water/Dm_MelodyGet_Water/workspace.pp__ModelProject.gyml'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject', 'EventPlayerMove']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Water/Dm_MelodyGet_Water_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Water_Player_Adult.root.as', 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_Sheik_Adult
entrypoint: None()
actions: ['EventTalk', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventPlayASWithClothWarp', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventTriggerEmitXLink', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': True, 'Rotation': [0.0, 0.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Water/Dm_MelodyGet_Water_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Water_Sheik.root.as', 'Position': [-46.189998626708984, 109.75669860839844, 30.200000762939453]}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveAroundToPlayer', 'EventNaviMoveAtPos', 'EventNaviLookAtObject', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerChangeEmotion', 'EventGoOffstageForUser', 'EventNaviRequestLookAtTheFront']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Water/Dm_MelodyGet_Water_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Water_Npc_Navi.root.as', 'EventMemberCreateMethod': 0, 'Position': [0.0, 0.0, 0.0], 'Rotation': [0.0, 0.0, 0.0], 'IsWorld': False, 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Item_Sheik_Harp
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Water/Dm_MelodyGet_Water_Item_Harp_Sheik/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Water_Harp.root.as', 'Position': [-46.189998626708984, 109.75669860839844, 30.200000762939453]}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerSoundBeginForbidScreenDucking', 'EventTriggerSoundEndForbidScreenDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text2': '', 'Text3': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'IsWaitEnd': False})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03', 'IsWaitEnd': False})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C04', 'IsWaitEnd': False})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C05', 'IsWaitEnd': False})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C06', 'IsWaitEnd': False})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C07', 'IsWaitEnd': False})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C08', 'IsWaitEnd': False})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C09', 'IsWaitEnd': False})
    }


    fork {

        call C10()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C10', 'IsWaitEnd': False, 'Text2': ''})
    }


    call Learn_melody()


    fork {

        call Dm_SY_Ocarina.LearningOcarinaPlayAutoForSeek()

    } {

        call C12()


        call C13()


        call C14()

    }


    call C15()


    fork {

        call C16()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C16', 'IsWaitEnd': False, 'Text2': ''})
    }


    call AllSage.MeetSheik_And_Gone()


    call SageOfWater.Dm_MelodyGet_WaterAfter()

}

void Learn_melody() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ASCommand': 'C11', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1})

        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 8})

    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'IsWaitEnd': False, 'PosVector': [-0.30000001192092896, 1.4900000095367432, 1.0800000429153442], 'AtVector': [0.019999999552965164, 1.2899999618530273, -0.009999999776482582], 'TargetFovy': 45.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndBluarLevel': 2.5, 'RequiredFrame': 0, 'StartBluarLevel': 2.5, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C11'})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'PosOffset': [-1.0, 0.0, 0.0], 'ActorName': '', 'Target': 0, 'WorldPos': [-46.22999954223633, 111.0, 33.0]})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C01() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': True, 'UseAnmDriven': False, 'ASCommand': 'C01-Player_Adult-A-0', 'IsAllSlot': True, 'ClothWarpMode': 3})
    } {
        UISystemActor.EventEventFadeOut({'Color': 0, 'IsNoPlayAnime': True, 'Length': 1, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Water_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Water_C01'})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.1299999952316284, 1.149999976158142, 0.8999999761581421], 'AtVector': [-0.6000000238418579, 1.2000000476837158, 0.3499999940395355], 'TargetFovy': 40.16999816894531, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'StartDistance': 3000.0, 'EndDistance': 3000.0, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-45.64175033569336, 111.0, 41.63999938964844], 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'ASName': 'C01-Npc_Navi-A-0', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Demo_Wait_Half'})
    } {
        Dm_Item_Sheik_Harp.EventTriggerParticipateEvent()
        Dm_Item_Sheik_Harp.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    }

}

void C02() {

    fork {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'ClothWarpMode': -1, 'Position': [-45.900001525878906, 110.8499984741211, 34.79999923706055]})
        Npc_Navi.EventPlayAS({'ASName': 'C02-Npc_Navi-A-0', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
        Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0001', 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'ASName': 'C02-Npc_Navi-A-1_Loop', 'IsWaitEnd': True, 'EndDialogOption': 0, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'SceneName': 'C02-0'})
    } {
        Npc_Hylia_Sheik_Adult.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameSystemActor.EventWait({'Frames': 130, 'IsWaitEnd': True})
        Npc_Hylia_Sheik_Adult.EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'ActorName': '', 'WorldPos': [-45.709999084472656, 110.73179626464844, 31.433080673217773]})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'StartDistance': 3000.0, 'EndDistance': 3000.0, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Hylia_Sheik_Adult.EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 2, 'ActorName': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
}

void C16() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-46.16999816894531, 111.20999908447266, 33.630001068115234], 'AtVector': [-46.16999816894531, 111.19000244140625, 33.13999938964844], 'TargetFovy': 14.760000228881836, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.8499999046325684, 'EndBluarLevel': 2.8499999046325684, 'StartFNumber': 85.0, 'EndFNumber': 85.0, 'StartDistance': 3.619999885559082, 'EndDistance': 3.619999885559082, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayASWithClothWarp({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C10-Npc_Hylia_WU_Sheik-A-1-Ed', 'ClothWarpMode': -1, 'IsAllSlot': True})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0012', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'IsWaitEnd': True, 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [-1.0, 0.0, 0.0]})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'MoveSpeed': 2.0, 'MinimumSpeed': 2.0, 'IncSpeedDistance': 1.0, 'DecSpeedDistance': 1.0, 'LookAtTarget': 0, 'ASCommand': 'EvtWait', 'IsTurnLooking': False, 'WorldPos': [-45.599998474121094, 111.0, 34.16999816894531], 'OverwriteRotNearDist': -1.0})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_KingZora_adult_Talk_Event198'}) {
        Event53:
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0013', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        Event283:

        call Navi_Reaction()

    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Adult_Zora', 'Num': 1}) {
        goto Event53
    } else {
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0020', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0021', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0022', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0013', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        goto Event283
    }
}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.8700000047683716, 0.8100000023841858, 2.5899999141693115], 'AtVector': [0.3100000023841858, 1.1799999475479126, 1.0199999809265137], 'TargetFovy': 15.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.7200000286102295, 'EndDistance': 2.7200000286102295, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 2.7899999618530273, 'EndBluarLevel': 2.7899999618530273, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_MelodyGet_Sheik', 'CommandLife': 2, 'IsReleaseDucking': False})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0019', 'EndDialogOption': 3, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'YAngle': 180.0, 'ASCommand': 'EvtWait', 'Position': [-46.22481155395508, 109.66560363769531, 37.900001525878906], 'ClothWarpMode': 0, 'EnableInAir': False})
    }

}

void C04() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-40.880001068115234, 113.58999633789062, 36.349998474121094], 'AtVector': [-44.66999816894531, 111.04000091552734, 33.400001525878906], 'TargetFovy': 53.0, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNear': False, 'StartDistance': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': [-46.22481918334961, 109.68080139160156, 34.14910125732422], 'ApplySlowMove': False, 'DecSpeedDistance': 3.0, 'MoveSpeed': 0.5})
            GameSystemActor.EventWait({'Frames': 50, 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-45.04800033569336, 110.7074966430664, 31.35301971435547], 'ClothWarpMode': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})

            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_Hylia_Sheik_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0002', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
            } {
                Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IncSpeedDistance': 1.0, 'DecSpeedDistance': 1.0, 'LookAtTarget': 0, 'ASCommand': 'EvtWait', 'IsTurnLooking': False, 'WorldPos': [-45.75, 111.0, 34.16999816894531], 'OverwriteRotNearDist': -1.0, 'MoveSpeed': 1.0, 'MinimumSpeed': 1.0})
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
            }

        }

    } else {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'C04-Player_Adult-A-0', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1, 'IsWaitEnd': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-40.880001068115234, 113.58999633789062, 36.349998474121094], 'AtVector': [-44.66999816894531, 111.04000091552734, 33.400001525878906], 'TargetFovy': 53.0, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNear': False, 'StartDistance': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 230})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-45.04800033569336, 110.7074966430664, 31.35301971435547], 'ClothWarpMode': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                Npc_Hylia_Sheik_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0002', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
            } {
                Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'MoveSpeed': 2.0, 'MinimumSpeed': 2.0, 'IncSpeedDistance': 1.0, 'DecSpeedDistance': 1.0, 'LookAtTarget': 0, 'ASCommand': 'EvtWait', 'IsTurnLooking': False, 'WorldPos': [-45.75, 111.0, 34.16999816894531], 'OverwriteRotNearDist': -1.0})
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
            }

        }

    }
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.659999966621399, 1.399999976158142, -3.819999933242798], 'AtVector': [-0.1899999976158142, 1.2200000286102295, 0.9300000071525574], 'TargetFovy': 12.859999656677246, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 2.859999895095825, 'EndBluarLevel': 2.859999895095825, 'StartDistance': 7.760000228881836, 'EndDistance': 7.760000228881836, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Hylia_Sheik_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'MoveTime': 0, 'PosVector': [-44.7400016784668, 110.70999908447266, 29.56999969482422], 'AtVector': [-47.209999084472656, 111.4000015258789, 30.6299991607666], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsLinearMove': False, 'IsWaitEnd': False, 'MoveTime': 400, 'PosVector': [-45.97999954223633, 110.25, 28.290000915527344], 'AtVector': [-47.16999816894531, 111.37000274658203, 30.540000915527344], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 33.400001525878906, 'EndDistance': 33.400001525878906, 'StartFNumber': 8.600000381469727, 'EndFNumber': 8.600000381469727, 'EndBluarLevel': 4.5, 'StartBluarLevel': 0.0, 'RequiredFrame': 300, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Sheik_Adult.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-53.37535095214844, 111.27950286865234, 33.96485900878906]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Hylia_Sheik_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0006', 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'Demo_Wait_Half', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    }

    Npc_Hylia_Sheik_Adult.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
}

void C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.8799999952316284, 2.380000114440918, 3.4000000953674316], 'AtVector': [0.20000000298023224, 1.659999966621399, 1.0199999809265137], 'TargetFovy': 12.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 3.7699999809265137, 'EndDistance': 3.7699999809265137, 'StartBluarLevel': 2.6500000953674316, 'EndBluarLevel': 2.6500000953674316, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0007', 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'offset': [-0.4000000059604645, 0.0, -0.20000000298023224], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    }

}

void C08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-2.950000047683716, 0.4099999964237213, -0.41999998688697815], 'AtVector': [0.30000001192092896, 0.9200000166893005, 1.6299999952316284], 'TargetFovy': 56.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 800, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-2.4800000190734863, 0.3100000023841858, -1.1399999856948853], 'AtVector': [0.15000000596046448, 0.9200000166893005, 1.6399999856948853], 'TargetFovy': 56.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 5.5, 'EndDistance': 5.5, 'StartFNumber': 8.5, 'EndFNumber': 8.5, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0008', 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0009', 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
    }

}

void C09() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': '', 'RootType': 0, 'SceneName': 'C09'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 45.29999923706055, 'EndFNumber': 45.29999923706055, 'StartDistance': 0.6679999828338623, 'EndDistance': 0.6679999828338623, 'StartBluarLevel': 2.1500000953674316, 'EndBluarLevel': 2.1500000953674316, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0010', 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_MelodyGet_Sheik', 'IsUseSuspendFade': False})
    }

    Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C10-Npc_Hylia_WU_Sheik-A-0-St', 'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsAllSlot': True})
}

void C18() {

    call Common_Camera_Pln.CameraDoF_Default()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.3100000023841858, 0.8799999952316284, 2.4700000286102295], 'AtVector': [-0.18000000715255737, 0.8700000047683716, 3.0299999713897705], 'TargetFovy': 42.75, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.2899999618530273, 1.2699999809265137, -2.109999895095825], 'AtVector': [-1.2000000476837158, 1.2300000190734863, -1.690000057220459], 'TargetFovy': 42.75, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        SoundSystemActor.EventTriggerSoundBeginForbidScreenDucking({'CommandLife': 2})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C18-Player_Adult-A-0', 'UseAnmDriven': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C18-Npc_Hylia_WU_Sheik-A-0', 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Water_Flash', 'SLinkKey': ''})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Npc_Hylia_Sheik_Adult.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_MelodyGet_Water_0024_Sp_00'})
    } {
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 45})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
    }

    Npc_Hylia_Sheik_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void C19() {

    call Common_Camera_Pln.CameraDoF_Default()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.12999999523162842, 0.6700000166893005, 3.1600000858306885], 'AtVector': [-0.07999999821186066, 0.800000011920929, 1.7999999523162842], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    }

    UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'Length': 1, 'IsNoPlayAnime': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
        SoundSystemActor.EventTriggerSoundEndForbidScreenDucking()
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C19-Player_Adult-A-0', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'UseAnmDriven': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

        call Common_Camera_Pln.CameraDoF_Default()

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-4.269999980926514, 2.569999933242798, -4.639999866485596], 'AtVector': [-4.150000095367432, 2.5199999809265137, -4.449999809265137], 'TargetFovy': 42.75, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    }

}

void C20() {
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsWaitEnd': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 60.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
}

void C10() {
    Npc_Hylia_Sheik_Adult.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.9200000166893005, 0.8399999737739563, 2.2200000286102295], 'TargetFovy': 21.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.5099999904632568, 1.0, 1.0800000429153442], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.9200000166893005, 0.8399999737739563, 2.2200000286102295], 'AtVector': [0.5099999904632568, 1.0499999523162842, 1.0800000429153442], 'TargetFovy': 21.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 120, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.190000057220459, 'EndDistance': 2.190000057220459, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 2.369999885559082, 'EndBluarLevel': 2.369999885559082, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C10-Npc_Hylia_WU_Sheik-A-1-St', 'IsAllSlot': True})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C10-Npc_Hylia_WU_Sheik-A-2', 'IsAllSlot': True})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C10-Item_Harp_Sheik-A-1-st', 'IsWaitEnd': True})
        Dm_Item_Sheik_Harp.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C10-Item_Harp_Sheik-A-2'})
    } {
        EventSystemActor.EventWait({'Frames': 160, 'IsWaitEnd': True})

        call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 8, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Water:Dm_MelodyGet_Water_0011'})

    }

}

void Navi_Reaction() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 0}) {
      case [0, 1]:

        call C16-02()


        fork {

            call C18()

        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C18', 'IsWaitEnd': False, 'Text4': '', 'Text3': '', 'Text2': ''})
        }


        fork {

            call C19()

        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C19', 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
        }


        fork {

            call C20()

        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C20', 'IsWaitEnd': False})
        } {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0023'})
        }

        Event282:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_MeetSheikCount', 'Value': 1, 'Index': -1})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 1}) {
          case [0, 1]:

            call C16-02()


            fork {

                call C18()

            } {
                DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C18', 'IsWaitEnd': False, 'Text4': '', 'Text3': '', 'Text2': ''})
            }


            fork {

                call C19()

            } {
                DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C19', 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
            }


            fork {

                call C20()

            } {
                DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C20', 'IsWaitEnd': False})
            } {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0024'})
            }

            goto Event282
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 2}) {
              case [0, 1]:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0025'})
                Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Wait', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0026'})

                call C16-02()


                fork {

                    call C18()

                } {
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C18', 'IsWaitEnd': False, 'Text4': '', 'Text3': '', 'Text2': ''})
                }


                fork {

                    call C19()

                } {
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C19', 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
                }


                fork {

                    call C20()

                } {
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C20', 'IsWaitEnd': False})
                } {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0027'})
                }

                goto Event282
              case 2:

                call C16-02()


                fork {

                    call C18()

                } {
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C18', 'IsWaitEnd': False, 'Text4': '', 'Text3': '', 'Text2': ''})
                }


                fork {

                    call C19()

                } {
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C19', 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
                }


                fork {

                    call C20()

                } {
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C20', 'IsWaitEnd': False})
                }

            }
        }
    }
}

void C16-02() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-46.16999816894531, 111.16000366210938, 33.5099983215332], 'AtVector': [-46.16999816894531, 111.12999725341797, 33.13999938964844], 'TargetFovy': 14.760000228881836, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': ''})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C16-Npc_Hylia_WU_Sheik-A-0', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsAllSlot': True})
    }

}

void C12() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C12', 'IsWaitEnd': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': '', 'RootType': 0, 'SceneName': 'C12-1'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C12_C14_Sheik-Npc_Hylia_WU_Sheik-A-0', 'IsAllSlot': True})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'ASName': 'C12_C14_Sheik-Item_Harp_Sheik-A-0', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Water_DiamondDust', 'SLinkKey': ''})
    }

}

void C13() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C12_C14_Link-Player_Adult-A-0', 'ClothWarpMode': -1})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C13', 'IsWaitEnd': False, 'Text2': ''})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': '', 'RootType': 0, 'SceneName': 'C13'})
    }

}

void C14() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C14', 'IsWaitEnd': False, 'Text2': ''})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'SceneName': 'C14-3'})
    }

}

void C15() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'IsWaitEnd': False, 'PosVector': [-0.30000001192092896, 1.4900000095367432, 1.0800000429153442], 'AtVector': [0.019999999552965164, 1.2899999618530273, -0.009999999776482582], 'TargetFovy': 45.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndBluarLevel': 2.5, 'RequiredFrame': 0, 'StartBluarLevel': 2.5, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C15', 'IsWaitEnd': False})
    } {
        Dm_Item_Sheik_Harp.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C15-Player_Adult-A-0', 'IsAllSlot': True, 'ClothWarpMode': 3})
    } {
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_MelodyGet_Water_DiamondDust', 'SLinkKey': '', 'IsKill': False})
        Item_Ocarina_Time.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Water_Shine', 'SLinkKey': ''})
    } {
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': -1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_WaterSerenade'})

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}
