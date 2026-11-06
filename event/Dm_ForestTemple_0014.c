-------- EventFlow: Dm_ForestTemple_0014 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0014/Dm_ForestTemple_0014_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0014_Player.root.as'}

Actor: Enemy_Poe_Amy
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventPoeSistersAppear', 'EventWarpToTargetPosAndRot', 'EventPoeAppearWithWeapon', 'EventPoeDisappearWithEffectAndWeapon', 'EventTriggerEmitXLink', 'EventPlayASWithClothWarp', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0014/Dm_ForestTemple_0014_Enemy_Poe_Amy/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0014_Amy.root.as', 'EventMemberCreateMethod': 0, 'Position': [0.0, 0.0, 0.0]}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviLookAtObject', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_ForestTemple_MovableBox_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'Position': [0.0, 0.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0014/Dm_ForestTemple_0014_Obj_ForestTemple_MovableBox_A_02/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0014_MovableBox_A.root.as'}

Actor: Obj_ForestTemple_MovableBox_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0014/Dm_ForestTemple_0014_Obj_ForestTemple_MovableBox_A_03/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0014_MovableBox_A.root.as'}

Actor: Obj_ForestTemple_MovableBox_A_04
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0014/Dm_ForestTemple_0014_Obj_ForestTemple_MovableBox_A_04/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0014_MovableBox_A.root.as'}

Actor: Obj_ForestTemple_MovableBox_A_05
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'Position': [0.0, 0.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0014/Dm_ForestTemple_0014_Obj_ForestTemple_MovableBox_A_05/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0014_MovableBox_A.root.as'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_MovableBox_A_01[AfterShotPicture_01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0014/Dm_ForestTemple_0014_Obj_ForestTemple_MovableBox_A_01/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0014_MovableBox_A.root.as'}

Actor: EventSystemActor[Player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_GhostPicturePerformer_Poe_Amy
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0014/Dm_ForestTemple_0014_Enemy_Poe_Amy/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0014_Amy.root.as'}

Actor: EventSystemActor[EFF_Wati]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Controller_Rumble]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Amy_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Ready()


    fork {

        call Action1()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 3.0})
}

