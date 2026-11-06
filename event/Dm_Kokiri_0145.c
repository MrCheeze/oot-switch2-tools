-------- EventFlow: Dm_Kokiri_0145 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0145/Dm_Kokiri_0145/workspace.pp__ModelProject.gyml'}

Actor: Npc_Kokiri_Mido_Child
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventGoOffstageForUser', 'EventLookAtObjectImmediate', 'EventTriggerKokiriSleepFairy', 'EventTriggerChangeEmotion', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0145/Dm_Kokiri_0145_Npc_Kokiri_MC_Mido/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0145_Mido.root.as', 'IsGrounding': True}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerMove', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0145_Player_Child.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0145/Dm_Kokiri_0145_Player_Child/workspace.pp__ModelProject.gyml', 'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventTalk', 'EventPlayAS', 'EventNaviFollowPlayer', 'EventNaviLookAtObject', 'EventWarpToTargetActor', 'EventNaviMoveAtPos', 'EventNaviWarpToPlayerHomePosition', 'EventWarpToTargetPosAndRot', 'EventTriggerChangeEmotion']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0145/Dm_Kokiri_0145_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0145_Navi.root.as', 'EventMemberCreateMethod': 2, 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only]
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventTalk', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventWarpToTargetPosAndRot', 'EventLookAtObjectImmediate', 'EventPlayASWithClothWarp', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'IsBindNearestActor': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 2, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0145/Dm_Kokiri_0145_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0145_Saria.root.as', 'IsGrounding': True}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Position]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Fairy_Saria
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_Fairy
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerSetFairyColor', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0145/Dm_Kokiri_0145_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0145_Navi.root.as', 'EventMemberCreateMethod': 1}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_012_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_011_Child_NoThroughGround
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_005_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundStopBGM', 'EventSoundRequestDucking', 'EventTriggerSoundBeginForbidScreenDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[1]
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[2]
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetFoliageShadowParamForFlowchart', 'Event_ResetFoliageShadowParamForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_Saria_Child
entrypoint: None()
actions: ['EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

void EntryPoint0() {

    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'Text1': 'C01', 'IsWaitEnd': False})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C02'})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'Text1': 'C03', 'Text5': '', 'Text2': '', 'IsWaitEnd': False})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C04'})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C05'})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C06'})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C07'})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C08'})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C09'})
    }


    fork {

        call C10()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C10'})
    }


    fork {

        call C11()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C11'})
    }


    fork {

        call C12()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C12'})
    }


    fork {

        call C13()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C13'})
    }


    fork {

        call C14()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C14'})
    }


    fork {

        call C15()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 5, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C15'})
    }

}

