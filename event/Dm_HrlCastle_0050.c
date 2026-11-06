-------- EventFlow: Dm_HrlCastle_0050 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0050/Dm_HrlCastle_0050_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0050_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_Zelda_Child
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTalkIgnoreSameTalkAS', 'EventLookAtObjectImmediate', 'EventPlayASWithClothWarp']
queries: ['EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0050/Dm_HrlCastle_0050_Npc_Hylia_WU_Zelda_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0050_Npc_Hylia_Zelda_Child.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0050_Npc_Navi.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0050/Dm_HrlCastle_0050_Npc_Navi/workspace.pp__ModelProject.gyml'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_Gerudo_Ganondorf
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventPlayAS', 'EventGoOffstageForUser', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'Position': [-5.164999961853027, 131.19400024414062, -266.04998779296875], 'Rotation': [0.0, 82.37622833251953, 0.0], 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0050/Dm_HrlCastle_0050_Npc_Gerudo_GEU_Ganondorf_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0050_Npc_Gerudo_GEU_Ganondorf_Child.root.as'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor[cut]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor', 'EventTriggerSendErrorToEventResource']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryTalkChoice2', 'EventQueryRandomChoice3', 'EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_ZeldaLetter
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0050/Dm_HrlCastle_0050_Item_ZeldaLetter/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0050_Item_ZeldaLetter.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_ImperialSoldier_002_Child[Soldier_R]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0050/Dm_HrlCastle_0050_Npc_Hylia_MS_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0050_Npc_Hylia_MS_001.root.as'}

Actor: Npc_Hylia_ImperialSoldier_003_Child[Soldier_L]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlCastle_0050/Dm_HrlCastle_0050_Npc_Hylia_MS_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlCastle_0050_Npc_Hylia_MS_001.root.as'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt']
queries: ['EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[ENV]
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[light_Offset]
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'IsWorld': True, 'Position': [5.090000152587891, 130.39999389648438, -273.3299865722656], 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {

    fork {

        call C01()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C03', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04'})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C05', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C06', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C07', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C08', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C09', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C10()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C10', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text3': '', 'Text2': ''})
    }


    fork {

        call C11()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C11', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C12()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C12', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C13()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C13', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text3': '', 'Text2': ''})
    }


    fork {

        call C14()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C14', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }


    fork {

        call C15()

    } {
        DevelopEventSystemActor[cut].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text3': '', 'Text2': '', 'Text1': 'C15'})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [5.239999771118164, 137.02999877929688, -242.3300018310547], 'AtVector': [5.110000133514404, 135.02000427246094, -252.44000244140625], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [5.088379859924316, 127.83000183105469, -254.42999267578125], 'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 180.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Hylia_Zelda_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'PosOffset': [0.0, -0.20000000298023224, 0.0]})
    } {
        Npc_Hylia_Zelda_Child.EventWarpToTargetPosAndRot({'Position': [5.088379859924316, 127.83000183105469, -256.0], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01_lp'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsWaitEnd': True, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'offset': [0.30000001192092896, 0.11999999731779099, 0.30000001192092896], 'IsUseAfterPlayerTurn': True})
    } {
        Dm_Npc_Gerudo_Ganondorf.EventTriggerParticipateEvent()
    } {
        Item_ZeldaLetter.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Hylia_ImperialSoldier_002_Child[Soldier_R].EventPlayAS({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Npc_Hylia_ImperialSoldier_003_Child[Soldier_L].EventPlayAS({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C01', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C01'})
    } {
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [5.547120094299316, 126.69999694824219, -249.0500030517578]})
    } {
        EventWorldManagerController[ENV].Event_SetEnvPaletteForFlowchart({'EnvPaletteName': 'Dm_HrlCastle_0030_lighting', 'ChangeSpeed': 5, 'IsWaitEnd': False, 'EnvTimeTableName': ''})
    }

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsFastLoad': True, 'IsWaitEnd': True})
    UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 1, 'IsWaitEnd': False})
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_HrlCastle_0050'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [5.239999771118164, 137.02999877929688, -242.3300018310547], 'AtVector': [5.110000133514404, 135.02000427246094, -252.44000244140625], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [5.099999904632568, 134.24000549316406, -242.13999938964844], 'AtVector': [5.090000152587891, 130.9600067138672, -251.4199981689453], 'TargetFovy': 50.0, 'MoveTime': 600, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 65})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0002', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-0'})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-1'})
    } {
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0005', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-st', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 1.059999942779541, 'EndDistance': 1.059999942779541, 'StartFNumber': 47.400001525878906, 'EndFNumber': 47.400001525878906, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.5, 'EndBluarLevel': 0.5})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C02', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C02'})
    }


    fork {
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0006', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02_lp', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0007', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C02-ed', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Npc_Hylia_Zelda_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C03-st', 'IsWaitEnd': False})
    } {
        Npc_Hylia_ImperialSoldier_002_Child[Soldier_R].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Hylia_ImperialSoldier_003_Child[Soldier_L].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C03-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
    } {
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0008', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'ASName': 'C03-st', 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventPlayAS({'ASName': 'C03-ed', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0009', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C03-lp', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0010', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C03-lp', 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0011', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C03-lp', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsWaitEnd': True, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'offset': [0.30000001192092896, 0.12999999523162842, 0.30000001192092896], 'IsUseAfterPlayerTurn': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 1.0299999713897705, 'EndDistance': 1.0299999713897705, 'StartFNumber': 59.29999923706055, 'EndFNumber': 59.29999923706055, 'StartBluarLevel': 2.1500000953674316, 'EndBluarLevel': 2.1500000953674316, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C03', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C03', 'IsWaitEnd': True, 'Frames': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'PosVector': [2.5299999713897705, 128.6999969482422, -255.1300048828125], 'AtVector': [4.960000038146973, 128.57000732421875, -255.22000122070312], 'TargetFovy': 36.27000045776367, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            Npc_Hylia_Zelda_Child.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C04-1-ed', 'IsAllSlot': False})
            Npc_Hylia_Zelda_Child.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01_lp', 'IsAllSlot': False})
        } {
            Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0021', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'ASName': 'C05-2', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 1.1299999952316284, 'EndDistance': 1.1299999952316284, 'StartFNumber': 69.0, 'EndFNumber': 69.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.5, 'EndBluarLevel': 0.5})
    } {
        Npc_Hylia_ImperialSoldier_002_Child[Soldier_R].EventDoNothing({'IsWaitEnd': False})
    } {
        Npc_Hylia_ImperialSoldier_003_Child[Soldier_L].EventDoNothing({'IsWaitEnd': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C05', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C05', 'IsWaitEnd': True, 'Frames': 0})
    }

    Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0022', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
    Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0023', 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C05-st', 'EndDialogOption': 3, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'PosVector': [2.5299999713897705, 128.6999969482422, -255.1300048828125], 'AtVector': [4.960000038146973, 128.57000732421875, -255.22000122070312], 'TargetFovy': 36.27000045776367, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [2.6600000858306885, 128.64999389648438, -254.97000122070312], 'AtVector': [5.0, 128.55999755859375, -255.47999572753906], 'TargetFovy': 36.27000045776367, 'MoveTime': 600, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'C05-1-st', 'ForceFadeFrame': 40.0, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C05-1'})
        }

    } {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C05-1-st', 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0050', 'IsAnimeDriven': True, 'IsNotBecomeSpeaker': True, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'EndDialogOption': 3, 'IsCloseDialog': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 1.1299999952316284, 'EndDistance': 1.1299999952316284, 'StartFNumber': 69.0, 'IsEnableNear': True, 'RequiredFrame': 600, 'EndFNumber': 72.4000015258789, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.5, 'EndBluarLevel': 0.5})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'C05-1-lp', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0024', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'C05-1-lp', 'EndDialogOption': 3, 'IsAnimeDriven': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        Dm_Npc_Gerudo_Ganondorf.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'Position': [4.989999771118164, 127.5199966430664, -266.30999755859375], 'ClothWarpMode': -1})
        Dm_Npc_Gerudo_Ganondorf.EventPlayAS({'ASName': 'C06', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [5.420000076293945, 128.77000427246094, -254.97000122070312], 'AtVector': [5.389999866485596, 128.72999572753906, -256.45001220703125], 'TargetFovy': 32.040000915527344, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 600, 'IsWaitEnd': False, 'PosVector': [5.409999847412109, 128.75999450683594, -255.16000366210938], 'AtVector': [5.389999866485596, 128.72999572753906, -256.45001220703125], 'TargetFovy': 32.040000915527344, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        fork {
            Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0025', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C05-1-lp', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C05-2-st', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        }

        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0026', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'C05-1-lp', 'MaintainPerformanceState': 0})
    } {
        Dm_Npc_Gerudo_Ganondorf.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 1.1299999952316284, 'IsEnableNear': True, 'StartFNumber': 72.4000015258789, 'EndDistance': 0.8899999856948853, 'EndFNumber': 116.80000305175781, 'RequiredFrame': 600, 'IsWaitEnd': False, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[light_Offset].EventDoNothing({'IsWaitEnd': False})
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'light_Offset', 'PositionOffset': [-3.0, 0.0, 0.0], 'LightHash': 'light1', 'LightType': 0, 'OffsetBase': 0, 'Direction': [0.0, -1.0, 0.0], 'InnerAngle': 15.0, 'OuterAngle': 45.0})
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'light_Offset', 'LightHash': 'light2', 'PositionOffset': [3.0, 0.0, 0.0], 'LightType': 0, 'OffsetBase': 0, 'Direction': [0.0, -1.0, 0.0], 'InnerAngle': 15.0, 'OuterAngle': 45.0})
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'light_Offset', 'LightType': 0, 'OffsetBase': 0, 'Direction': [0.0, -1.0, 0.0], 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightHash': 'light3', 'PositionOffset': [9.0, 0.0, 0.0]})
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'light_Offset', 'LightType': 0, 'OffsetBase': 0, 'Direction': [0.0, -1.0, 0.0], 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightHash': 'light4', 'PositionOffset': [-9.0, 0.0, 0.0]})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'light1', 'LocationalLightCreateType': 0, 'EditColor': True, 'EditSourceRadius': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'EditIntensity': True, 'Color': [2.0, 0.800000011920929, 0.30000001192092896], 'Intensity': 25000.0})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'light2', 'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'Color': [2.0, 0.800000011920929, 0.30000001192092896], 'Intensity': 35000.0})
        PostProcessingActor.EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'LightHash': 'light3', 'Color': [2.0, 0.800000011920929, 0.30000001192092896], 'Intensity': 50000.0})
        PostProcessingActor.EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'LightHash': 'light4', 'Color': [2.0, 0.800000011920929, 0.30000001192092896], 'Intensity': 20000.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C07() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C07-0'})
    } {

        fork {
            Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0027', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
        } {
            Dm_Npc_Gerudo_Ganondorf.EventPlayASWithClothWarp({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C06-B', 'ForceFadeInFrame': 0.0, 'ClothWarpMode': 2})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
            Dm_Npc_Gerudo_Ganondorf.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C07'})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 4.28000020980835, 'EndDistance': 4.28000020980835, 'StartFNumber': 21.559999465942383, 'EndFNumber': 21.559999465942383, 'IsEnableNear': True, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C07', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C07'})
    }

    Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0028', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
}

void C08() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C08-0'})
    } {
        Npc_Hylia_Zelda_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C09-1-lp'})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'YAngle': 180.0, 'IsWaitEnd': False, 'Position': [4.789999961853027, 129.24000549316406, -254.60000610351562]})
    } {
        Dm_Npc_Gerudo_Ganondorf.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C08'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 0.6549999713897705, 'EndDistance': 0.6549999713897705, 'StartFNumber': 301.6000061035156, 'EndFNumber': 301.6000061035156, 'StartBluarLevel': 3.4200000762939453, 'EndBluarLevel': 3.4200000762939453, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C08', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C08'})
    } {
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'light1', 'LocationalLightCreateType': 0, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'EditIntensity': True, 'Color': [2.0, 0.800000011920929, 0.30000001192092896], 'Intensity': 0.0, 'EditColor': False, 'EditSourceRadius': False})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'light2', 'LocationalLightCreateType': 0, 'EditIntensity': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'Color': [2.0, 0.800000011920929, 0.30000001192092896], 'Intensity': 0.0, 'EditColor': False, 'EditSourceRadius': False})
        PostProcessingActor.EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditIntensity': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'LightHash': 'light3', 'Color': [2.0, 0.800000011920929, 0.30000001192092896], 'EditSourceRadius': False, 'EditColor': False, 'Intensity': 0.0})
        PostProcessingActor.EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditIntensity': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'LightHash': 'light4', 'Color': [2.0, 0.800000011920929, 0.30000001192092896], 'Intensity': 0.0, 'EditColor': False, 'EditSourceRadius': False})
    }

}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [6.440000057220459, 132.5399932861328, -252.44000244140625], 'AtVector': [5.369999885559082, 129.02999877929688, -255.36000061035156], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_HrlCastle_0050_0046'})
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C09-0-st', 'IsWaitEnd': False, 'UseAnmDriven': True, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        } {
            Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C09-1'})
        } {
            Dm_Npc_Gerudo_Ganondorf.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 1.2699999809265137, 'EndDistance': 1.2699999809265137, 'StartFNumber': 36.900001525878906, 'EndFNumber': 36.900001525878906, 'StartBluarLevel': 2.0199999809265137, 'EndBluarLevel': 2.0199999809265137, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C01', 'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C01'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0046', 'ASName': 'C09-0-st', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C09-1-st', 'IsWaitEnd': False, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0047', 'ASName': 'C09-1-st', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C09-0'})
    }

    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0048', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0, 'ASName': 'C09-1-lp'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': False, 'YAngle': 0.0, 'Position': [4.714119911193848, 127.92500305175781, -253.06199645996094], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C10', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Child.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [5.547120094299316, 127.82499694824219, -253.06199645996094], 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C10-0-lp', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [4.261569976806641, 128.60980224609375, -253.1999969482422], 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C10-0'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C10() {
    Npc_Hylia_Zelda_Child.EventLookAtObjectImmediate({'ActorName': 'Dm_Locator', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [5.340000152587891, 0.5299999713897705, 11.600000381469727], 'AtVector': [2.890000104904175, 0.6899999976158142, 6.630000114440918], 'TargetFovy': 23.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 600, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [5.380000114440918, 0.46000000834465027, 11.680000305175781], 'AtVector': [2.890000104904175, 0.6200000047683716, 6.630000114440918], 'TargetFovy': 23.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0029', 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': True, 'EndDialogOption': 3, 'ASName': 'C10-0-lp', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } {
            UISystemActor.EventEventFadeIn({'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 18.040000915527344, 'EndDistance': 18.040000915527344, 'StartFNumber': 8.899999618530273, 'EndFNumber': 8.899999618530273, 'StartBluarLevel': 3.5, 'EndBluarLevel': 2.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C10', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C10'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C11() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [0.47999998927116394, 0.28999999165534973, 1.340000033378601], 'AtVector': [0.1599999964237213, 0.38999998569488525, 0.4699999988079071], 'TargetFovy': 23.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 1000, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [0.41999998688697815, 0.3199999928474426, 1.1699999570846558], 'AtVector': [0.1599999964237213, 0.4099999964237213, 0.4699999988079071], 'TargetFovy': 23.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0030', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C10-0-lp', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0031', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C10-0-lp', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0032', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C11-0-st', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 1.1200000047683716, 'EndDistance': 1.1200000047683716, 'StartBluarLevel': 2.2300000190734863, 'EndBluarLevel': 2.2300000190734863, 'IsEnableNear': True, 'EndFNumber': 80.0, 'StartFNumber': 92.5999984741211, 'RequiredFrame': 1000, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C11', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C11', 'IsWaitEnd': True, 'Frames': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C12() {

    fork {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-0.4099999964237213, 0.25, 5.690000057220459], 'AtVector': [-0.41999998688697815, 0.28999999165534973, 2.6700000762939453], 'TargetFovy': 23.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C12-1-st', 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
        } {
            Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0033', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C12-0-st', 'MaintainPerformanceState': 0})
        }

        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0034', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9, 'IsAnimeDriven': False, 'ASName': 'C12-0-lp', 'ChoiceCancelNo': 1, 'ChoiceNumber': 1, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0, 'ASCommand': 'C12-5-st'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})

            fork {
                Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0035', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'NotPlayLipSyncAnim': False, 'ASName': 'C12-0', 'MaintainPerformanceState': 0})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

                fork {
                    Npc_Hylia_Zelda_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C12-1-st', 'IsAnimeDriven': False})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'C12-3-st', 'IsAllSlot': True, 'ClothWarpMode': 0})
                }

            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

            fork {
                Npc_Hylia_Zelda_Child.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
                Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0037', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C12-2-st', 'MaintainPerformanceState': 0})
                Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0038', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C12-3-st', 'MaintainPerformanceState': 0})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'C12-4-st', 'IsAllSlot': True, 'ClothWarpMode': 0})
            }

        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartFNumber': 56.79999923706055, 'EndFNumber': 56.79999923706055, 'StartBluarLevel': 1.149999976158142, 'EndBluarLevel': 1.149999976158142, 'IsEnableNear': True, 'StartDistance': 2.930000066757202, 'EndDistance': 2.930000066757202, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C12', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C12', 'IsWaitEnd': True, 'Frames': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}

