-------- EventFlow: Dm_TimeTemple_0085 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestCreateDynamicEquipmentNoRelationPouch', 'EventTriggerPlayerEquipDynamicEquipmentFromPouch', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerPlayerSetTimerInvalidDoAction', 'EventWaitCreationFinishedEquipment']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0085/Dm_TimeTemple_0085_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0085_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void EntryPoint0() {

    call other()

    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
        Event23:

        call C01_B()

        Event13:
        Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 90.0})
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Giant', 'WeaponSlot': 0}) {
        goto Event23
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
        goto Event23
    } else {

        call C01()

    }
    goto Event13
}

void C01() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C01-Player_Adult-A-0', 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': 3})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventTriggerPlayerEquipDynamicEquipmentFromPouch({'CreateActorType': 0})
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01', 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void other() {

    fork {
        UISystemActor.EventEventFadeOut({'Color': 1, 'Length': 0, 'IsNoPlayAnime': True, 'IsWaitEnd': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [137.7899932861328, 107.80000305175781, -32.95000076293945], 'YAngle': 180.0, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': False, 'Target': 0, 'ActorName': '', 'IsWaitEnd': False, 'WorldPos': [137.2100067138672, 107.79000091552734, -34.0]})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 90.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [137.20840454101562, 106.35399627685547, -34.0], 'ASCommand': 'EvtWait', 'ClothWarpMode': 2, 'EnableInAir': False})
        if Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0})
        && Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Giant', 'WeaponSlot': 0})
        && Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
            Player_Event.EventTriggerPlayerRequestCreateDynamicEquipmentNoRelationPouch({'DynamicEquipmentState': 1, 'EquipmentActorName': 'Weapon_Sword_Master'})
            Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        }
    }

}

void C01_B() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'PosVector': [0.0, 2.0, 3.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.7999999523162842, 4.0], 'AtVector': [0.0, 1.600000023841858, 0.0], 'MoveTime': 45, 'IsEnableRevertFast': False})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}