void Ready() {

    fork {
        Dm_Locator[Position].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': False, 'Position': [22.350000381469727, 111.41999816894531, 0.47999998927116394], 'ClothWarpMode': -1})
    } {
        Npc_Kokiri_Mido_Child.EventTriggerKokiriSleepFairy()
        Npc_Kokiri_Mido_Child.EventTriggerSetModelLodManual({'LodLevel': 2})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'PrevDemoPaletteName': 'Dm_Kokiri_0145_C01', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C01', 'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0})
    } {
        Npc_Kokiri_012_Child.EventTriggerParticipateEvent()
    } {
        Npc_Kokiri_011_Child_NoThroughGround.EventTriggerParticipateEvent()
    } {
        Npc_Kokiri_005_Child.EventTriggerParticipateEvent()
    } {
        EventWorldManagerController[2].Event_SetEnvPaletteForFlowchart({'ChangeSpeed': 5, 'IsWaitEnd': False, 'EnvTimeTableName': '', 'EnvPaletteName': 'Dm_Kokiri_0145'})
    }


    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.6699999570846558, 0.7699999809265137, -1.2200000286102295], 'AtVector': [-1.159999966621399, 0.5699999928474426, 0.029999999329447746], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventLookAtObjectImmediate({'InstanceName': '', 'OffsetBase': 0, 'IsWaitEnd': True, 'ResetArriveTransformFixed': False, 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'WorldPos': [22.47640037536621, 112.2791976928711, 0.3481700122356415], 'Target': 0, 'ActorName': ''})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Kokiri_Saria_Child.EventTriggerSetModelLodManual({'LodLevel': 1})
    } {
        Npc_Fairy_Saria.EventWarpToTargetActor({'OffsetBase': 0, 'TargetActorKind': 1, 'ActorName': 'Npc_Kokiri_Saria_Child', 'InstanceName': 'Dm_Kokiri_0145_Only', 'YAngle': 60.0, 'PositionOffset': [-0.10000000149011612, 1.649999976158142, -0.4000000059604645], 'IsWaitEnd': False, 'ClothWarpMode': -1})
    } {
        Dm_Npc_Fairy.EventTriggerSetFairyColor({'Color': 3})
        Dm_Npc_Fairy.EventPlayAS({'ASName': 'C01_Mido_Fairy_loop', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.1799999475479126, 'EndDistance': 1.1799999475479126, 'StartFNumber': 51.400001525878906, 'EndFNumber': 51.400001525878906, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [0.949999988079071, 0.5299999713897705, -0.38999998569488525], 'AtVector': [0.75, 0.6000000238418579, -0.28999999165534973], 'TargetFovy': 32.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [0.949999988079071, 0.5299999713897705, -0.38999998569488525], 'AtVector': [0.75, 0.5799999833106995, -0.28999999165534973], 'TargetFovy': 32.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.75, 'EndDistance': 0.75, 'StartFNumber': 150.0, 'EndFNumber': 150.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Npc_Kokiri_Mido_Child', 'TurnFaceControlType': 1, 'Direction': 0.0})
    } {
        GameSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Npc_Kokiri_Mido_Child.EventTriggerRequestLookAtTheFront()
        Npc_Kokiri_Mido_Child.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
        Npc_Kokiri_Mido_Child.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_Surprise_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'ActorName': 'Npc_Kokiri_Mido_Child', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C04', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C04'})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [0.949999988079071, 0.5299999713897705, -0.38999998569488525], 'AtVector': [0.75, 0.5799999833106995, -0.28999999165534973], 'TargetFovy': 32.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 20, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.2000000476837158, 0.6399999856948853, -0.8700000047683716], 'AtVector': [0.8100000023841858, 0.6600000262260437, -0.4300000071525574], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kokiri_Mido_Child.EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C03_Mido'})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -90.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [23.665149688720703, 111.48999786376953, 0.2619999945163727], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.75, 'EndDistance': 0.75, 'StartFNumber': 150.0, 'EndFNumber': 150.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [-0.9900000095367432, 0.8299999833106995, -0.30000001192092896], 'AtVector': [2.2699999809265137, 0.8100000023841858, 0.6600000262260437], 'TargetFovy': 35.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [-0.949999988079071, 1.2000000476837158, 0.029999999329447746], 'AtVector': [2.390000104904175, 1.1799999475479126, 0.6700000166893005], 'TargetFovy': 35.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 230, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.3474999964237213, 'EndDistance': 0.3474999964237213, 'StartFNumber': 380.0, 'EndFNumber': 380.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    } {
        Npc_Kokiri_Mido_Child.EventTriggerSetModelLodManual({'LodLevel': -1})
        Npc_Kokiri_Mido_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0008', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 1, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C04-C06_Mido', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': '', 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'ActorName': '', 'Direction': 0.0, 'WorldPos': [35.785400390625, 114.2061996459961, 2.5969998836517334]})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
    } {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'Position', 'PositionOffset': [1.775979995727539, 1.149999976158142, 0.6162397861480713], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'ASCommand': '', 'LookAtInstanceName': '', 'WorldPos': [23.75, 112.69999694824219, 1.524999976158142], 'IsLookAtObject': True, 'MoveSpeed': 2.0, 'MinimumSpeed': 0.10000000149011612, 'DecSpeedDistance': 0.20000000298023224, 'IncSpeedDistance': 0.009999999776482582, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Kokiri_Mido_Child', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ASCommand': 'C04_Player_Child_turn', 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Dm_Npc_Fairy.EventPlayAS({'ASName': 'C04_Mido_Fairy', 'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C05', 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C05'})
    }

    Dm_Npc_Fairy.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Position', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': -1})
}

