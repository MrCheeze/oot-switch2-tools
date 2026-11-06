-------- EventFlow: Dm_Gerudo_0010 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerEmitXLink', 'EventPlayerUnequip', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_Gerudo_0010/Dm_Gerudo_0010_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Gerudo_0010_Player_Adult.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake']
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

Actor: Dm_Locator[demo_pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsWorld': True}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviLookAtObject', 'EventPlayAS', 'EventNaviWarpToPlayerHomePosition', 'EventNaviMoveAroundToPlayer', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor[02]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_017
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_002_Adult
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[C03(NpcName)]
entrypoint: C03(NpcName)
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_EventStarter[C04(NpcName)]
entrypoint: C04(NpcName)
actions: ['EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventAIScheduleMoveToPos', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

void EntryPoint0() {
    Dm_Locator[demo_pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [2.25, 122.0, -107.55999755859375], 'ClothWarpMode': -1})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_Gerudo_0010'}) {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'UseDemoWait': True, 'InstanceName': 'demo_pos', 'IsWaitEnd': True, 'YAngle': -90.0, 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'ASCommand': 'EvtWait'})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DamageLStandStartPose', 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'DamageLStand', 'IsWaitEnd': True, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

        Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    } else {
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WaitingResumeInGameBgm': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
            Npc_Gerudo_002_Adult.EventTriggerParticipateEvent()
            Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'UseDemoWait': True, 'InstanceName': 'demo_pos', 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'ASCommand': 'EvtWait', 'YAngle': 90.0})
            Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Gerudo_0010_00_Smoke'})
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1.2999999523162842, 123.19999694824219, -107.0999984741211], 'ClothWarpMode': -1})

            call C01()


            call C02()


            call C03({'NpcName': ActorIdentifier(name="Npc_Gerudo_002_Adult")})


            call C04({'NpcName': ActorIdentifier(name="Npc_Gerudo_002_Adult"), 'MessageId': 'EventFlowMsg/Dm_Gerudo_0010:Dm_Gerudo_0010_0004'})

        } else {
            Npc_Gerudo_017.EventTriggerParticipateEvent()
            Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'UseDemoWait': True, 'InstanceName': 'demo_pos', 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'ASCommand': 'EvtWait', 'YAngle': 90.0})
            Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Gerudo_0010_00_Smoke'})
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1.2999999523162842, 123.19999694824219, -107.0999984741211], 'ClothWarpMode': -1})

            call C01()


            call C02()


            call C03({'NpcName': ActorIdentifier(name="Npc_Gerudo_017")})


            call C04({'NpcName': ActorIdentifier(name="Npc_Gerudo_017"), 'MessageId': 'EventFlowMsg/Dm_Gerudo_0010:Dm_Gerudo_0010_0000'})

        }
    }
}

void C01() {

    fork {
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01_Link', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 2})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'demo_pos', 'PosVector': [1.649999976158142, 1.7300000190734863, -1.3799999952316284], 'AtVector': [0.7400000095367432, 0.9800000190734863, -0.7300000190734863], 'TargetFovy': 15.319999694824219, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Power': 2.0, 'LoopEndCount': 3, 'Pattern': 4, 'IsRumbleController': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
            EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
        } {
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'OffsetBase': 1, 'PosOffset': [0.0, 0.800000011920929, 0.0]})
        } {
            DevelopEventSystemActor[02].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': True, 'Text2': ''})
        }

    }

    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
}

void C02() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C02_Link', 'ClothWarpMode': 2, 'ForceFadeFrame': 0.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'demo_pos', 'PosVector': [-2.7799999713897705, 5.789999961853027, -2.1600000858306885], 'AtVector': [-2.549999952316284, 5.320000171661377, -1.9700000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsLinearMove': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'demo_pos', 'PosVector': [-3.5, 7.320000171661377, -2.7899999618530273], 'AtVector': [-2.549999952316284, 5.320000171661377, -1.9700000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 400, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'Worry_Down', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    } {
        DevelopEventSystemActor[02].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0})
    }

}

void C03() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'C03_Link', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 2})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'demo_pos', 'PosVector': [2.0999999046325684, 1.7100000381469727, -2.2799999713897705], 'AtVector': [2.0899999141693115, 1.7100000381469727, -2.2699999809265137], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'MoveTime': 110, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'demo_pos', 'PosVector': [2.0999999046325684, 1.7100000381469727, -2.2799999713897705], 'AtVector': [2.0899999141693115, 1.7200000286102295, -2.2699999809265137], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'OffsetBase': 1, 'PosOffset': [0.0, 0.8999999761581421, 0.0]})
    } {
        Npc_EventStarter[C03(NpcName)].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [9.0, 122.0, -111.44999694824219], 'YAngle': -38.0, 'ClothWarpMode': -1})
        Npc_EventStarter[C03(NpcName)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter[C03(NpcName)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 1, 'ResetArriveTransformFixed': False})
    } {
        DevelopEventSystemActor[02].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03'})
    }

}

void C04() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C04_LookBack', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 2})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [2.0799999237060547, 123.6500015258789, -106.61000061035156], 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'demo_pos', 'PosVector': [-1.2200000286102295, 1.3300000429153442, 0.27000001072883606], 'AtVector': [-1.0, 1.3300000429153442, 0.2199999988079071], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'demo_pos', 'PosVector': [-1.2200000286102295, 1.3300000429153442, 0.27000001072883606], 'AtVector': [-1.0099999904632568, 1.3200000524520874, 0.1899999976158142], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_EventStarter[C04(NpcName)].EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': True, 'ASName': '', 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
    } {
        DevelopEventSystemActor[02].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C04'})
    }


    fork {
        Npc_EventStarter[C04(NpcName)].EventTriggerRequestLookAtTheFront()
        Npc_EventStarter[C04(NpcName)].EventAIScheduleMoveToPos({'Rot': 0.0, 'ASName': '', 'IsTurnToRot': False, 'IsAlignPos': False, 'DesiredGear': 0, 'ForceIsNotAlignmentWaitPosition': False, 'Pos': [8.890000343322754, 122.0, -109.0], 'IsWaitEnd': False})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C04_Turn', 'IsWaitEnd': True, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsLookAtObject': True, 'LookAtWorldPos': [6.639999866485596, 123.66999816894531, -106.37000274658203], 'OverwriteRotNearDist': -1.0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True, 'IsUseAfterPlayerTurn': False})
    } {
        GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-2.2300000190734863, 124.16000366210938, -107.55999755859375], 'AtVector': [2.25, 123.75, -107.55999755859375], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 240, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
        Npc_EventStarter[C04(NpcName)].EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    }
}
