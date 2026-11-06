-------- EventFlow: Field_PlantMagicBean --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerBackMoveForAnchor', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_SmallFarm_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventSmallFarmPlantedBeans']
queries: ['EventQuerySmallFarmIsPlanted']
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Plant_MagicBeanBud_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_047_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: Obj_SmallFarm_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventSmallFarmPlantedBeans']
queries: ['EventQuerySmallFarmIsPlanted']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void PlantMagicBean() {
    Obj_SmallFarm_A_01.EventTriggerParticipateEvent()
    if !Obj_SmallFarm_A_01.EventQuerySmallFarmIsPlanted() {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } else {

        fork {

            fork {
                Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Obj_SmallFarm_A_01'})
            } {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtBeansPlant', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ClothWarpMode': 0})
            }

            Obj_SmallFarm_A_01.EventSmallFarmPlantedBeans({'IsWaitEnd': True})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_MagicBean', 'Num': -1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        }

    }
}

void CheckSoil() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Obj_SmallFarm_A_01.EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Obj_SmallFarm_A_01', 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 0.75}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorInstanceName': 'Dirt', 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 0.5})
        }
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Obj_SmallFarm_A_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'TargetActorName': 'Obj_SmallFarm_A_01', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 360.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'IdealDistance': 3.0, 'ToleranceYUpwardAngle': 55.0, 'ToleranceYDownwardAngle': 55.0})
    }


    call InitTalk.InitTalk_NaviPlayerSide_MoveWait_LookTarget({'LookAtTarget': 3, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 1, 'LookAtActorName': 'Obj_SmallFarm_A_01'})

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Field_PlantMagicBean:NaviTalk_00', 'MaintainPerformanceState': 0})
}

void CheckSoil_01() {

    fork {
        Obj_Plant_MagicBeanBud_A_01.EventTriggerParticipateEvent()
        Player_Event.EventTriggerParticipateEvent()

        fork {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 0.75, 'ActorNameB': 'Obj_Plant_MagicBeanBud_A_01'}) {
                Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorInstanceName': 'Dirt', 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 0.5})
            }
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Obj_Plant_MagicBeanBud_A_01'})
        } {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 360.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'IdealDistance': 3.0, 'ToleranceYUpwardAngle': 55.0, 'ToleranceYDownwardAngle': 55.0, 'TargetActorName': 'Obj_Plant_MagicBeanBud_A_01'})
        }


        call InitTalk.InitTalk_NaviPlayerSide_MoveWait_LookTarget({'LookAtTarget': 3, 'LookAtActorName': 'Obj_Plant_MagicBeanBud_A_01', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 1})

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Field_PlantMagicBean:NaviTalk_01', 'MaintainPerformanceState': 0})
    }

}

void PlantMagicBean_ZoraRiver() {

    call PlantMagicBean_ZoraRiver_Changed()

}

void CheckSoil_ZoraRiver() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Obj_SmallFarm_A_02.EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 0.75, 'ActorNameB': 'Obj_SmallFarm_A_02'}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorInstanceName': 'Dirt', 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 0.5})
        }
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Obj_SmallFarm_A_02'})
    } {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 360.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'IdealDistance': 3.0, 'ToleranceYUpwardAngle': 55.0, 'ToleranceYDownwardAngle': 55.0, 'TargetActorName': 'Obj_SmallFarm_A_02'})
    }


    call InitTalk.InitTalk_NaviPlayerSide_MoveWait_LookTarget({'LookAtTarget': 3, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 1, 'LookAtActorName': 'Obj_SmallFarm_A_02'})

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Field_PlantMagicBean:NaviTalk_00', 'MaintainPerformanceState': 0})
}

void PlantMagicBean_ZoraRiver_01() {

    call PlantMagicBean_ZoraRiver_01_Changed()

}

void PlantMagicBean_ZoraRiver_Changed() {
    Npc_Hylia_047_Child.EventTriggerParticipateEvent()
    Obj_SmallFarm_A_02.EventTriggerParticipateEvent()
    if !Obj_SmallFarm_A_02.EventQuerySmallFarmIsPlanted() {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } else {

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'UseDemoWait': True, 'YAngle': 60.0, 'Position': [-54.99700164794922, 100.40499877929688, -12.149999618530273], 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 1, 'CameraCollisionMode': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-54.7869987487793, 101.44000244140625, -9.82699966430664], 'AtVector': [-54.369998931884766, 100.40399932861328, -13.503999710083008], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }


        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Obj_SmallFarm_A_02', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtBeansPlant', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'ClothWarpMode': 0})
        }

        Obj_SmallFarm_A_02.EventSmallFarmPlantedBeans({'IsWaitEnd': True})
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_MagicBean', 'Num': -1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        EventSystemActor.EventTransition({'EventName': 'PlantMagicBean_ZoraRiver_01', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    }
}

void PlantMagicBean_ZoraRiver_01_Changed() {
    Npc_Hylia_047_Child.EventTriggerParticipateEvent()
    Obj_Plant_MagicBeanBud_A_01.EventTriggerParticipateEvent()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

    fork {
        Npc_Hylia_047_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_18', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Hylia_047_Child'})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 1, 'CameraCollisionMode': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-56.422000885009766, 101.43299865722656, -15.333000183105469], 'AtVector': [-53.801998138427734, 100.91899871826172, -13.20300006866455], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_047_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    Npc_Hylia_047_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_19', 'MaintainPerformanceState': 0})
    Npc_Hylia_047_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_27', 'ASName': 'Act_Eat', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Index': -1, 'Value': True})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 298})
}