void C06() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveTotargetPosType': 0, 'PosVector': [33.95000076293945, 113.3499984741211, 2.309999942779541], 'AtVector': [28.040000915527344, 112.54000091552734, 0.9300000071525574], 'TargetFovy': 25.25, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveTotargetPosType': 0, 'PosVector': [34.349998474121094, 113.41000366210938, 2.4000000953674316], 'AtVector': [28.040000915527344, 112.54000091552734, 0.9300000071525574], 'TargetFovy': 25.25, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 270, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 13.300000190734863, 'EndDistance': 13.300000190734863, 'StartFNumber': 28.399999618530273, 'EndFNumber': 28.399999618530273, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    } {
        Npc_Kokiri_Mido_Child.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0009', 'IsWaitEnd': True, 'IsAnimeDriven': True, 'ASName': 'C04-C06_Mido', 'IsCloseDialog': False, 'EndDialogOption': 4, 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': False, 'WorldPos': [25.792999267578125, 112.79000091552734, -0.7400000095367432], 'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Kokiri_Mido_Child', 'InstanceName': ''})
    } {
        Dm_Npc_Fairy.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C04-C06-Npc_Navi-B-0'})
    } {
        Npc_Kokiri_Saria_Child.EventTriggerSetModelLodManual({'LodLevel': 2})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [22.350000381469727, 111.41999816894531, 0.47999998927116394], 'YAngle': 82.5607681274414, 'ClothWarpMode': -1})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayASWithClothWarp({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASName': 'C06', 'ClothWarpMode': -1})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C06', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C06'})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    }

}

void C01() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'YAngle': -90.0, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'Position', 'PositionOffset': [3.697279930114746, 0.07460000365972519, 0.6381397843360901], 'IsWaitEnd': True, 'ASCommand': 'EvtWait'})
    } {
        Npc_Navi.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'offset': [0.0, 0.5, 0.0], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'MoveSpeed': 0.0, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Npc_Kokiri_Mido_Child.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0000', 'ASName': '', 'IsWaitEnd': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01-00', 'IsAllSlot': True, 'ForceFadeInFrame': 20.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Kokiri_Mido_Child.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsWaitEnd': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0030', 'MaintainPerformanceState': 0})
    }


    fork {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C01-02'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }

    Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0001', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ASName': 'C01-01', 'MaintainPerformanceState': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.6699999570846558, 0.7699999809265137, -1.2200000286102295], 'AtVector': [-1.159999966621399, 0.5699999928474426, 0.029999999329447746], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.6699999570846558, 0.7699999809265137, -1.2200000286102295], 'AtVector': [-0.9300000071525574, 0.5, 0.4399999976158142], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 108, 'IsWaitEnd': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kokiri_Mido_Child.EventPlayAS({'ASName': 'C01_Mido_Turn', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Npc_Fairy.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C01_Mido_Fairy_Turn', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
        Dm_Npc_Fairy.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01_Mido_Fairy_180_loop', 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.1799999475479126, 'EndDistance': 1.1799999475479126, 'StartFNumber': 51.400001525878906, 'EndFNumber': 51.400001525878906, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    }

}

void C02() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Kokiri_Mido_Child.EventLookAtObjectImmediate({'IsWaitEnd': False, 'Target': 7, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayASWithClothWarp({'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'Surprise_Talk_Wait', 'ForceFadeInFrame': 160.0, 'ClothWarpMode': 2})

    fork {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.4600000381469727, 0.7200000286102295, 0.25999999046325684], 'AtVector': [0.6200000047683716, 0.75, 0.11999999731779099], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'StartDistance': 0.762499988079071, 'EndDistance': 0.762499988079071, 'StartFNumber': 171.60000610351562, 'EndFNumber': 171.60000610351562, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
        } {
            EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C02', 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C02'})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.1200000047683716, 0.7200000286102295, 0.18000000715255737], 'AtVector': [0.2800000011920929, 0.75, 0.03999999910593033], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 20, 'IsEnableNear': True, 'StartDistance': 0.762499988079071, 'EndDistance': 0.762499988079071, 'StartFNumber': 171.60000610351562, 'EndFNumber': 158.63999938964844, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
        }

    } {
        Npc_Kokiri_Mido_Child.EventTalk({'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0002', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'Talk', 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'EndDialogOption': 3})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    }

}

