-------- EventFlow: Dm_FireTemple_0010 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0010/Dm_FireTemple_0010_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0010_Player.root.as'}

Actor: Npc_Goron_Darunia_Adult
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0010/Dm_FireTemple_0010_Npc_Goron_GOU_Darunia/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0010_Darunia.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveAroundToPlayer', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_FireTemple_SwitchShutter_A_02
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0010/Dm_FireTemple_0010_Obj_FireTemple_SwitchShutter_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0010_Obj_FireTemple_SwitchShutter_A.root.as'}

Actor: Dm_Obj_DoorChainLock_A_01
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerChanLockAdjustPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0010/Dm_FireTemple_0010_Obj_DoorChainLock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0010_DoorChainLock.root.as'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_FireTemple_SwitchShutter_A_03
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Rumble]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[light]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[lightpos]
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True, 'EventMemberCreateMethod': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 270.0, 'Position': [-18.839000701904297, 105.0, 0.13600000739097595], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Goron_Darunia_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-32.452999114990234, 105.0, -0.024000000208616257], 'YAngle': 75.0, 'ClothWarpMode': -1})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FireTemple_Room02_CreateChain', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Dm_Obj_DoorChainLock_A_01.EventTriggerChanLockAdjustPos()
        Dm_Obj_DoorChainLock_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Obj_FireTemple_SwitchShutter_A_03.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'offset': [-0.5, -0.15000000596046448, 0.0], 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'FireTemple_0010_C01', 'CurrDemoPaletteName': 'FireTemple_0010_C01'})
    }


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()

}

void C08() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C08', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-27.600000381469727, 106.31999969482422, -0.10000000149011612], 'AtVector': [-29.889999389648438, 106.44000244140625, -0.07999999821186066], 'TargetFovy': 21.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_Darunia_Adult.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C08-Turn', 'ClothWarpMode': 2, 'ForceFadeInFrame': 0.0})
        Npc_Goron_Darunia_Adult.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 28})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Short', 'Length': 0.0})
        } {
            Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0007', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C08-01'})
        }

        Npc_Goron_Darunia_Adult.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0018', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C08-02'})
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0019', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C08-02-Loop'})
    }

}

void C09() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'IsWaitEnd': False, 'Text1': 'C09'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-36.099998474121094, 106.68000030517578, -2.5899999141693115], 'AtVector': [-25.5, 105.66000366210938, 1.5099999904632568], 'TargetFovy': 40.09000015258789, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_Darunia_Adult.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0009', 'IsWaitEnd': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C09'})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    }


    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': True, 'PosVector': [-36.099998474121094, 106.68000030517578, -2.5899999141693115], 'AtVector': [-25.8700008392334, 105.6500015258789, 2.3499999046325684], 'TargetFovy': 40.09000015258789, 'MoveTime': 65, 'EndRecelerateRate': 0.5, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_Darunia_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C10'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    }

}

