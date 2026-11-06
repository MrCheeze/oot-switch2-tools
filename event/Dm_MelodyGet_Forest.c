-------- EventFlow: Dm_MelodyGet_Forest --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventTriggerControllerRumble', 'EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Sheik_Adult
entrypoint: None()
actions: ['EventTalk', 'EventGoOffstageForUser', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Npc_Hylia_WU_Sheik.root.as', 'Position': [-10.420000076293945, 121.01000213623047, -100.3499984741211], 'Rotation': [0.0, 90.0, 0.0]}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviLookAtObject', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviRequestLookAtTheFront', 'EventNaviMoveAtPos', 'EventTriggerNaviChangeWaitStateToDefault', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams', 'EventSetDynamicResolutionLoadThreshold']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerMove', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerTurnAndLookNow', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Animal_Kokiri_Insect_A[01]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Animal_Kokiri_Insect_A[02]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Animal_Kokiri_Insect_A[03]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Animal_Kokiri_Insect_A[04]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Animal_Kokiri_Insect_A[05]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Animal_Kokiri_Insect_A[06]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Animal_Kokiri_Insect_A[07]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Animal_Kokiri_Insect_A[08]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Animal_Kokiri_Insect_A[09]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Animal_Kokiri_Insect_A[10]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Animal_KokiriForest_Insect_A.root.as'}

Actor: Dm_Item_Sheik_Harp
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Forest/Dm_MelodyGet_Forest_Item_Harp_Sheik/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Forest_Item_Harp_Sheik.root.as', 'IsWorld': True, 'Position': [-5.260000228881836, 114.41000366210938, -100.3499984741211], 'Rotation': [0.0, 90.0, 0.0]}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerSoundBeginForbidScreenDucking', 'EventTriggerSoundEndForbidScreenDucking', 'EventSoundStartSound', 'EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventSoundChangeListenerPreset']
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

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Voice]
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

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {

    call C00()


    call C00-05()


    fork {

        call C01-05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'DispTime': 7, 'IsWaitEnd': False, 'Text1': 'C01'})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text3': '', 'Text2': '', 'Text1': 'C02'})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text3': '', 'Text2': '', 'Text1': 'C03'})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text3': '', 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C04'})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C05'})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C06'})
    }


    call Learn_melody_C07-13()


    fork {

        call C14()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C14'})
    }


    call AllSage.MeetSheik_And_Gone()

}