void C13() {

    fork {
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0039', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C12-4-st', 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0040', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C12-4-lp', 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0041', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C12-4-lp', 'MaintainPerformanceState': 0})
        Npc_Hylia_Zelda_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0042', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C13-0-st', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-1.409999966621399, 0.3700000047683716, 0.5400000214576721], 'AtVector': [-0.6399999856948853, 0.44999998807907104, 0.1599999964237213], 'TargetFovy': 22.139999389648438, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 600, 'IsWaitEnd': False, 'Actor1ActorName': 'Npc_Hylia_Zelda_Child', 'PosVector': [-1.309999942779541, 0.3799999952316284, 0.49000000953674316], 'AtVector': [-0.6399999856948853, 0.44999998807907104, 0.1599999964237213], 'TargetFovy': 22.139999389648438, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C10-0'})
    } {
        Item_ZeldaLetter.EventTriggerParticipateEvent()
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 1.3200000524520874, 'EndDistance': 1.3200000524520874, 'StartBluarLevel': 2.130000114440918, 'EndBluarLevel': 2.130000114440918, 'IsEnableNear': True, 'StartFNumber': 77.0, 'EndFNumber': 77.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 1.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_HrlCastle_0050_C13', 'CurrDemoPaletteName': 'Dm_HrlCastle_0050_C13'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C14() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [5.150000095367432, 128.25999450683594, -252.35000610351562], 'AtVector': [5.150000095367432, 128.22000122070312, -252.42999267578125], 'TargetFovy': 23.399999618530273, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [5.150000095367432, 128.25999450683594, -252.35000610351562], 'AtVector': [5.150000095367432, 128.22000122070312, -252.42999267578125], 'TargetFovy': 23.399999618530273, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 300, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'C14-st', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 2})
    } {
        Npc_Hylia_Zelda_Child.EventPlayASWithClothWarp({'IsAnimeDriven': False, 'ASName': 'C14-0-st', 'IsAllSlot': True, 'Partial': '', 'IsWaitEnd': False, 'ClothWarpMode': 3, 'ForceFadeInFrame': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Zelda_Child.EventTalkIgnoreSameTalkAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0044', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'ASName': 'C14-0-st', 'MaintainPerformanceState': 0})
    } {
        Item_ZeldaLetter.EventPlayAS({'ASName': 'C14-0-st', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsEnableNear': True, 'StartDistance': 0.5249999761581421, 'EndDistance': 0.5249999761581421, 'StartFNumber': 372.6000061035156, 'EndFNumber': 372.6000061035156, 'StartBluarLevel': 1.7000000476837158, 'EndBluarLevel': 1.7000000476837158, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_HrlCastle_0050'})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2.950000047683716, 128.9499969482422, -253.11000061035156], 'AtVector': [4.389999866485596, 128.61000061035156, -254.4499969482422], 'TargetFovy': 38.790000915527344, 'IsWaitEnd': True, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartDistance': 1.1299999952316284, 'EndDistance': 1.1299999952316284, 'StartFNumber': 63.400001525878906, 'EndFNumber': 63.400001525878906, 'StartBluarLevel': 1.5199999809265137, 'EndBluarLevel': 1.5199999809265137, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0012', 'ChoiceNumber': 3, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 5, 'ASName': 'C04-0-st', 'MaintainPerformanceState': 0})
        Event15:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0013', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'ChoiceNumber': 4, 'ASName': 'C04-0-ed', 'MaintainPerformanceState': 0})
            Event17:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call EntryPoint1({'MessageId01': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0056', 'MessageId02': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0057', 'MessageId03': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0058'})

                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0043', 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
                Event374:

                call EntryPoint2({'ThatsallTalk_GameDateName': 'Hylia_Zelda_ThatsallTalk_Int'})

                switch Npc_Hylia_Zelda_Child.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0019', 'ChoiceNumber': 4, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
                    goto Event17
                  case 1:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'ChoiceNumber': 4, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0051'})
                    goto Event17
                  case 2:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'ChoiceNumber': 4, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0052'})
                    goto Event17
                }
              case 1:

                call EntryPoint1({'MessageId01': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0059', 'MessageId02': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0060', 'MessageId03': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0061'})

                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0015', 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
                goto Event374
              case 2:

                call EntryPoint1({'MessageId01': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0062', 'MessageId02': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0063', 'MessageId03': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0064'})

                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0016', 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
                goto Event374
              case 3:
                Event321:
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 8, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0049', 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 5, 'ChoiceNumber': 3, 'ASName': 'C04-0-st', 'MaintainPerformanceState': 0})
                    goto Event15
                  case 1:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 8, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 5, 'ChoiceNumber': 3, 'ASName': 'C04-0-st', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0053'})
                    goto Event15
                  case 2:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 8, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 5, 'ChoiceNumber': 3, 'ASName': 'C04-0-st', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0054'})
                    goto Event15
                }
            }
          case 1:
            Npc_Hylia_Zelda_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 8, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0014', 'ChoiceLabel2': 4, 'ChoiceLabel3': 8, 'ChoiceLabel1': 3, 'ASName': 'C04-0-ed', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
            Event53:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call EntryPoint1({'MessageId01': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0065', 'MessageId02': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0066', 'MessageId03': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0067'})

                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0017', 'ChoiceNumber': 0, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
                Event329:

                call EntryPoint2({'ThatsallTalk_GameDateName': 'Hylia_Zelda_ThatsallTalk_Int'})

                switch Npc_Hylia_Zelda_Child.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0019', 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 8, 'ChoiceLabel4': 0, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
                    goto Event53
                  case 1:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 8, 'ChoiceLabel4': 0, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0051'})
                    goto Event53
                  case 2:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 8, 'ChoiceLabel4': 0, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0052'})
                    goto Event53
                }
              case 1:

                call EntryPoint1({'MessageId01': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0068', 'MessageId02': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0069', 'MessageId03': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0070'})

                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0018', 'ChoiceNumber': 0, 'ASName': 'C01_lp', 'MaintainPerformanceState': 0})
                goto Event329
              case 2:
                goto Event321
            }
          case 2:
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': False, 'ClothWarpMode': 0, 'ASCommand': 'C04'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0020', 'ChoiceNumber': 0, 'ASName': 'C04-1-st', 'MaintainPerformanceState': 0})
        }
    }

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
}

