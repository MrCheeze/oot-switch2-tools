-------- EventFlow: Dm_HrlCastle_0035 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0035_Player_Child.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0035/Dm_HrlCastle_0035_Player_Child/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_Zelda_Child
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0035/Dm_HrlCastle_0035_Npc_Hylia_WU_Zelda_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0035_Zelda_Child.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_ImperialSoldier_002_Child[Soldier_R]
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_ImperialSoldier_003_Child[Soldier_L]
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameSystemActor[Wind]
entrypoint: None()
actions: ['EventClothRequestExtraWind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[1]
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 0, 'WaitingResumeInGameBgm': False})

    call Dm_HrlCastle_0035_other()


    fork {

        call Dm_HrlCastle_0035_C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call Dm_HrlCastle_0035_C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call Dm_HrlCastle_0035_C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call Dm_HrlCastle_0035_C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C04', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call Dm_HrlCastle_0035_C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C05', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call Dm_HrlCastle_0035_C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C06', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }

}

void Dm_HrlCastle_0035_other() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': True, 'Length': 0})

    fork {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -180.0, 'Position': [5.579999923706055, 128.75, -254.0], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [-0.3499999940395355, 0.10000000149011612, 0.0]})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -179.95269775390625, 'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [5.01200008392334, 127.82499694824219, -254.43099975585938], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWaitQuarter', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Zelda_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        Npc_Hylia_Zelda_Child.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [5.03000020980835, 127.82499694824219, -256.0], 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Child.EventPlayAS({'ASName': 'Demo_WaitA', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_Hylia_Zelda_Child.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'WorldPos': [0.0, 0.30000001192092896, 0.0]})
    } {
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'RateStart': 0.0, 'RateEnd': 1.0, 'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_HrlCastle_0035_C01', 'CurrDemoPaletteName': 'Dm_HrlCastle_0035_C01', 'RateFrame': 0.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartFNumber': 50.0, 'StartDistance': 4.050000190734863, 'EndFNumber': 50.0, 'EndDistance': 5.130000114440918, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController[1].Event_SetEnvPaletteForFlowchart({'EnvPaletteName': 'Dm_HrlCastle_0030_lighting', 'ChangeSpeed': 5, 'IsWaitEnd': False, 'EnvTimeTableName': ''})
    } {
        Npc_Hylia_ImperialSoldier_002_Child[Soldier_R].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Hylia_ImperialSoldier_003_Child[Soldier_L].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void Dm_HrlCastle_0035_C01() {

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0000', 'MaintainPerformanceState': 0, 'ASName': 'C01-1'})
        Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Hylia_Zelda_Child.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0001', 'MaintainPerformanceState': 0, 'ASName': 'C01'})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0002', 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 1, 'MaintainPerformanceState': 0, 'ASName': 'C01'})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-1.6799999475479126, 0.5199999809265137, 5.179999828338623], 'AtVector': [-0.2800000011920929, 0.5600000023841858, 2.190000057220459], 'TargetFovy': 20.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'StartAccelerateRate': 0.0, 'MoveTime': 360, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-1.9199999570846558, 0.5199999809265137, 5.090000152587891], 'AtVector': [-0.5299999713897705, 0.5600000023841858, 2.109999895095825], 'TargetFovy': 20.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        GameSystemActor[Wind].EventClothRequestExtraWind({'ActorName': 'Npc_Hylia_Zelda_Child', 'Azimuth': 270.0, 'InstanceName': '', 'Elevation': 0.0, 'IsWaitEnd': False, 'Speed': 2.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartFNumber': 50.0, 'StartDistance': 4.050000190734863, 'EndFNumber': 50.0, 'EndDistance': 5.130000114440918, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': False, 'Length': 1})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_HrlCastle_0030', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0003', 'ASName': 'C02-1', 'IsAnimeDriven': True, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Npc_Hylia_Zelda_Child.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': True, 'ASName': 'C02-2', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        } {
            Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
            Npc_Hylia_Zelda_Child.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2})
        }

        Npc_Hylia_Zelda_Child.EventPlayAS({'IsAnimeDriven': True, 'ASName': 'Demo_WaitA', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } else {

        fork {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtTarget': 2, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsNearOffset': False, 'offset': [-0.20000000298023224, 0.0, 0.0], 'IsLookAtObject': True, 'IsTurnLooking': False, 'IncSpeedDistance': 0.05000000074505806, 'DecSpeedDistance': 0.05000000074505806, 'MoveSpeed': 0.5, 'MinimumSpeed': 0.5, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0015', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MaintainPerformanceState': 0})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'IsTurnX': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Hylia_Zelda_Child', 'WorldPos': [0.0, 0.0, 0.0]})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0016', 'MaintainPerformanceState': 0})
        } {
            Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Npc_Hylia_Zelda_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Navi', 'PosOffset': [-0.20000000298023224, 0.0, 0.0]})
        } {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-1.7999999523162842, 0.6000000238418579, 5.110000133514404], 'AtVector': [-0.4099999964237213, 0.6399999856948853, 2.130000114440918], 'TargetFovy': 20.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveTime': 60, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'StartBluarLevel': 2.3399999141693115, 'EndBluarLevel': 2.3399999141693115, 'RequiredFrame': 0, 'StartDistance': 4.460000038146973, 'EndDistance': 4.460000038146973, 'StartFNumber': 110.80000305175781, 'EndFNumber': 110.80000305175781, 'IsEnableNear': True, 'IsAutoFocalDist': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }


        fork {
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        } {
            Npc_Hylia_Zelda_Child.EventTriggerRequestLookAtTheFront()
        }

        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }
}