void Learn_melody_C07-13() {
    Npc_Hylia_Sheik_Adult.EventTriggerSetOwnAsInstrumentPlayer()
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C07', 'Text3': '', 'Text2': ''})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})

        call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 6, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0009'})

    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.23999999463558197, 1.059999942779541, 2.1600000858306885], 'AtVector': [0.029999999329447746, 0.7699999809265137, -1.3700000047683716], 'TargetFovy': 35.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 240, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.25, 1.2799999713897705, 2.1600000858306885], 'AtVector': [0.03999999910593033, 0.9900000095367432, -1.3700000047683716], 'TargetFovy': 35.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsWaitEnd': True, 'ASName': 'C09_Sheik-A-1-St', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'C09_Sheik-A-2', 'ForceFadeInFrame': 20.0, 'IsAllSlot': True})
    } {
        Dm_Item_Sheik_Harp.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C09_Harp-A-1-St'})
        Dm_Item_Sheik_Harp.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C09_Harp-A-2'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C08-Ocarina-Loop', 'IsAllSlot': True, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'OffsetBase': 0, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 0, 'ActorName': '', 'WorldPos': [-2.869999885559082, 115.66000366210938, -100.16000366210938]})
    } {
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 1.100000023841858, 'EndBluarLevel': 1.100000023841858, 'IsEnableNear': False, 'StartDistance': 2.700000047683716, 'EndDistance': 2.700000047683716, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True, 'ASCommand': 'C08-Ocarina-Hold', 'ClothWarpMode': 0})

        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 6})

        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.019999999552965164, 1.399999976158142, 1.159999966621399], 'AtVector': [0.009999999776482582, 1.2599999904632568, 0.0], 'TargetFovy': 45.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C11-C14_Sheik_1F', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C08'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Forest_C08', 'CurrDemoPaletteName': 'Dm_MelodyGet_Forest_C08'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 31})

        call Dm_SY_Ocarina.LearningOcarinaPlayAutoForSeek()

    } {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorInstanceName': '', 'SceneName': 'C09-0', 'RootType': 1, 'TargetActorName': ''})
        } {
            Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C11-C14_Sheik', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
        } {
            Dm_Item_Sheik_Harp.EventPlayAS({'ASName': 'C11-C14_Harp', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'DispTime': 7, 'Text1': 'C09', 'Text2': '', 'Text3': '', 'Text4': ''})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'FieldEnvEffect'})
            Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Env', 'SLinkKey': ''})
            Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_KokiriInsect_02', 'SLinkKey': ''})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Forest_C09', 'CurrDemoPaletteName': 'Dm_MelodyGet_Forest_C09'})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteShadowRatio': False, 'BakeLightLuminanceRatio': 0.800000011920929})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': False, 'SceneName': 'C10-1', 'TargetActorInstanceName': '', 'RootType': 1, 'TargetActorName': ''})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C12-05', 'IsAllSlot': True, 'ClothWarpMode': 2})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 40.0, 'EndFNumber': 40.0, 'StartBluarLevel': 1.899999976158142, 'EndBluarLevel': 1.899999976158142, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'DispTime': 7, 'Text3': '', 'Text1': 'C10', 'Text2': ''})
        } {
            Npc_Hylia_Sheik_Adult.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_MelodyGet_Forest_KokiriInsect_02'})
            Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_KokiriInsect_02', 'SLinkKey': ''})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Forest_C10', 'CurrDemoPaletteName': 'Dm_MelodyGet_Forest_C10'})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 1.0, 'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteShadowRatio': True})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C13-0'})
        } {
            Dm_Animal_Kokiri_Insect_A[01].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C13A'})
        } {
            Dm_Animal_Kokiri_Insect_A[02].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C13B'})
        } {
            Dm_Animal_Kokiri_Insect_A[03].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C13C'})
        } {
            Dm_Animal_Kokiri_Insect_A[04].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C13D'})
        } {
            Dm_Animal_Kokiri_Insect_A[05].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C13E'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'DispTime': 7, 'Text4': '', 'Text1': 'C11', 'Text2': '', 'Text3': ''})
        } {
            EventSystemActor[2].EventWait({'Frames': 1, 'IsWaitEnd': True})
            Dm_Animal_Kokiri_Insect_A[01].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
            Dm_Animal_Kokiri_Insect_A[02].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
            Dm_Animal_Kokiri_Insect_A[03].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
            Dm_Animal_Kokiri_Insect_A[04].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
            Dm_Animal_Kokiri_Insect_A[05].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
        } {
            Npc_Hylia_Sheik_Adult.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_MelodyGet_Forest_KokiriInsect_02'})
            Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Forest_KokiriInsect_00'})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Forest_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Forest_C01'})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C14-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            Dm_Animal_Kokiri_Insect_A[01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Dm_Animal_Kokiri_Insect_A[02].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Dm_Animal_Kokiri_Insect_A[03].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Dm_Animal_Kokiri_Insect_A[04].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Dm_Animal_Kokiri_Insect_A[05].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Dm_Animal_Kokiri_Insect_A[06].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C14A'})
        } {
            Dm_Animal_Kokiri_Insect_A[07].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C14B'})
        } {
            Dm_Animal_Kokiri_Insect_A[08].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C14C'})
        } {
            Dm_Animal_Kokiri_Insect_A[09].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C14D'})
        } {
            Dm_Animal_Kokiri_Insect_A[10].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C14E'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.0, 'EndDistance': 2.0, 'IsAutoFocalDist': False, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 1.7000000476837158, 'EndBluarLevel': 1.7000000476837158, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False, 'IsEnableNearDepthBlur': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'DispTime': 3, 'Text1': 'C12', 'Text2': ''})
        } {
            EventSystemActor[2].EventWait({'Frames': 1, 'IsWaitEnd': True})
            Dm_Animal_Kokiri_Insect_A[06].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
            Dm_Animal_Kokiri_Insect_A[07].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
            Dm_Animal_Kokiri_Insect_A[08].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
            Dm_Animal_Kokiri_Insect_A[09].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
            Dm_Animal_Kokiri_Insect_A[10].EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Move', 'SLinkKey': ''})
        } {
            Npc_Hylia_Sheik_Adult.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Forest_KokiriInsect_00', 'IsKill': False})
            Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Forest_KokiriInsect_01'})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
        }

    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.029999999329447746, 1.399999976158142, 1.159999966621399], 'AtVector': [0.0, 1.2599999904632568, 0.0], 'TargetFovy': 45.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C15-05', 'IsAllSlot': True, 'ClothWarpMode': 3})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C09_Sheik-A-1_Ed_1F', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
    } {
        Dm_Animal_Kokiri_Insect_A[06].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[07].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[08].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[09].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[10].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C13'})
    } {
        Item_Ocarina_Time.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Shine', 'SLinkKey': ''})
    } {
        Item_Ocarina_Time_Holder.EventPlayAS({'ASName': 'Carry', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Forest_C08', 'CurrDemoPaletteName': 'Dm_MelodyGet_Forest_C08'})
    } {
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': -1.0})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_ForestMinuet'})

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 69})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C09_Sheik-A-1_Ed', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAllSlot': True})
    }

}

