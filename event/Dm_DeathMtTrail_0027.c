-------- EventFlow: Dm_DeathMtTrail_0027 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsChild', 'EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0027/Dm_DeathMtTrail_0027_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0027_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator[CP]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviMoveAtPos', 'EventNaviRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    if !Player_Event.EventQueryPlayerIsChild() {
        Dm_Locator[CP].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-41.2400016784668, 109.56999969482422, -12.829999923706055], 'ClothWarpMode': -1})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [3.4600000381469727, 1.5499999523162842, 3.799999952316284], 'AtVector': [3.059999942779541, 1.7100000381469727, 3.359999895095825], 'TargetFovy': 59.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [3.4600000381469727, 1.5499999523162842, 3.799999952316284], 'TargetFovy': 59.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.590000033378601, 0.0], 'MoveTotargetPosType': 1, 'MoveTime': 240, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'Frames': 40, 'IsWaitEnd': True})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -138.36219787597656, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-41.2400016784668, 109.62999725341797, -12.829999923706055], 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01', 'ClothWarpMode': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWaitHalf', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        } {
            UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -138.36219787597656, 'Position': [-41.45000076293945, 119.0, -12.390000343322754]})
            Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'ASCommand': 'Wait', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtWorldPos': [-45.400001525878906, 109.80000305175781, -18.200000762939453], 'WorldPos': [-41.45000076293945, 110.68000030517578, -12.449999809265137], 'LookAtDirection': -137.55050659179688, 'LookAtTarget': 4, 'MoveSpeed': 2.5999999046325684, 'DecSpeedDistance': 3.0})
        } {
            Dm_Locator[CP].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0027_Warp_01_Child'})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ENTRY', 'IsIgnoreDucking': False})
        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 300.0, 'ChangeToManualModeAfterEvent': False, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    } else {
        Dm_Locator[CP].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-41.2400016784668, 109.56999969482422, -12.829999923706055], 'ClothWarpMode': -1})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [3.4600000381469727, 1.5499999523162842, 3.799999952316284], 'AtVector': [3.059999942779541, 1.7699999809265137, 3.359999895095825], 'TargetFovy': 64.5999984741211, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 240, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [3.450000047683716, 1.5199999809265137, 3.799999952316284], 'TargetFovy': 64.5999984741211, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVector': [-0.11999999731779099, 2.4000000953674316, -0.05000000074505806], 'MoveTotargetPosType': 1, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'Frames': 40, 'IsWaitEnd': True})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -138.36219787597656, 'UseDemoWait': True, 'Position': [-41.2400016784668, 109.56999969482422, -12.829999923706055], 'IsWaitEnd': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01-AdultWarp', 'ClothWarpMode': 0})
        } {
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 0})
        } {

            call Navi()

        } {
            Dm_Locator[CP].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0027_Warp_01_Adult'})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ENTRY', 'IsIgnoreDucking': False})
        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 300.0, 'ChangeToManualModeAfterEvent': False, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    }
}

void Navi() {
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
        Event35:
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -138.36219787597656, 'Position': [-40.81999969482422, 120.23999786376953, -12.970000267028809]})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'DecSpeedDistance': 3.0, 'ASCommand': 'Wait', 'LookAtDirection': -138.36219787597656, 'LookAtWorldPos': [-45.400001525878906, 109.80000305175781, -18.200000762939453], 'LookAtTarget': 4, 'LookAtPosOffset': [-10.0, 0.0, -10.0], 'MoveSpeed': 3.0, 'WorldPos': [-40.81999969482422, 111.23999786376953, -12.970000267028809]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
        goto Event35
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Giant'}) {
        goto Event35
    } else {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -138.36219787597656, 'Position': [-41.43000030517578, 120.23999786376953, -12.430000305175781]})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'DecSpeedDistance': 3.0, 'ASCommand': 'Wait', 'LookAtDirection': -138.36219787597656, 'LookAtWorldPos': [-45.400001525878906, 109.80000305175781, -18.200000762939453], 'LookAtTarget': 4, 'LookAtPosOffset': [-10.0, 0.0, -10.0], 'WorldPos': [-41.43000030517578, 111.23999786376953, -12.430000305175781], 'MoveSpeed': 3.0})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    }
}