void C10() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C10', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-26.649999618530273, 105.7699966430664, -0.15000000596046448], 'AtVector': [-32.81999969482422, 106.31999969482422, -0.07000000029802322], 'TargetFovy': 30.0, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 600, 'EnableCameraAlpha': True, 'PosVector': [-28.219999313354492, 106.0, -0.12999999523162842], 'AtVector': [-32.810001373291016, 106.41000366210938, -0.07000000029802322], 'TargetFovy': 30.0, 'IsWaitEnd': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            Obj_FireTemple_SwitchShutter_A_02.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Door_Open', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            GameSystemActor[Rumble].EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Demo_Middle_GoGoGo'})
        } {
            EventCamera.EventTriggerRequestCameraShake({'Pattern': 11, 'ApplyType': 1, 'LoopEndCount': 7, 'Power': 0.30000001192092896, 'IsRumbleController': False})
        }

        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Obj_FireTemple_SwitchShutter_A_02.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Door_Close', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            GameSystemActor[Rumble].EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Demo_Middle_GoGoGo'})
        } {
            EventCamera.EventTriggerRequestCameraShake({'Pattern': 11, 'ApplyType': 1, 'LoopEndCount': 7, 'Power': 0.30000001192092896, 'IsRumbleController': False})
        }

        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Dm_Obj_DoorChainLock_A_01.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C10_DoorChainLock', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
            GameSystemActor[Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
        }

        Npc_Goron_Darunia_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Locator[lightpos].EventDoNothing({'IsWaitEnd': False})
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'LightHash': 'light01', 'PositionOffset': [-46.44620895385742, 106.0, -0.05000128969550133], 'LightType': 0, 'OffsetBase': 0, 'Direction': [0.0, -1.0, 0.0], 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'TargetActorKind': 1, 'InstanceName': 'lightpos', 'ActorName': 'Dm_Locator'})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'light01', 'SourceRadius': 0.5839999914169312, 'Color': [1.0, 0.47099998593330383, 0.37700000405311584], 'Intensity': 0.0, 'IsFrameTransition': False, 'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'FrameTransitionCount': 30})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'FireTemple_0010_C10_1', 'CurrDemoPaletteName': 'FireTemple_0010_C10_1'})
        EventSystemActor[light].EventWait({'IsWaitEnd': True, 'Frames': 80})

        fork {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'FireTemple_0010_C10_1', 'CurrDemoPaletteName': 'FireTemple_0010_C10_2', 'IsWaitEnd': True, 'Frames': 150})
        } {
            PostProcessingActor.EventEditLocationalLight({'LightHash': 'light01', 'SourceRadius': 0.5839999914169312, 'IsFrameTransition': True, 'EditColor': False, 'FrameTransitionCount': 150, 'LocationalLightCreateType': 0, 'Color': [1.0, 1.0, 1.0], 'EditIntensity': True, 'EditSourceRadius': True, 'Intensity': 100.0})
        } {
            EventSystemActor[light].EventWait({'IsWaitEnd': True, 'Frames': 150})
        }

        EventSystemActor[light].EventWait({'IsWaitEnd': True, 'Frames': 140})

        fork {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 150, 'PrevDemoPaletteName': 'FireTemple_0010_C10_2', 'CurrDemoPaletteName': 'FireTemple_0010_C10_3'})
        } {
            PostProcessingActor.EventEditLocationalLight({'LightHash': 'light01', 'SourceRadius': 0.5839999914169312, 'Intensity': 0.0, 'IsFrameTransition': True, 'FrameTransitionCount': 150, 'EditColor': False, 'LocationalLightCreateType': 0, 'Color': [1.0, 1.0, 1.0], 'EditIntensity': True, 'EditSourceRadius': True})
        } {
            EventSystemActor[light].EventWait({'IsWaitEnd': True, 'Frames': 150})
        }

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-14.859999656677246, 106.91999816894531, 0.14000000059604645], 'AtVector': [-18.84000015258789, 106.4800033569336, 0.14000000059604645], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C01', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-23.280000686645508, 104.93000030517578, -2.119999885559082], 'AtVector': [-19.950000762939453, 105.66000366210938, -0.3199999928474426], 'TargetFovy': 25.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': False, 'PosVector': [-22.860000610351562, 105.0199966430664, -1.899999976158142], 'AtVector': [-19.950000762939453, 105.66000366210938, -0.3199999928474426], 'TargetFovy': 25.0, 'MoveTime': 720, 'StartAccelerateRate': 0.5, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C01', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0011', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } {
        Npc_Goron_Darunia_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C02-Wait', 'ForceFadeInFrame': 0.0})
    }

}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C02', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-36.099998474121094, 106.68000030517578, -2.5899999141693115], 'AtVector': [-25.5, 105.66000366210938, 1.5099999904632568], 'TargetFovy': 40.09000015258789, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0012', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C02-kaiwa'})
    }

}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C03', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-28.579999923706055, 105.73999786376953, -2.4800000190734863], 'AtVector': [-30.299999237060547, 106.22000122070312, -1.190000057220459], 'TargetFovy': 20.0, 'MoveTime': 1, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 3.1600000858306885, 'EndDistance': 3.1600000858306885, 'StartBluarLevel': 2.859999895095825, 'EndBluarLevel': 2.859999895095825, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'IsReleaseDucking': True, 'BGMName': 'BGM_Dm_FireTemple_0010', 'CommandLife': 2})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0013', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C02-Kaiwa_End'})
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0014', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C02-Wait'})
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0015', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C03-HandUp'})
    }

    Npc_Goron_Darunia_Adult.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-29.290000915527344, 105.94000244140625, -1.9500000476837158], 'AtVector': [-30.299999237060547, 106.22000122070312, -1.190000057220459], 'TargetFovy': 20.0, 'MoveTime': 15, 'StartAccelerateRate': 0.5, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0016', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C03-Fist'})
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0017', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': False, 'ASName': 'C03-Fist-Loop'})
    }

}