void C14() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3.930000066757202, 116.5, -106.1500015258789], 'AtVector': [-3.4600000381469727, 115.23999786376953, -100.5199966430664], 'TargetFovy': 20.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C16', 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
    } {
        Dm_Item_Sheik_Harp.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'OffsetBase': 0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 7.0, 'EndDistance': 7.0, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Sheik_Adult.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_MelodyGet_Forest_Env', 'SLinkKey': '', 'IsKill': False})
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'FieldEnvEffect'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Forest_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Forest_C01'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }

    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ASName': 'Sheik_WaitHalf', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0016'})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ASName': 'Sheik_WaitHalf', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0017'})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'Sheik_WaitHalf', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0018'})

        call C15()

    } else {
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'ASName': 'Sheik_WaitHalf', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0012'})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'Sheik_WaitHalf', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0014'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        call C15()

    }
}

void C02() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 3, 'WaitingResumeInGameBgm': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.2300000190734863, 1.25, 0.7300000190734863], 'AtVector': [-0.7099999785423279, 1.25, 0.5199999809265137], 'TargetFovy': 40.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C04', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventWarpToTargetPosAndRot({'YAngle': 90.0, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-10.628000259399414, 121.01000213623047, -100.3499984741211]})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'ASName': 'C04-01', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 1.5, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'EndDistance': 1.5, 'IsWaitEnd': True, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 1.5, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'EndDistance': 5.0, 'RequiredFrame': 30, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsWaitEnd': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Forest_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Forest_C01'})
    } {
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 117})

        fork {
            Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Forest_Land'})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        }

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'OffsetBase': 0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True})
    Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'Talk', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0003'})
    Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'IsWaitEnd': False, 'ASName': 'C05-01', 'ForceFadeInFrame': 30.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [-0.029999999329447746, 1.4900000095367432, 1.7899999618530273], 'AtVector': [0.07000000029802322, 1.2699999809265137, -1.559999942779541], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTurnAndLookNow({'Target': 3, 'InstanceName': '', 'ActorName': 'Npc_Hylia_Sheik_Adult', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ClothWarpMode': 2, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_MelodyGet_Sheik'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'C05-02', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0004', 'IsAnimeDriven': True})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 30.0, 'ASName': 'C05-03', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 100, 'IsWaitEnd': False, 'StartDistance': 1.4500000476837158, 'EndDistance': 1.7000000476837158, 'StartFNumber': 70.0, 'EndFNumber': 70.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 1.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 0.6000000238418579})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'SceneName': 'C06', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorInstanceName': '', 'TargetActorName': 'Player_Event', 'IsWaitEnd': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C06-01', 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsAllSlot': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Hylia_Sheik_Adult.EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': True, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ASName': 'C06-01', 'IsWaitEnd': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0005'})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C06-02', 'Partial': '', 'IsWaitEnd': True, 'ForceFadeInFrame': 30.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.6000000238418579, 0.0, -0.20000000298023224]})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Talk', 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_10m', 'FadeTime': 0.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }

    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.0})
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.30000001192092896, 0.46000000834465027, 2.2200000286102295], 'AtVector': [-0.27000001072883606, 1.809999942779541, -0.9800000190734863], 'TargetFovy': 19.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'InstanceName': '', 'ActorName': 'Npc_Hylia_Sheik_Adult', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C06-03', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C07-01', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'C07-01', 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0007', 'IsAnimeDriven': True})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_Sheik_Adult', 'OffsetBase': 0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartDistance': 9.0, 'EndDistance': 9.0, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }

    Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C07-02', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': 20.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'TargetFovy': 14.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-0.0430000014603138, 1.4299999475479126, 2.309999942779541], 'AtVector': [0.09200000017881393, 1.4900000095367432, -2.630000114440918], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C08-01', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
        Npc_Hylia_Sheik_Adult.EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'C08-02', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0008', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartFNumber': 20.0, 'EndFNumber': 20.0, 'StartDistance': 7.0, 'EndDistance': 7.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_MelodyGet_Sheik', 'IsUseSuspendFade': False})
    Npc_Hylia_Sheik_Adult.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C09_Sheik-A-0-St', 'ForceFadeInFrame': 30.0, 'IsAllSlot': True})
}