void Dm_HrlCastle_0035_C02() {

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0004', 'MaintainPerformanceState': 0, 'ASName': 'C01'})

        fork {
            Npc_Hylia_Zelda_Child.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'C02-3_St', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0005', 'MaintainPerformanceState': 0, 'ASName': 'C02-3'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
            Npc_Hylia_Zelda_Child.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'Direction': 10.0, 'PosOffset': [0.0, -0.800000011920929, 0.5]})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-0.7699999809265137, 0.5, 1.8200000524520874], 'AtVector': [0.3799999952316284, 0.9200000166893005, -0.6499999761581421], 'TargetFovy': 24.93000030517578, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 1.3799999952316284, 'EndDistance': 1.3799999952316284, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartFNumber': 73.0, 'EndFNumber': 73.0, 'StartBluarLevel': 1.899999976158142, 'EndBluarLevel': 1.899999976158142, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'offset': [-0.3499999940395355, 0.20000000298023224, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Zelda_Child', 'InstanceName': '', 'Direction': 0.0, 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, -0.10000000149011612, 0.0]})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'IsTurnX': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Hylia_Zelda_Child', 'WorldPos': [0.0, 0.0, 0.0]})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [-0.3499999940395355, 0.10000000149011612, 0.0]})
    }

}

void Dm_HrlCastle_0035_C03() {

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0006', 'MaintainPerformanceState': 0, 'ASName': 'C02-3'})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0007', 'MaintainPerformanceState': 0, 'ASName': 'C02-3'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.6100000143051147, 0.7900000214576721, 1.7599999904632568], 'AtVector': [-1.2000000476837158, 0.5600000023841858, -2.809999942779541], 'TargetFovy': 32.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 300, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.5600000023841858, 0.7799999713897705, 1.6299999952316284], 'AtVector': [-1.2000000476837158, 0.5600000023841858, -2.809999942779541], 'TargetFovy': 32.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartDistance': 1.3799999952316284, 'EndDistance': 1.3799999952316284, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartBluarLevel': 1.899999976158142, 'EndBluarLevel': 1.899999976158142, 'EndFNumber': 41.599998474121094, 'StartFNumber': 41.599998474121094, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void Dm_HrlCastle_0035_C04() {

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0008', 'MaintainPerformanceState': 0, 'ASName': 'C02-4'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_Hylia_Zelda_Child.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        }

        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0009', 'ASName': 'C04-1', 'MaintainPerformanceState': 0})

        fork {
            Npc_Hylia_Zelda_Child.EventPlayAS({'ASName': 'C04-2', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
            Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        }

        Npc_Hylia_Zelda_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Demo_WaitA', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0010', 'ASName': 'Demo_WaitA', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-0.05000000074505806, 0.5400000214576721, 1.440000057220459], 'AtVector': [-0.009999999776482582, 0.800000011920929, 0.3100000023841858], 'TargetFovy': 28.6200008392334, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'StartDistance': 1.100000023841858, 'EndDistance': 1.100000023841858, 'IsEnableNear': True, 'StartFNumber': 68.5, 'EndFNumber': 68.5, 'StartBluarLevel': 1.899999976158142, 'EndBluarLevel': 1.899999976158142, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void Dm_HrlCastle_0035_C05() {

    fork {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0011', 'ASName': 'Demo_WaitA', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-0.4699999988079071, 0.9599999785423279, 2.009999990463257], 'AtVector': [0.7099999785423279, 0.6600000262260437, -0.36000001430511475], 'TargetFovy': 33.970001220703125, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'StartDistance': 4.849999904632568, 'EndDistance': 4.849999904632568, 'StartFNumber': 55.5, 'EndFNumber': 55.5, 'StartBluarLevel': 2.430000066757202, 'EndBluarLevel': 2.430000066757202, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 1.0})
    }


    fork {
        Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_Hylia_Zelda_Child.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'PosOffset': [0.0, 0.30000001192092896, 0.0]})
        Npc_Hylia_Zelda_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0012', 'IsWaitEnd': True, 'IsAnimeDriven': True, 'ASName': 'C05-1', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C05-1', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C05-2', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
    }

}

void Dm_HrlCastle_0035_C06() {

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0035:Dm_HrlCastle_0035_0013', 'EndDialogOption': 3, 'IsCloseDialog': False, 'ASName': 'C06', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2.7699999809265137, 134.2899932861328, -251.77999877929688], 'AtVector': [2.809999942779541, 134.33999633789062, -251.8699951171875], 'TargetFovy': 57.5099983215332, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2.7699999809265137, 134.2899932861328, -251.77999877929688], 'AtVector': [2.809999942779541, 134.33999633789062, -251.8699951171875], 'TargetFovy': 57.5099983215332, 'MoveTime': 30, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [2.7200000286102295, 134.22000122070312, -251.6699981689453], 'AtVector': [2.990000009536743, 134.5, -251.66000366210938], 'TargetFovy': 57.5099983215332, 'MoveTime': 360, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    } {
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_HrlCastle_0030', 'IsUseSuspendFade': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

}