void C15() {

    fork {
        Npc_Hylia_Zelda_Child.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'C15-0-st', 'IsAllSlot': True})
    } {

        call Dm_SY_GetInEvent.GetInEvent_Zeldaletter({'ActorName': 'Item_ZeldaLetter'})

    }

}

void EntryPoint1() {
    switch GameSystemActor.EventQueryRandomChoice4() {
      case 0:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'C01_lp', 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0055'})
      case 1:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'C01_lp', 'MessageId': 'MessageId01'})
      case 2:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'C01_lp', 'MessageId': 'MessageId02'})
      case 3:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'C01_lp', 'MessageId': 'MessageId03'})
    }
}

void EntryPoint2() {
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'ThatsallTalk_GameDateName'}) {
      case 0:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'C01_lp', 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0071'})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'ThatsallTalk_GameDateName'})
      case 1:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'C01_lp', 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0073'})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'ThatsallTalk_GameDateName', 'Value': 2})
      case 2:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'C01_lp', 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0072'})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'ThatsallTalk_GameDateName', 'Value': 3})
      case 3:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'C01_lp', 'MessageId': 'EventFlowMsg/Dm_HrlCastle_0050:Dm_HrlCastle_0050_0073'})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'ThatsallTalk_GameDateName', 'Value': 0})
      case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ゼルダ伝承話 終了時の指定値がおかしい'})
    }
}