void C15() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor1ActorName': 'Npc_Hylia_Sheik_Adult', 'PosVector': [0.28999999165534973, 1.590000033378601, 2.5399999618530273], 'AtVector': [-0.25999999046325684, 1.2200000286102295, -1.6799999475479126], 'TargetFovy': 19.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': False, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'Sheik_WaitHalf', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0019'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'StartDistance': 2.700000047683716, 'EndDistance': 2.700000047683716, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C15'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }


    call Navi_Reaction()

}

void C16() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C18', 'RootType': 3, 'TargetActorName': 'Player_Event', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C18', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C18', 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundBeginForbidScreenDucking({'CommandLife': 2})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName': 'Dm:WorldSEミュート(白フェード （デクの実）)', 'DuckingName2': '', 'DuckingName3': ''})
        UISystemActor.EventEventFadeOut({'Color': 1, 'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:WorldSEミュート(白フェード （デクの実）)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C16'})
    } {
        Npc_Hylia_Sheik_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Forest_Flash', 'SLinkKey': ''})
    } {
        EventSystemActor[Voice].EventWait({'IsWaitEnd': True, 'Frames': 39})
        Npc_Hylia_Sheik_Adult.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_MelodyGet_Forest_0022_Sp_00'})
    } {
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': False, 'ShadowRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0})
    }

    Npc_Hylia_Sheik_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    call C17()

}

void C17() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-1.7699999809265137, 1.4199999570846558, -3.549999952316284], 'AtVector': [-0.44999998807907104, 0.9399999976158142, 0.10999999940395355], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C19', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 3})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': 1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'EvtTalk', 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Navi.EventNaviLookAtObject({'WorldPos': [-16.170000076293945, 114.4000015258789, -85.19000244140625], 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_Navi.EventNaviLookAtObject({'WorldPos': [-8.180000305175781, 115.38999938964844, -106.2699966430664], 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
        SoundSystemActor.EventTriggerSoundEndForbidScreenDucking()
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C17'})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 4.0, 'CameraResetPolicy': 0})
}

void Navi_Reaction() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 0}) {
      case [0, 1]:

        call C15-05()


        call C16()

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0023'})
        Event167:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_MeetSheikCount', 'Value': 1, 'Index': -1})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 1}) {
          case [0, 1]:

            call C15-05()


            call C16()

            Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0024'})
            goto Event167
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'AllSage_MeetSheikCount', 'Value': 2}) {
              case [0, 1]:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0025'})
                Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0026', 'ASName': 'Sheik_WaitHalf'})

                call C15-05()


                call C16()

                Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Forest:Dm_MelodyGet_Forest_0027'})
                goto Event167
              case 2:

                call C15-05()


                call C16()

            }
        }
    }
}

