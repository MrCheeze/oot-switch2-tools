-------- EventFlow: Dm_MelodyGet_Sun_03 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTalk', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[cam_P]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: DevelopEventSystemActor[cutnumber]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Player_Event.EventTriggerParticipateEvent()
    if !Player_Event.EventQueryPlayerIsChild() {
        Dm_Locator[cam_P].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [152.6999969482422, 98.12000274658203, 2.6700000762939453], 'ClothWarpMode': -1})

        call C01()

        Event36:
        Npc_Navi.EventTriggerEmitXLink({'SLinkKey': 'Navi_MV_06', 'ELinkKey': ''})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Sun:Dm_MelodyGet_Sun_0010', 'MaintainPerformanceState': 0})

        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_SunSong'})

    } else {
        Dm_Locator[cam_P].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [152.6999969482422, 98.0999984741211, 2.7300000190734863], 'ClothWarpMode': -1})

        call C01Adult()

        goto Event36
    }
}

void C01() {

    fork {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'OffsetBase': 1, 'IsWaitEnd': True, 'TargetActorKind': 1, 'PositionOffset': [-0.6000000238418579, 0.0, 0.0], 'YAngle': 90.0, 'ASCommand': 'EvtWait'})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': ''})
    } {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'PositionOffset': [-0.20000000298023224, 1.100000023841858, -0.550000011920929], 'ClothWarpMode': -1})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C08'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-1.9900000095367432, 0.7799999713897705, -2.4200000762939453], 'AtVector': [-1.9299999475479126, 0.8399999737739563, -2.359999895095825], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventWorldManagerController.Event_ResetEnvPaletteForFlowchart({'IsWaitEnd': False})
    }


    fork {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 150, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-2.0, 0.5299999713897705, -2.430000066757202], 'AtVector': [-1.9299999475479126, 0.5299999713897705, -2.359999895095825], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

}

void C01Adult() {

    fork {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'OffsetBase': 1, 'IsWaitEnd': True, 'TargetActorKind': 1, 'PositionOffset': [-0.6000000238418579, 0.0, 0.0], 'YAngle': 90.0, 'ASCommand': 'EvtWait'})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': ''})
    } {
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam_P', 'PositionOffset': [-0.20000000298023224, 1.100000023841858, -0.550000011920929], 'ClothWarpMode': -1})
    } {
        DevelopEventSystemActor[cutnumber].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C08'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-2.880000114440918, 1.559999942779541, -2.390000104904175], 'AtVector': [-0.12999999523162842, 3.9200000762939453, -0.4300000071525574], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        EventWorldManagerController.Event_ResetEnvPaletteForFlowchart({'IsWaitEnd': False})
    }


    fork {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_P', 'PosVector': [-2.880000114440918, 0.75, -2.390000104904175], 'AtVector': [0.5, 0.9300000071525574, -0.03999999910593033], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    }

}
