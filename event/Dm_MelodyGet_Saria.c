-------- EventFlow: Dm_MelodyGet_Saria --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_Saria_Child_SacredForestMeadow
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventTriggerXLinkFadeByKey', 'EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Saria/Dm_MelodyGet_Saria_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Saria_saria.root.as'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Saria/Dm_MelodyGet_Saria_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Saria_Player_Child.root.as'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventSetDynamicResolutionLoadThreshold']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventNaviFollowPlayer', 'EventNaviLookAtObject', 'EventTriggerNaviChangeWaitStateToDefault', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Fairy_Saria
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Fairy
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 0}

void EntryPoint0() {

    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C01', 'Text2': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C02', 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C03', 'Text2': ''})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04', 'Text2': ''})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text1': 'C05'})
    }


    fork {

        call C06()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text1': 'C06'})
    }


    fork {

        call C07()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text1': 'C07'})
    }


    fork {

        call C08()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C08', 'Text2': ''})
    }


    fork {

        call C09()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C09', 'Text2': ''})
    }


    fork {

        call C10()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C10', 'Text2': ''})
    }


    fork {

        call C11()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C11', 'Text2': ''})
    }


    fork {

        call C12()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C12', 'Text2': ''})
    }


    fork {

        call C13()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text1': 'C13'})
    }

}

void C02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [-0.05000000074505806, 0.550000011920929, 2.200000047683716], 'AtVector': [-0.03999999910593033, 0.6299999952316284, 0.6600000262260437], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [-0.05999999865889549, 0.5400000214576721, 2.359999895095825], 'AtVector': [-0.03999999910593033, 0.6299999952316284, 0.6600000262260437], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 256, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void C03() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': True, 'ASCommand': 'C03', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [1.0700000524520874, 0.7699999809265137, 1.9900000095367432], 'AtVector': [-0.5199999809265137, 0.8600000143051147, 0.09000000357627869], 'TargetFovy': 42.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'Speed': -1.0, 'IsHomePosition': True, 'IsNearOffset': True, 'offset': [0.30000001192092896, -0.20000000298023224, 0.0], 'OffsetType': -1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 73})

        fork {
            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C03_0_Ocarina_OnFoot_St', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        }


        fork {
            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-2.1500000953674316, 115.19999694824219, -95.0]})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 99})
        }

        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0000', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'EndDialogOption': 5, 'MaintainPerformanceState': 0, 'ASName': 'C03_Loop'})
    } {
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': -1.0})
    }

    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'ASName': 'C03_Ed', 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 138})
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [1.559999942779541, 0.6200000047683716, 1.9600000381469727], 'AtVector': [-0.07000000029802322, 0.949999988079071, 0.6600000262260437], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [1.8700000047683716, 0.6000000238418579, 2.180000066757202], 'AtVector': [-0.05999999865889549, 1.059999942779541, 0.6600000262260437], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': False, 'MoveTime': 500, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

        fork {
            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C05_0_LookSide_Loop', 'IsWaitEnd': False})
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerRequestLookAtTheFront()
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Cloth_S_02', 'ELinkKey': ''})
            Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Navi', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 10.0, -15.0]})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0002', 'IsNotBecomeSpeaker': True, 'EndDialogOption': 5, 'IsCloseDialog': False, 'ASName': 'C05_1_LookSide_Loop', 'MaintainPerformanceState': 0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0016', 'ASName': 'C05_1_LookSide_Loop', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 60})
    }

}

void C07() {
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [1.2599999904632568, 1.2999999523162842, 1.6399999856948853], 'AtVector': [0.18000000715255737, 0.8799999952316284, 0.15000000596046448], 'TargetFovy': 19.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 2, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0009'})

    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})
    }

}

void C11() {
    PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'EndFNumber': 0.0, 'StartFNumber': 0.0, 'EndDistance': 0.0, 'StartDistance': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C11', 'RootType': 3, 'TargetActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [0.5899999737739563, 0.6700000166893005, 0.8700000047683716], 'AtVector': [0.12999999523162842, 0.7799999713897705, 0.10000000149011612], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': -1.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Ocarina_Correct'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Saria_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Saria_C01'})
    } {
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventPlayASWithClothWarp({'IsWaitEnd': True, 'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C09_0_OcarinaStop_St', 'IsAllSlot': True, 'ClothWarpMode': 3})
    }

    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0010', 'ASName': 'C09_1_OcarinaStop_Loop', 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0011', 'ASName': 'C09_1_OcarinaStop_Loop', 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0012', 'ASName': 'C09_1_OcarinaStop_Loop', 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C10-Loop', 'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
}