void C07() {

    fork {
        Npc_Kokiri_Mido_Child.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': True})
    } {
        Dm_Npc_Fairy.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'YAngle': 80.0, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'Position': [23.64250946044922, 111.47959899902344, 0.6526666283607483], 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Kokiri_Saria_Child.EventTriggerSetModelLodManual({'LodLevel': 1})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASName': 'C06-Loop', 'ForceFadeInFrame': 30.0})
    } {
        Npc_Fairy_Saria.EventWarpToTargetPosAndRot({'YAngle': 60.0, 'IsWaitEnd': True, 'Position': [22.27400016784668, 113.09410095214844, 0.06887999922037125], 'ClothWarpMode': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.8600000143051147, 0.8199999928474426, -1.6399999856948853], 'AtVector': [1.2000000476837158, 0.7300000190734863, -0.5899999737739563], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'IsEnableNear': True, 'StartDistance': 0.7400000095367432, 'EndDistance': 0.7400000095367432, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C07', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C07'})
    }

    Npc_Navi.EventNaviLookAtObject({'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': False, 'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Kokiri_Mido_Child', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0]})
    Npc_Navi.EventTalk({'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0010', 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

    fork {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_Kokiri_0145_0031_Sp_00'})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C06-Ed', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    }

    Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

    fork {
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.8600000143051147, 0.8199999928474426, -1.6399999856948853], 'AtVector': [1.2000000476837158, 0.7300000190734863, -0.5899999737739563], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [1.8600000143051147, 0.8199999928474426, -1.6399999856948853], 'AtVector': [1.149999976158142, 0.7300000190734863, -0.6299999952316284], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'IsEnableNear': True, 'StartDistance': 0.7400000095367432, 'EndDistance': 0.7400000095367432, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5})
        }

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C07_Player_Turn', 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0034', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor[1].EventWait({'Frames': 40, 'IsWaitEnd': True})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'ActorName': 'Npc_Kokiri_Saria_Child', 'InstanceName': 'Dm_Kokiri_0145_Only', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'IsTurnX': False})
    }

}

void C08() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_Kokiri_0145', 'IsReleaseDucking': True, 'CommandLife': 2})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [0.07000000029802322, 0.6399999856948853, -2.319999933242798], 'AtVector': [1.2899999618530273, 0.8199999928474426, 2.9600000381469727], 'TargetFovy': 32.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [0.07000000029802322, 0.6399999856948853, -2.319999933242798], 'AtVector': [1.0299999713897705, 0.6899999976158142, 3.0199999809265137], 'TargetFovy': 32.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 80, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 1.5, 'EndDistance': 1.5, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C08_Navi_talk', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': -124.31939697265625, 'IsWaitEnd': True, 'Position': [23.090299606323242, 112.45169830322266, 0.8927509784698486], 'ClothWarpMode': -1})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 400})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [23.649999618530273, 111.48999786376953, 0.6499999761581421], 'UseDemoWait': True, 'YAngle': -100.0, 'ASCommand': 'EvtWait', 'EnableInAir': False, 'ClothWarpMode': 3})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ASCommand': 'C08_wait_eye', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'ForceFadeFrame': -1.0})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'InstanceName': '', 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Navi', 'WorldPos': [0.0, 0.0, 0.0]})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'InstanceName': '', 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': '', 'WorldPos': [23.291000366210938, 112.00650024414062, -0.7799999713897705]})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_Kokiri_0145_0032_Sp_00'})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C08'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Navi_MV_00', 'IsIgnoreDucking': False})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C08', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C08'})
    }

}

void C09() {

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-0.8100000023841858, 0.7200000286102295, 1.059999942779541], 'AtVector': [-0.1599999964237213, 0.8500000238418579, 0.3700000047683716], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 1.2000000476837158, 'EndDistance': 1.2000000476837158, 'StartFNumber': 94.0, 'EndFNumber': 94.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 3.319999933242798, 'EndBluarLevel': 3.319999933242798})
    } {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.800000011920929, 1.0], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'IsNearOffset': False, 'IsHomePosition': False, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.30000001192092896, 'MinimumSpeed': 0.30000001192092896, 'IsTurnLooking': False, 'LookAtTarget': 2, 'IsLookAtObject': True, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'offset': [0.4000000059604645, 0.15000000596046448, 0.0], 'MoveSpeed': 0.699999988079071, 'OverwriteRotNearDist': -1.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Kokiri_Saria_Child', 'InstanceName': 'Dm_Kokiri_0145_Only', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Navi.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0029', 'ASName': 'EvtWait', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'InstanceName': '', 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Navi', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 45.0, 'PosOffset': [0.10000000149011612, 0.0, 0.0]})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Navi_MV_01', 'IsIgnoreDucking': False})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C09', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C09'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 3})
    }

}