void C00() {

    fork {
        Npc_Hylia_Sheik_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Item_Sheik_Harp.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[02].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[03].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[04].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[05].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[06].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[07].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[08].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[09].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Animal_Kokiri_Insect_A[10].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
    } {
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-15.0, 128.0, -92.0]})
    }

}

void C15-05() {

    fork {
        Npc_Hylia_Sheik_Adult.EventPlayAS({'ASName': 'C17', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': 30.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 2.700000047683716, 'EndDistance': 2.700000047683716, 'RequiredFrame': 0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C00-05() {

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Dm_Locator', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'EventCamera', 'InstanceNameB': '', 'CheckDistance': 10.0}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'StartAccelerateRate': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [-2.5, 115.0, -101.5199966430664], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'PosVectorSetType': 1, 'AtVectorSetType': 0, 'MoveTotargetPosType': 0, 'Actor1ActorName': '', 'MoveTime': 150, 'LatShiftRange': 40.0, 'LongShiftRange': 40.0, 'PosVector': [-1.0, -0.10000000149011612, -1.0], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'StartAccelerateRate': 0.0, 'MoveTime': 90, 'IsIgnorePosVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [-2.5, 115.0, -101.5199966430664], 'PosVector': [-1.0, -0.10000000149011612, -1.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'LatShiftRange': 10.0, 'LongShiftRange': 10.0, 'PosVectorSetType': 1, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'IsEnableRevertFast': False})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': True, 'Target': 0, 'WorldPos': [-2.1500000953674316, 116.11000061035156, -101.5199966430664], 'ActorName': '', 'UseNormalTurn': False, 'IsDoNavi': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        Npc_Navi.EventTriggerNaviChangeWaitStateToDefault()
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'ASCommand': 'Attention_Enemy', 'DecSpeedDistance': 6.0, 'MinimumSpeed': 0.5, 'IncSpeedDistance': 1.0, 'MoveSpeed': 9.0, 'IsTurnLooking': True, 'IsLookAtObject': True, 'WorldPos': [-1.7999999523162842, 115.5999984741211, -101.19999694824219], 'LookAtWorldPos': [-2.1500000953674316, 115.5, -101.5199966430664], 'OverwriteRotNearDist': -1.0})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'EvtTalk', 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C00-05'})
    }


    fork {
        Player_Event.EventPlayerMove({'DecSpeedDistance': 4.0, 'MoveSpeed': 0.10000000149011612, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'WorldPos': [-2.5443499088287354, 114.84770202636719, -100.4094009399414], 'IsSheathed': False, 'IsInertiaMove': False, 'IsWaitEnd': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    }

}

void C01-05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'IsWaitEnd': False, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'Position': [-2.549999952316284, 114.4000015258789, -97.54252624511719], 'UseDemoWait': True, 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C03', 'IsWaitEnd': True, 'UseAnmDriven': True, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 282})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'DecSpeedDistance': 0.0, 'MoveSpeed': 1.5, 'IsLookAtObject': True, 'IsTurnLooking': True, 'LookAtTarget': 3, 'LookAtActorName': 'Player_Event', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'offset': [-0.5, 0.0, -0.18000000715255737], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'OffsetBase': 0, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 0, 'WorldPos': [-2.1500000953674316, 115.5, -101.5199966430664], 'ActorName': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.200000047683716, 'EndDistance': 2.200000047683716, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_MelodyGet_Forest_Navy_MV_01', 'IsIgnoreDucking': False})
    }

}