void C04() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C04', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-14.760000228881836, 106.02999877929688, -1.4800000190734863], 'AtVector': [-15.510000228881836, 106.02999877929688, -1.3200000524520874], 'TargetFovy': 20.0, 'IsWaitEnd': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'StartDistance': 0.0, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Goron_Darunia_Adult.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Goron_Darunia_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0000', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C03-HandDown'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'C04'})
    }

    Npc_Goron_Darunia_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0001', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C03-Wait'})
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'C04-1'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
}

void C05() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C05', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': True, 'PosVector': [-25.75, 105.94999694824219, -10.649999618530273], 'AtVector': [-25.799999237060547, 105.7300033569336, -5.909999847412109], 'TargetFovy': 60.099998474121094, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-25.739999771118164, 106.0, -11.600000381469727], 'AtVector': [-25.799999237060547, 105.7300033569336, -5.909999847412109], 'TargetFovy': 60.099998474121094, 'MoveTime': 600, 'StartAccelerateRate': 0.5, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_Darunia_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0002', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C03-Wait'})
        Npc_Goron_Darunia_Adult.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0003', 'IsWaitEnd': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C03-Wait'})
    }


    fork {
        EventSystemActor.EventWait({'Frames': 40, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': True, 'MoveTime': 0, 'PosVector': [-34.25, 106.1500015258789, -2.119999885559082], 'AtVector': [-31.510000228881836, 106.51000213623047, 1.1699999570846558], 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.5, 'PosVector': [-34.25, 106.1500015258789, -2.119999885559082], 'AtVector': [-31.719999313354492, 106.52999877929688, 1.3300000429153442], 'TargetFovy': 50.0, 'MoveTime': 30, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_Darunia_Adult.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C06', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
    }

}

void C06() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C06', 'IsWaitEnd': False})
    Npc_Goron_Darunia_Adult.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Short', 'Length': 0.0})
    } {
        Npc_Goron_Darunia_Adult.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0004', 'IsWaitEnd': True, 'EndDialogOption': 3, 'ASName': 'C06-02', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    }

    Npc_Goron_Darunia_Adult.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    Npc_Goron_Darunia_Adult.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0022', 'EndDialogOption': 3, 'ASName': 'C06-03', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
}

void C07() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 5, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C07', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-30.149999618530273, 105.9000015258789, -1.309999942779541], 'AtVector': [-23.600000381469727, 105.7300033569336, -0.2199999988079071], 'TargetFovy': 20.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0005', 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        Npc_Goron_Darunia_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-32.452999114990234, 105.0, -0.024000000208616257], 'YAngle': 90.0, 'ClothWarpMode': -1})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
        Npc_Goron_Darunia_Adult.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0010:Dm_FireTemple_0010_0006', 'IsWaitEnd': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'C06-3-Loop'})
    }

}