void C10() {
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [2.6500000953674316, 1.0099999904632568, -0.8799999952316284], 'AtVector': [-1.2000000476837158, 0.47999998927116394, 1.100000023841858], 'TargetFovy': 32.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 3})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Direction': 90.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.3799999952316284, 'EndDistance': 1.3799999952316284, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 1.2999999523162842, 'EndBluarLevel': 1.2999999523162842})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C10', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C10'})
    }


    fork {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Direction': 0.0, 'Target': 0, 'WorldPos': [24.017099380493164, 111.62159729003906, -0.011169999837875366], 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0013', 'ASName': 'C10', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C10', 'IsCloseDialog': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0035', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C11() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [0.7400000095367432, 0.8700000047683716, -0.6700000166893005], 'AtVector': [0.0, 0.8600000143051147, 0.23000000417232513], 'TargetFovy': 36.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Direction': 90.0})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0017', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C10', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0018', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C10', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C11', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }

        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0019', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C11', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 65.19999694824219, 'EndFNumber': 65.19999694824219, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.9300000071525574, 'EndDistance': 0.9300000071525574, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 2.0899999141693115, 'EndBluarLevel': 2.0899999141693115})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C11', 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C11'})
    }

}

void C12() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-0.47999998927116394, 0.6899999976158142, 1.100000023841858], 'AtVector': [0.1599999964237213, 0.949999988079071, -0.1899999976158142], 'TargetFovy': 29.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Player_Event', 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'AtVector': [0.1599999964237213, 0.949999988079071, -0.1899999976158142], 'TargetFovy': 29.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 210, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.44999998807907104, 0.7099999785423279, 1.0399999618530273], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'StartDistance': 1.0, 'EndDistance': 1.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C10_Player_Child_facial', 'IsAllSlot': True, 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [23.698129653930664, 112.63050079345703, 1.2257219552993774], 'YAngle': -117.41079711914062, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Npc_Kokiri_Saria_Child', 'InstanceName': 'Dm_Kokiri_0145_Only', 'Direction': 45.0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'IsTurnX': True, 'IsWaitEnd': False})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C12', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C12'})
    }

}

void C03() {
    Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.47999998927116394, -0.10000000149011612, -0.07000000029802322], 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [2.759999990463257, 1.0099999904632568, -1.7300000190734863], 'AtVector': [1.6799999475479126, 0.8199999928474426, -0.8799999952316284], 'TargetFovy': 40.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'StartDistance': 0.7799999713897705, 'EndDistance': 0.7799999713897705, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'YAngle': -90.0, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'Position', 'IsWaitEnd': True, 'PositionOffset': [2.4072799682617188, 0.07460000365972519, 0.28813979029655457], 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'WorldPos': [23.592369079589844, 111.48999786376953, 0.6109529733657837], 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'MoveSpeed': 0.0, 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'ApplySlowMove': True, 'DecSpeedDistance': 0.47999998927116394})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'Target': 0, 'WorldPos': [22.350000381469727, 111.43000030517578, 0.4300000071525574], 'ActorName': '', 'PosOffset': [0.0, 0.800000011920929, 0.0]})
    } {
        Npc_Navi.EventNaviMoveAtPos({'IsLookAtObject': False, 'IsTurnLooking': False, 'IsWaitEnd': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'WorldPos': [23.600000381469727, 112.6500015258789, 1.149999976158142], 'LookAtWorldPos': [0.0, 0.0, 0.0], 'ASCommand': 'Wait', 'DecSpeedDistance': 0.800000011920929, 'MinimumSpeed': 0.4000000059604645, 'MoveSpeed': 1.2999999523162842, 'IncSpeedDistance': 0.6000000238418579, 'OverwriteRotNearDist': -1.0})
    } {
        Npc_Kokiri_Mido_Child.EventLookAtObjectImmediate({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C03', 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C03'})
    }

    Npc_Kokiri_Mido_Child.EventTalk({'IsAnimeDriven': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0003', 'IsWaitEnd': True, 'ASName': 'Act_Angry_Wait', 'MaintainPerformanceState': 0})
    Npc_Kokiri_Mido_Child.EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': 'Act_Angry_Wait', 'MaintainPerformanceState': 0})
    Npc_Kokiri_Mido_Child.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0005', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': '', 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Kokiri_Mido_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        Npc_Navi.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0006', 'IsWaitEnd': True, 'ASName': '', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Kokiri_Mido_Child.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Direction': 0.0, 'PosOffset': [0.30000001192092896, 0.0, 0.0]})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Navi', 'Direction': 90.0, 'PosOffset': [0.5, 0.0, 0.0]})
    }

}