void C06() {

    fork {
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06_0_LookFront_St', 'IsWaitEnd': False, 'IsAllSlot': True})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 32})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-2.1500000953674316, 115.0, -99.80000305175781]})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 48})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0003', 'ASName': 'C06_0_LookFront_Loop', 'IsPlayASAllSlot': False, 'EndDialogOption': 5, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0004', 'ASName': 'C06_1_OcarinaUp_Loop', 'IsPlayASAllSlot': False, 'EndDialogOption': 5, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [1.4199999570846558, 1.1100000143051147, 2.890000104904175], 'AtVector': [-0.009999999776482582, 0.7900000214576721, 0.7099999785423279], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Cloth_S_00', 'ELinkKey': ''})
        Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosOffset': [0.0, 0.0, 0.0]})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-2.1500000953674316, 114.5, -99.80000305175781]})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0005', 'ASName': 'C06_2-1_OcarinaUpDown_Loop', 'IsPlayASAllSlot': False, 'EndDialogOption': 5, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-2.1500000953674316, 115.0999984741211, -99.80000305175781]})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0006', 'ASName': 'C06_2-2_OcarinaUpDown_Ed', 'EndDialogOption': 5, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 1})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0007', 'ASName': 'C06_3_OcarinaUpBuck_Loop', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C07_1_OcarinaPlay_Loop', 'IsAllSlot': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerRequestLookAtTheFront()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    } else {
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0008', 'ASName': 'C06_3_OcarinaUpBuck_Loop', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C07_1_OcarinaPlay_Loop', 'IsAllSlot': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerRequestLookAtTheFront()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    }
}

void C08() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C08', 'IsAllSlot': True, 'ClothWarpMode': 3})

        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 2})


        call Dm_SY_Ocarina.LearningOcarinaPlayAuto()

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.3799999952316284, 0.8500000238418579, 1.0], 'AtVector': [0.23999999463558197, 0.8100000023841858, -0.5099999904632568], 'TargetFovy': 31.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndBluarLevel': 2.5, 'RequiredFrame': 0, 'StartBluarLevel': 2.5, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'StartFNumber': 90.0, 'EndFNumber': 90.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Saria_C08', 'CurrDemoPaletteName': 'Dm_MelodyGet_Saria_C08'})
    }

}

void Ready() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventAIScheduleWarpToAnchor({'InstanceName': '活動場１', 'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Npc_Fairy_Saria.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'PositionOffset': [-0.6000000238418579, 1.100000023841858, -0.699999988079071], 'ClothWarpMode': -1})
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_MelodyGet_Saria_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Saria_C01'})
    UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
}

void C01() {
    PostProcessingActor.EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01', 'RootType': 3, 'TargetActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 180.0, 'Position': [-2.1500000953674316, 114.51000213623047, -98.49710083007812], 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Navi.EventTriggerNaviChangeWaitStateToDefault()
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-2.4600000381469727, 115.36000061035156, -98.31999969482422], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtInstanceName': '', 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'IsHomePosition': False, 'IsNearOffset': False, 'offset': [0.30000001192092896, 0.0, -0.20000000298023224], 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {

        fork {
            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01_Ocarina_Loop', 'IsAllSlot': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_MelodyGet_Saria', 'CommandLife': 2, 'IsReleaseDucking': False})
        }

    } {
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerXLinkFadeByKey({'ELinkKey': 'Sing', 'SLinkKey': '', 'IsKill': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C04() {

    fork {
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-2.1500000953674316, 114.69999694824219, -96.0]})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0013', 'ASName': 'C03_1_Ocarina_OnFoot_Loop', 'IsPlayASAllSlot': False, 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C04_0_LeanForward_Loop', 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0014', 'IsPlayASAllSlot': False, 'EndDialogOption': 5, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [0.699999988079071, 1.1399999856948853, 2.2899999618530273], 'AtVector': [-0.3499999940395355, 0.800000011920929, 0.019999999552965164], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'PosVector': [0.7599999904632568, 1.1399999856948853, 2.259999990463257], 'AtVector': [-0.3499999940395355, 0.800000011920929, 0.029999999329447746], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 500, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C04', 'ClothWarpMode': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 60.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-2.1500000953674316, 114.5, -99.80000305175781]})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0001', 'ASName': 'C04_1_sad_Loop', 'EndDialogOption': 5, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-2.1500000953674316, 114.69999694824219, -96.0]})
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Saria:Dm_MelodyGet_Saria_0015', 'ASName': 'C04_2_LookUp_Loop', 'EndDialogOption': 5, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C10() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C10'})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_FinaleJingle', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Ocarina_Correct_End'})
        Item_Ocarina_Fairy.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Saria_Shine', 'SLinkKey': ''})
    }

}

void C12() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-0.3499999940395355, 0.8700000047683716, 0.9399999976158142], 'AtVector': [0.23999999463558197, 0.8100000023841858, -0.5099999904632568], 'TargetFovy': 31.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndBluarLevel': 2.5, 'RequiredFrame': 0, 'StartBluarLevel': 2.5, 'StartDistance': 0.8999999761581421, 'EndDistance': 0.8999999761581421, 'IsAutoFocalDist': False, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_SariaSong'})

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C12', 'IsWaitEnd': True, 'ClothWarpMode': 0})
}

void C13() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.6299999952316284, 1.5199999809265137, -3.3299999237060547], 'AtVector': [-0.05000000074505806, 1.309999942779541, 0.019999999552965164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.6799999475479126, 1.5299999713897705, -3.440000057220459], 'AtVector': [-0.05000000074505806, 1.309999942779541, 0.019999999552965164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 120, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'C13', 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 120})

    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}