void Action1() {

    fork {
        Enemy_Poe_Amy.EventTriggerRequestPause()
        EventSystemActor[Amy_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 308})
        Enemy_Poe_Amy.EventTriggerRequestCancelPause()
        Enemy_Poe_Amy.EventPlayASWithClothWarp({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAnimeDriven': True, 'ClothWarpMode': 3})
        Enemy_Poe_Amy.EventPoeDisappearWithEffectAndWeapon({'IsWaitEnd': True, 'DisappearFrame': 41.0})
    } {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'EventCamera', 'ActorNameB': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 3.5}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'PosVector': [0.7699999809265137, 4.320000171661377, -2.2899999618530273], 'AtVector': [0.75, 1.190000057220459, 0.4000000059604645], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': 'AfterShotPicture_01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'PosVector': [0.7699999809265137, 4.320000171661377, -2.2899999618530273], 'AtVector': [0.75, 1.190000057220459, 0.4000000059604645], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': 'AfterShotPicture_01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 320})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'Actor1InstanceName': 'AfterShotPicture_01', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.7699999809265137, 4.230000019073486, -2.2100000381469727], 'AtVector': [0.699999988079071, 4.699999809265137, 1.7899999618530273], 'MoveTime': 28, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'Actor1InstanceName': 'AfterShotPicture_01', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.7699999809265137, 4.230000019073486, -2.2100000381469727], 'AtVector': [0.699999988079071, 4.699999809265137, 1.7899999618530273], 'MoveTime': 5, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'Actor1InstanceName': 'AfterShotPicture_01', 'PosVector': [0.7699999809265137, 4.230000019073486, -2.2100000381469727], 'AtVector': [0.699999988079071, 4.309999942779541, 1.7899999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTotargetPosType': 1, 'MoveTime': 40, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'PosVector': [0.7699999809265137, 4.320000171661377, -2.2899999618530273], 'AtVector': [0.75, 1.190000057220459, 0.4000000059604645], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 15, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': 'AfterShotPicture_01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'PosVector': [0.7699999809265137, 4.320000171661377, -2.2899999618530273], 'AtVector': [0.75, 1.190000057220459, 0.4000000059604645], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': 'AfterShotPicture_01', 'EnableCameraAlpha': True, 'MoveTime': 305, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'Actor1InstanceName': 'AfterShotPicture_01', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.7699999809265137, 4.230000019073486, -2.2100000381469727], 'AtVector': [0.699999988079071, 4.699999809265137, 1.7899999618530273], 'MoveTime': 28, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'Actor1InstanceName': 'AfterShotPicture_01', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.7699999809265137, 4.230000019073486, -2.2100000381469727], 'AtVector': [0.699999988079071, 4.699999809265137, 1.7899999618530273], 'MoveTime': 5, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'Actor1InstanceName': 'AfterShotPicture_01', 'PosVector': [0.7699999809265137, 4.230000019073486, -2.2100000381469727], 'AtVector': [0.699999988079071, 4.309999942779541, 1.7899999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTotargetPosType': 1, 'MoveTime': 40, 'IsEnableRevertFast': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0})
        }
    } {
        Obj_ForestTemple_MovableBox_A_01[AfterShotPicture_01].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_A_01', 'IsAllSlot': False})
    } {
        Obj_ForestTemple_MovableBox_A_02.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False, 'ASName': 'C01_A_02'})
    } {
        Obj_ForestTemple_MovableBox_A_03.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C01_A_03'})
    } {
        Obj_ForestTemple_MovableBox_A_04.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_A_04'})
    } {
        Obj_ForestTemple_MovableBox_A_05.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_A_05'})
    } {

        fork {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Enemy_Poe_Amy', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'TurnFaceControlType': 0, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'IsDoNavi': False})
            EventSystemActor[Player].EventWait({'Frames': 50, 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsAllSlot': True})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'ActorName': 'Enemy_Poe_Amy', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'IsTurnX': False})
        }

        EventSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 303})

        fork {
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    } {
        Enemy_GhostPicturePerformer_Poe_Amy.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-Pct', 'IsWaitEnd': True})
    } {
        GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 65})
        GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
        GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 19})
        GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 237})
        GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
    } {
        EventSystemActor[EFF_Wati].EventWait({'IsWaitEnd': True, 'Frames': 14})

        fork {
            Obj_ForestTemple_MovableBox_A_01[AfterShotPicture_01].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0014_MiasmaBlock', 'SLinkKey': ''})
        } {
            EventSystemActor[EFF_Wati].EventWait({'IsWaitEnd': True, 'Frames': 58})

            fork {
                Obj_ForestTemple_MovableBox_A_01[AfterShotPicture_01].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0014_ActWeakSmoke'})
            } {
                EventSystemActor[EFF_Wati].EventWait({'IsWaitEnd': True, 'Frames': 245})
                Enemy_Poe_Amy.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0014_AppearMiasma', 'SLinkKey': ''})
            }

        }

    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 1, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 0, 'AtVector': [48.0, 106.0, 0.0], 'Actor1ActorName': '', 'MoveTime': 60, 'IsEnableRevertFast': False})
    } {
        Enemy_Poe_Amy.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [48.0, 105.0, 0.0], 'YAngle': 90.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 32})
        Enemy_Poe_Amy.EventPoeAppearWithWeapon({'IsWaitEnd': True})
    }


    fork {
        Player_Event.EventPlayerTurnAndLook({'KeepTalkWait': False, 'SlowTurn': True, 'IgnoreTargetPosMove': False, 'UseNormalTurn': True, 'Target': 3, 'ActorName': 'Enemy_Poe_Amy', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IsWaitEnd': True, 'IsDoNavi': True})
    } {
        Enemy_Poe_Amy.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 60.0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void Ready() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Poe_Amy', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': False})

    fork {
        Enemy_Poe_Amy.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Obj_ForestTemple_MovableBox_A_01', 'OffsetBase': 1, 'InstanceName': 'AfterShotPicture_01', 'ClothWarpMode': -1, 'YAngle': 180.0, 'PositionOffset': [0.75, -2.299999952316284, 0.75]})
        Enemy_Poe_Amy.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C01-Ready'})
        Enemy_Poe_Amy.EventPoeSistersAppear({'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'ForceFadeFrame': 60.0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Obj_ForestTemple_MovableBox_A_01[AfterShotPicture_01].EventTriggerParticipateEvent()
    } {
        Obj_ForestTemple_MovableBox_A_02.EventTriggerParticipateEvent()
    } {
        Obj_ForestTemple_MovableBox_A_05.EventTriggerParticipateEvent()
    } {
        Obj_ForestTemple_MovableBox_A_03.EventTriggerParticipateEvent()
    } {
        Obj_ForestTemple_MovableBox_A_04.EventTriggerParticipateEvent()
    }

}