void C13() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-2.5999999046325684, 1.75, 4.829999923706055], 'AtVector': [-0.12999999523162842, 0.46000000834465027, 0.9700000286102295], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Player_Event', 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'WorldPos': [23.116500854492188, 112.2063980102539, 0.565500020980835]})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0023', 'ASName': 'C11', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 3})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0024', 'IsCloseDialog': True, 'ASName': 'C11', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayAS({'ASName': 'C11-Ed', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'WorldPos': [23.01650047302246, 112.4000015258789, 0.565500020980835]})
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Kokiri_0145:Dm_Kokiri_0145_0025', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'ASName': 'C13'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 3.8499999046325684, 'EndDistance': 3.8499999046325684, 'StartFNumber': 23.899999618530273, 'EndFNumber': 23.899999618530273, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 2.950000047683716, 'EndBluarLevel': 2.950000047683716})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': False, 'ASCommand': 'DemoWaitHalf', 'IsWaitEnd': False, 'ForceFadeFrame': 2.0, 'ClothWarpMode': -1})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C13', 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C13'})
    }

}

void C14() {
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_Kokiri_0145', 'IsUseSuspendFade': False})

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.5, 0.7900000214576721, -1.1299999952316284], 'AtVector': [0.05999999865889549, 1.0, 0.4300000071525574], 'TargetFovy': 26.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsLinearMove': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [0.5, 0.7400000095367432, -1.1299999952316284], 'AtVector': [0.05999999865889549, 0.949999988079071, 0.4300000071525574], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 320, 'TargetFovy': 26.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'StartDistance': 1.1100000143051147, 'EndDistance': 1.1100000143051147, 'StartFNumber': 90.19999694824219, 'EndFNumber': 90.19999694824219, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 3.200000047683716, 'EndBluarLevel': 3.200000047683716})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 3, 'FadeTime': 0.0})

        fork {
            Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventPlayASWithClothWarp({'ASName': 'c13-c14_Turn_Saria', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'Partial': '', 'ClothWarpMode': -1, 'IsAllSlot': True})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_Kokiri_0145_0033_Sp_00'})
        }

    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 2.0, 'ClothWarpMode': -1, 'ASCommand': 'C15_DemoWaitHalf'})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kokiri_Saria_Child', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Dm_Kokiri_0145_Only', 'PosOffset': [0.0, -0.4000000059604645, 0.0]})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Ad_Env_Last', 'IsIgnoreDucking': False})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C14', 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C14'})
    }

}

void C15() {

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [-1.7699999809265137, 0.8299999833106995, -0.7599999904632568], 'AtVector': [2.0299999713897705, 0.9200000166893005, 0.8399999737739563], 'TargetFovy': 20.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Position', 'PosVector': [-1.7699999809265137, 0.8299999833106995, -0.7599999904632568], 'TargetFovy': 20.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'AtVector': [1.7999999523162842, 0.9200000166893005, 1.340000033378601], 'MoveTime': 210, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.949999988079071, 'EndDistance': 0.949999988079071, 'StartFNumber': 260.0, 'EndFNumber': 260.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 2.6500000953674316, 'EndBluarLevel': 2.6500000953674316})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:WorldSE+Demo系SEミュート(Dm_Kokiri_0145)'})
        SoundSystemActor.EventTriggerSoundBeginForbidScreenDucking({'CommandLife': 1})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0145_C15', 'CurrDemoPaletteName': 'Dm_Kokiri_0145_C15'})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'EvtWait'})
        Npc_Navi.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 3})
    } {
        EventWorldManagerController.Event_SetFoliageShadowParamForFlowchart({'IsWaitEnd': False})
    }

    Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    Npc_Kokiri_Saria_Child[Dm_Kokiri_0145_Only].EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 3, 'FadeTime': 0.0})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventWorldManagerController.Event_ResetFoliageShadowParamForFlowchart({'IsWaitEnd': False})
}
